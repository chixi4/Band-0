
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420968ca(uint param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  _DAT_ram_3fcc47f0 = param_1;
  _DAT_ram_3fcc47f4 = param_2;
  _DAT_ram_6004d020 = _DAT_ram_6004d020 & 0xfc000000 | param_1 & 0x3ffffff;
  _DAT_ram_6004d00c = _DAT_ram_6004d00c | 0x100;
  _DAT_ram_6004d030 = param_3 >> 10 & 0xffff | param_4 << 0x10;
  _DAT_ram_6004d024 = _DAT_ram_6004d024 & 0xffff0000 | param_5 & 0xffff;
  return;
}

