
void FUN_ram_420530f0(uint param_1)

{
  undefined4 unaff_retaddr;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)register0x00002008;
  if (param_1 != 0) goto LAB_ram_420530fe;
  do {
    register0x00002008 = (BADSPACEBASE *)(puVar1 + -0x10);
    *(undefined4 *)(puVar1 + -4) = unaff_retaddr;
    unaff_retaddr = 0x420530fe;
    param_1 = FUN_ram_4039bf1e();
LAB_ram_420530fe:
    puVar1 = (undefined1 *)register0x00002008;
  } while (param_1 != (param_1 + 3 & 0xfffffffc));
  thunk_FUN_ram_40390634();
  return;
}

