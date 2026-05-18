
undefined4
FUN_ram_4206959e(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 < 0) {
    return 0xfffffffc;
  }
  iVar1 = FUN_ram_420685b4(param_3);
  if (iVar1 < 1) {
    uVar2 = 0xfffffffc;
  }
  else {
    iVar1 = FUN_ram_42068192(param_1,*(undefined2 *)((int)param_3 + 6));
    if (iVar1 == 0) {
      uVar2 = FUN_ram_4206a250(*param_1,param_2,*param_3,*(undefined2 *)((int)param_1 + 6),param_4,
                               param_5);
      return uVar2;
    }
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}

