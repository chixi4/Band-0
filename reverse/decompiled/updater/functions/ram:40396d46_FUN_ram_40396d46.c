
undefined4
FUN_ram_40396d46(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  
  thunk_FUN_ram_40394ee8(param_6);
  thunk_FUN_ram_40394ee8(param_7);
  uVar1 = 0;
  if (param_7 != 0) {
    if (param_6 == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)&SUB_ram_40010488)(param_7,0);
      *(undefined1 *)(param_7 + 0x14d) = 2;
      *(int *)(param_7 + 0x30) = param_6;
      FUN_ram_4039608c(param_1,param_2,param_3,param_4,param_5,&uStack_24,param_7);
      FUN_ram_40395e9a(param_7);
      uVar1 = uStack_24;
    }
  }
  return uVar1;
}

