
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044c4e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_42040f3a();
  iVar2 = *(int *)(gp + -0x2b8) + 0x93;
  FUN_ram_40399daa(param_1 + 0x32c,iVar2,6);
  if (param_2 == 0) {
    if ((_DAT_ram_3fcb5344 & 4) == 0) {
      FUN_ram_40399daa(param_1 + 4,iVar1 + 0x24,6);
      return;
    }
    FUN_ram_40399daa(param_1 + 4,iVar2);
    DAT_ram_3fcb512d = 1;
  }
  return;
}

