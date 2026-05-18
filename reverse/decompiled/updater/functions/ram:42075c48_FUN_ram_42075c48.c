
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42075c48(undefined4 param_1,uint param_2)

{
  bool bVar1;
  short sVar2;
  
  _DAT_ram_3fcb0cdc = 0;
  _DAT_ram_60044140 = _DAT_ram_60044140 & 0xf3ffffff | 0x4000000;
  _DAT_ram_60044144 = (param_2 & 0x7fff) << 2 | _DAT_ram_60044144 & 0xffe60003 | 0x100000 | 1;
  (*(code *)&SUB_ram_40010044)(1);
  _DAT_ram_60044144 = _DAT_ram_60044144 | 2;
  FUN_ram_42075c04();
  bVar1 = false;
  sVar2 = _DAT_ram_3fcb0cdc;
  while (-1 < _DAT_ram_60044174 << 0xf) {
    if ((_DAT_ram_6004a08c >> 0xc & 0x7f) < 0x46) {
      sVar2 = sVar2 + 1;
      bVar1 = true;
    }
  }
  if (bVar1) {
    _DAT_ram_3fcb0cdc = sVar2;
  }
  return;
}

