
undefined4 FUN_ram_420b4e4e(uint param_1)

{
  if (param_1 < 8) {
    FUN_ram_4039691e();
    FUN_ram_40396966();
    *(undefined4 *)(&DAT_ram_3fcb8c2c + param_1 * 4) = 0;
    FUN_ram_4039691e();
    FUN_ram_40396994();
    return 0;
  }
  return 0x102;
}

