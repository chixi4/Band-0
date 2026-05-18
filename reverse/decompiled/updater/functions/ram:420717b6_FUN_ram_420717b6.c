
undefined4 FUN_ram_420717b6(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x158) & 0x800) != 0) {
    param_1 = param_1 + 0x168;
    do {
      iVar3 = *(int *)(param_1 + 4);
      if ((param_3 == iVar3) &&
         (iVar1 = FUN_ram_40399d6c(*(undefined4 *)(param_1 + 8),param_2,param_3), iVar1 == 0)) {
        return 0;
      }
      if ((iVar3 == 4) &&
         (iVar3 = FUN_ram_40399d6c(0x3c07a7f8,*(undefined4 *)(param_1 + 8),4), iVar3 == 0)) {
        return 0;
      }
      param_1 = *(int *)(param_1 + 0xc);
    } while (param_1 != 0);
    uVar2 = 0xffffd800;
  }
  return uVar2;
}

