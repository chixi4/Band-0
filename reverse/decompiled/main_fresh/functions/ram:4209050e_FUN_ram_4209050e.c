
void FUN_ram_4209050e(uint param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    *(undefined1 *)(gp + 0x234) = 1;
    if (4 < param_1) {
      uVar1 = (param_1 - 4) * 2;
      if ((int)uVar1 < (int)param_1) {
        uVar1 = param_1;
      }
      param_1 = uVar1 & 0xffff;
    }
    *(short *)(gp + 0x248) = (short)param_1;
    FUN_ram_420904ae();
    return;
  }
  *(undefined1 *)(gp + 0x234) = 0;
  FUN_ram_420903a8();
  return;
}

