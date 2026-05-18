
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039689e(int param_1,uint param_2)

{
  if (param_2 < 2) {
    if (param_1 == 0) {
      param_1 = _DAT_ram_3fcb65fc;
    }
    return *(undefined4 *)(param_1 + (param_2 + 0x14) * 4);
  }
  return 0;
}

