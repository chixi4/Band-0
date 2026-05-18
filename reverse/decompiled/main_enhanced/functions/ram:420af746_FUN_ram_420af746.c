
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420af746(int param_1)

{
  (*(code *)&SUB_ram_40012638)(0);
  FUN_ram_420af5b4();
  FUN_ram_420af6a2();
  FUN_ram_420af4e4(4);
  (*(code *)&SUB_ram_4001265c)((uint)DAT_ram_3fcc4ca4 * 0x14 + 0x31);
  (*(code *)&SUB_ram_40012640)(0x44,0x14);
  _DAT_ram_600440fc = _DAT_ram_600440fc & 0xffff00ff | 0xc800;
  if (param_1 != 0) {
    FUN_ram_420af724();
    return;
  }
  return;
}

