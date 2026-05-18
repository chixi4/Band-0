
void FUN_ram_42035c5a(uint param_1)

{
  if (3 < param_1) {
    FUN_ram_42033fd8(1,0x400,2,0x3c07f898,param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x3fcb510a) = 0;
  return;
}

