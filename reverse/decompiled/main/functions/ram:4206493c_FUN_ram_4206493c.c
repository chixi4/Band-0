
undefined4 FUN_ram_4206493c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iStack_34;
  
  iStack_34 = 0;
  uVar2 = FUN_ram_420b03c8(&iStack_34,param_3);
  uVar1 = 0;
  if (iStack_34 != 0) {
    FUN_ram_4206488c(param_1,param_2);
    thunk_FUN_ram_40390634(iStack_34);
    uVar1 = uVar2;
  }
  return uVar1;
}

