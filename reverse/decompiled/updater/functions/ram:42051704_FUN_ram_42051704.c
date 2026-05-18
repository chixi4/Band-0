
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42051704(uint param_1)

{
  int *piVar1;
  
  piVar1 = _DAT_ram_3fcb67ac;
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if ((*(byte *)(piVar1 + 0xf) + 1 & 0xff) == param_1) break;
      piVar1 = (int *)*piVar1;
    }
  }
  return (int)piVar1;
}

