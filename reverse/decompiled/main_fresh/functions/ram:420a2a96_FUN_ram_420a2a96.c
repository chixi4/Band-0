
undefined4 FUN_ram_420a2a96(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    FUN_ram_420a301c();
    uVar1 = 0;
    if (-1 < *(int *)(param_1 + 0x768)) {
      uVar1 = FUN_ram_420b1020();
    }
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x790));
    thunk_FUN_ram_40390634(param_1);
  }
  return uVar1;
}

