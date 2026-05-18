
undefined4 FUN_ram_42054938(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 8) == '\0')) {
    iVar1 = FUN_ram_42058ae0(param_3,param_4);
  }
  else {
    iVar1 = FUN_ram_42051704();
  }
  if (iVar1 != 0) {
    uVar2 = FUN_ram_420548c6(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  FUN_ram_42051d02(param_2);
  return 0xfffffffc;
}

