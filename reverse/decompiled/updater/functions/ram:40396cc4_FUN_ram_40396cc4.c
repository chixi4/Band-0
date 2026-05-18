
undefined4
FUN_ram_40396cc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40394eda(param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40394eda(0x150);
    if (iVar2 != 0) {
      (*(code *)&SUB_ram_40010488)(iVar2,0,0x150);
      *(int *)(iVar2 + 0x30) = iVar1;
      FUN_ram_4039608c(param_1,param_2,param_3,param_4,param_5,param_6,iVar2);
      FUN_ram_40395e9a(iVar2);
      return 1;
    }
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0xffffffff;
}

