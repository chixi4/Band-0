
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420299b4(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = *(int **)(_DAT_ram_3fcb6b84 + 0x40);
  }
  else {
    piVar1 = (int *)*param_1;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (param_3 < *(ushort *)((int)piVar1 + 10)) {
      return 0;
    }
    if (param_2 == 0) {
      return (int)piVar1;
    }
    iVar2 = FUN_ram_42030048(piVar1[1],param_2);
    if (iVar2 == 0) break;
    piVar1 = (int *)*piVar1;
  }
  return (int)piVar1;
}

