
undefined4 FUN_ram_4201f92e(int param_1,uint param_2,uint *param_3)

{
  if (param_2 < 0x7e) {
    *param_3 = *(uint *)(param_1 + (param_2 >> 4) * 4) >> ((param_2 & 0xf) << 1) & 3;
    return 0;
  }
  return 0xffffffff;
}

