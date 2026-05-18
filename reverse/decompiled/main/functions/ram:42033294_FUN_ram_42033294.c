
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033294(int param_1)

{
  param_1 = param_1 + (uint)*(ushort *)(_DAT_ram_3fcb6bc4 + 0x22);
  if (0xffff < param_1) {
    FUN_ram_4202bb54(0xc);
    return;
  }
  *(short *)(_DAT_ram_3fcb6bc4 + 0x22) = (short)param_1;
  return;
}

