
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403935a2(int param_1)

{
  if (param_1 != 0) {
    _DAT_ram_6000802c = _DAT_ram_6000802c & 0x7ffffff;
    _DAT_ram_60008000 = _DAT_ram_60008000 & 0xffffff7f;
    (*(code *)&SUB_ram_40010044)(0x1e);
  }
  _DAT_ram_6000802c = _DAT_ram_6000802c | 0xf8000000;
  _DAT_ram_60008000 = _DAT_ram_60008000 | 0x80;
  FUN_ram_4039354e();
  return;
}

