
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204b1e8(undefined4 param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)_DAT_ram_3fcc5214;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = FUN_ram_4039c438(param_1,(int)piVar1 + 5);
    if (iVar2 == 0) break;
    piVar1 = (int *)*piVar1;
  }
  *param_2 = (uint)*(byte *)(piVar1 + 1);
  return 1;
}

