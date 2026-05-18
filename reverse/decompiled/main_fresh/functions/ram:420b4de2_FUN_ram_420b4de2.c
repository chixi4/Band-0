
undefined4 FUN_ram_420b4de2(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 < 8) {
    FUN_ram_4039691e();
    FUN_ram_40396966();
    uVar1 = *(int *)(&DAT_ram_3fcb8c2c + param_1 * 4) - 1;
    if (param_2 != 0) {
      uVar1 = *(int *)(&DAT_ram_3fcb8c2c + param_1 * 4) + 1;
    }
    *(uint *)(&DAT_ram_3fcb8c2c + param_1 * 4) = uVar1 & (int)~uVar1 >> 0x1f;
    FUN_ram_4039691e();
    FUN_ram_40396994();
    return 0;
  }
  return 0x102;
}

