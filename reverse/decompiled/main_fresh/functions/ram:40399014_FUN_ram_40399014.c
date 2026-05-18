
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40399014(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 < 1) {
    if (param_1 == 0) {
      param_1 = _DAT_ram_3fcc4e9c;
    }
    param_1 = param_1 + param_2 * 4;
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined4 *)(param_1 + 0x54) = param_4;
  }
  return;
}

