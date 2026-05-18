
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40394e0c(void)

{
  _DAT_ram_3fcb6614 = 0;
  _DAT_ram_3fcb6610 = 0;
  _DAT_ram_3fcb6618 = 0;
  _DAT_ram_3fcb6604 = &DAT_ram_3fcb1fc0;
  _DAT_ram_3fcb6600 = 0x3fcb19c0;
  thunk_FUN_ram_40394f46();
  (*(code *)&SUB_ram_400107d0)(1);
  mstatus = mstatus | 8;
  FUN_ram_40394dce();
  return 1;
}

