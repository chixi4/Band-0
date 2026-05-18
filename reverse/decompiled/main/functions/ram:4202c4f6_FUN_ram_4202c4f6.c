
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202c4f6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(_DAT_ram_3fcb6a44 + 0xa0))();
  iVar1 = *param_1;
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), *param_1 = iVar2, iVar2 == 0)) {
    param_1[1] = (int)param_1;
  }
  (**(code **)(_DAT_ram_3fcb6a44 + 0xa4))();
  if (iVar1 != 0) {
    iVar1 = iVar1 + -0x10;
  }
  return iVar1;
}

