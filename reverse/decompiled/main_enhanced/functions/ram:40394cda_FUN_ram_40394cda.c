
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394cda(int param_1,int param_2)

{
  if (param_1 == 0) {
    _DAT_ram_60008068 = _DAT_ram_60008068 | 0x40;
    _DAT_ram_6000801c = _DAT_ram_6000801c & 0xffffc03f | 0x500;
  }
  else {
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0xffffffbf;
    _DAT_ram_6000801c = _DAT_ram_6000801c & 0xffffc03f | 0x140;
    (*(code *)&SUB_ram_40010044)(0x32);
  }
  if (param_2 == 0) {
    _DAT_ram_60008068 = _DAT_ram_60008068 | 0x80;
  }
  else {
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0xffffff7f;
  }
  return;
}

