
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202c568(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    uVar2 = 2;
    if (7 < *(byte *)(param_3 + 5)) {
      (**(code **)(_DAT_ram_3fcb6a44 + 0xa0))(2);
      piVar3 = *(int **)(param_1 + 4);
      *(undefined4 *)(param_3 + 0x14) = 0;
      *piVar3 = param_3 + 0x10;
      iVar1 = _DAT_ram_3fcb6a44;
      *(int *)(param_1 + 4) = param_3 + 0x14;
      (**(code **)(iVar1 + 0xa4))();
      if (param_2 != 0) {
        (**(code **)(_DAT_ram_3fcb6a44 + 0x14))(param_2,param_1 + 8);
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return 2;
}

