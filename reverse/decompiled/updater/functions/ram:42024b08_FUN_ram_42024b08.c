
undefined4 FUN_ram_42024b08(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  if (1 < param_3) {
    return 0xfffffffc;
  }
  if ((uint)*(ushort *)((int)param_1 + 6) << 5 <= param_2) {
    if (param_3 == 0) {
      return 0;
    }
    iVar1 = FUN_ram_4202479e(param_1,(param_2 >> 5) + 1);
    if (iVar1 != 0) {
      return 0xfffffff0;
    }
  }
  puVar2 = (uint *)(*param_1 + (param_2 >> 5) * 4);
  *puVar2 = ~(1 << (param_2 & 0x1f)) & *puVar2 | param_3 << (param_2 & 0x1f);
  return 0;
}

