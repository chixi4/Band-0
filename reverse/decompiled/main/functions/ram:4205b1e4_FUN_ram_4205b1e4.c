
void FUN_ram_4205b1e4(int param_1,uint param_2)

{
  uint uVar1;
  
  if (2 < param_2) {
    uVar1 = FUN_ram_403926c4();
    *(short *)(param_1 + 10) = (short)(uVar1 % param_2);
    if (uVar1 % param_2 != 0) goto LAB_ram_4205b1fa;
  }
  *(undefined2 *)(param_1 + 10) = 1;
LAB_ram_4205b1fa:
  if (DAT_ram_3fcc5345 == '\0') {
    FUN_ram_420585b0(100,0x4204b83a,0);
    DAT_ram_3fcc5345 = '\x01';
  }
  return;
}

