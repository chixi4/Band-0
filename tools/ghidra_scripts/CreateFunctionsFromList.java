// Create functions at addresses listed in a text file, one hex address per line.

import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

import java.io.BufferedReader;
import java.io.FileReader;

public class CreateFunctionsFromList extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            throw new IllegalArgumentException("address list path is required");
        }

        int created = 0;
        int existing = 0;
        int failed = 0;
        BufferedReader reader = new BufferedReader(new FileReader(args[0]));
        String line;
        while ((line = reader.readLine()) != null && !monitor.isCancelled()) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) {
                continue;
            }
            Address address = toAddr(line);
            Function old = getFunctionAt(address);
            if (old != null) {
                existing++;
                continue;
            }
            try {
                disassemble(address);
                String name = "FUN_ram_" + address.toString().replace(":", "_");
                CreateFunctionCmd cmd = new CreateFunctionCmd(name, address, null, SourceType.USER_DEFINED, true, false);
                if (cmd.applyTo(currentProgram, monitor)) {
                    created++;
                } else {
                    failed++;
                }
            } catch (Exception exc) {
                failed++;
            }
        }
        reader.close();
        println("CreateFunctionsFromList: created=" + created + " existing=" + existing + " failed=" + failed);
    }
}
