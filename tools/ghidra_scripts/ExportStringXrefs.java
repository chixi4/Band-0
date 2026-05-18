// Export string cross references and the functions that reference each string.
//
// Usage:
//   analyzeHeadless <project_dir> <project> -process main.elf \
//     -postScript ExportStringXrefs.java <output.md>

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.StringDataInstance;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.LinkedHashSet;
import java.util.Set;

public class ExportStringXrefs extends GhidraScript {
    private String clean(String value) {
        if (value == null) {
            return "";
        }
        return value.replace("\\", "\\\\")
            .replace("\n", "\\n")
            .replace("\r", "\\r")
            .replace("|", "\\|");
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            throw new IllegalArgumentException("output markdown path is required");
        }

        File out = new File(args[0]);
        out.getParentFile().mkdirs();

        PrintWriter writer = new PrintWriter(new FileWriter(out));
        writer.println("# String Cross References");
        writer.println();
        writer.println("| String address | String | Referencing functions |");
        writer.println("|---|---|---|");

        DataIterator dataIterator = currentProgram.getListing().getDefinedData(true);
        int count = 0;
        while (dataIterator.hasNext() && !monitor.isCancelled()) {
            Data data = dataIterator.next();
            StringDataInstance instance = StringDataInstance.getStringDataInstance(data);
            if (instance == null) {
                continue;
            }

            String value = instance.getStringValue();
            if (value == null || value.length() < 3) {
                continue;
            }

            Address address = data.getAddress();
            Set<String> funcs = new LinkedHashSet<String>();
            Reference[] refs = getReferencesTo(address);
            for (Reference ref : refs) {
                Function func = getFunctionContaining(ref.getFromAddress());
                if (func != null) {
                    funcs.add("`" + func.getEntryPoint() + " " + func.getName() + "`");
                } else {
                    funcs.add("`" + ref.getFromAddress() + "`");
                }
            }

            if (funcs.isEmpty()) {
                continue;
            }

            writer.println("| `" + address + "` | `" + clean(value) + "` | " + String.join("<br>", funcs) + " |");
            count++;
        }

        writer.println();
        writer.println("Total referenced strings: " + count);
        writer.close();
    }
}

