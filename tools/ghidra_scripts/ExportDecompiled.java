// Export all Ghidra decompiler output for the current program.
//
// Usage:
//   analyzeHeadless <project_dir> <project> -import main.elf \
//     -postScript ExportDecompiled.java <output_dir>

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportDecompiled extends GhidraScript {
    private String safeName(Function function) {
        String name = function.getName();
        Address entry = function.getEntryPoint();
        return entry.toString() + "_" + name.replaceAll("[^A-Za-z0-9_.$-]", "_");
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            throw new IllegalArgumentException("output directory argument is required");
        }

        File outDir = new File(args[0]);
        File funcsDir = new File(outDir, "functions");
        funcsDir.mkdirs();

        DecompileOptions options = new DecompileOptions();
        DecompInterface decompiler = new DecompInterface();
        decompiler.setOptions(options);
        decompiler.openProgram(currentProgram);

        PrintWriter index = new PrintWriter(new FileWriter(new File(outDir, "FUNCTION_INDEX.md")));
        PrintWriter all = new PrintWriter(new FileWriter(new File(outDir, "all_functions.c")));
        index.println("# Decompiled Function Index");
        index.println();
        index.println("| Entry | Name | Body size | Status |");
        index.println("|---|---|---:|---|");

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int count = 0;
        while (functions.hasNext() && !monitor.isCancelled()) {
            Function function = functions.next();
            count++;
            monitor.setMessage("Decompiling " + function.getName());

            DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
            String code;
            String status;
            if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                code = result.getDecompiledFunction().getC();
                status = "ok";
            } else {
                code = "/* decompile failed: " + result.getErrorMessage() + " */\n";
                status = "failed";
            }

            String fileName = safeName(function) + ".c";
            PrintWriter one = new PrintWriter(new FileWriter(new File(funcsDir, fileName)));
            one.print(code);
            one.close();

            all.println();
            all.println("/* ===== " + function.getEntryPoint() + " " + function.getName() + " ===== */");
            all.print(code);
            index.println("| `" + function.getEntryPoint() + "` | `" + function.getName() + "` | " + code.length() + " | " + status + " |");
        }

        index.println();
        index.println("Total functions: " + count);
        index.close();
        all.close();
        decompiler.dispose();
    }
}

