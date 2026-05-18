
void FUN_ram_420583ec(int param_1,uint param_2)

{
  uint uVar1;
  
  if (2 < param_2) {
    uVar1 = FUN_ram_40391b64();
    *(short *)(param_1 + 10) = (short)(uVar1 % param_2);
    if (uVar1 % param_2 != 0) goto LAB_ram_42058402;
  }
  *(undefined2 *)(param_1 + 10) = 1;
LAB_ram_42058402:
  if (DAT_ram_3fcb6815 == '\0') {
    FUN_ram_4205598a(100,0x42048a16,0);
    DAT_ram_3fcb6815 = '\x01';
  }
  return;
}

