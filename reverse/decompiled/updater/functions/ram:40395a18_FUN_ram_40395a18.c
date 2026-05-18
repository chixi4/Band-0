
undefined4 FUN_ram_40395a18(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_ram_403968bc();
  if ((iVar1 == iVar2) || (iVar1 = FUN_ram_403958fa(param_1,param_2), uVar3 = 0, iVar1 != 0)) {
    uVar3 = 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return uVar3;
}

