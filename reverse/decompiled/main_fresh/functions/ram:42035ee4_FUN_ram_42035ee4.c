
bool FUN_ram_42035ee4(int param_1,int param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      thunk_EXT_FUN_ram_40010488(param_1,0,0x58);
      *(undefined4 *)(param_1 + 0x48) = param_3;
      FUN_ram_42035bb0(param_3,param_2);
      thunk_EXT_FUN_ram_40010488(param_1,0,0x10);
      FUN_ram_42035c8e(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
      FUN_ram_42035e5a(param_1 + 0x10,param_1);
      FUN_ram_42035e5a(param_1 + 0x20,param_1 + 0x10);
      FUN_ram_42035eac(param_1);
    }
    return param_2 != 0;
  }
  return false;
}

