
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201a60a(int param_1)

{
  uint in_a4;
  uint in_a5;
  uint uVar1;
  
  if (in_a4 != in_a5) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 3) {
    if (3 < uVar1) {
      if (uVar1 != 4) {
        return;
      }
      uVar1 = in_a4;
      if (_DAT_ram_3fcc5080 != 2) {
        return;
      }
      goto LAB_ram_4201a646;
    }
    if (uVar1 != in_a4) {
      if (uVar1 != 2) {
        return;
      }
      FUN_ram_42018caa(0);
      return;
    }
  }
  if ((_DAT_ram_3fcc5080 & 0xfffffffd) != 0) {
    return;
  }
  _DAT_ram_3fcc5080 = 1;
  uVar1 = _DAT_ram_3fcc5080;
LAB_ram_4201a646:
  _DAT_ram_3fcc5080 = uVar1;
  _DAT_ram_3fcc507c = 0;
  FUN_ram_4201a51e();
  _DAT_ram_3fcc5070 = FUN_ram_403926c4();
  _DAT_ram_3fcc5070 = _DAT_ram_3fcc5070 % 10;
  FUN_ram_42018dcc();
  return;
}

