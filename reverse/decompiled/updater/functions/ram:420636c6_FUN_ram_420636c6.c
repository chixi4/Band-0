
void FUN_ram_420636c6(int param_1,undefined4 param_2,int param_3)

{
  FUN_ram_42063688(10);
  thunk_FUN_ram_42039230();
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if (param_3 != 0) {
    FUN_ram_420662fe(param_1,param_2,3,1);
    return;
  }
  return;
}

