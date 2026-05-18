
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420188b8(int param_1)

{
  int *piVar1;
  
  for (piVar1 = _DAT_ram_3fcb66b0; (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[0xb]) {
  }
  return;
}

