
void FUN_ram_42047b06(uint param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    *(undefined1 *)(gp + 0x100) = 1;
    if (4 < param_1) {
      uVar1 = (param_1 - 4) * 2;
      if ((int)uVar1 < (int)param_1) {
        uVar1 = param_1;
      }
      param_1 = uVar1 & 0xffff;
    }
    *(short *)(gp + 0x114) = (short)param_1;
    FUN_ram_42047aa6();
    return;
  }
  *(undefined1 *)(gp + 0x100) = 0;
  FUN_ram_420479a0();
  return;
}

