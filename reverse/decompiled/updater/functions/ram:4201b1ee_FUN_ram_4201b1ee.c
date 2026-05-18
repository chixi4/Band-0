
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b1ee(undefined1 *param_1)

{
  _DAT_ram_600080f8 = _DAT_ram_600080f8 & 0xfffffffd;
  _DAT_ram_600080cc =
       _DAT_ram_600080cc & 0xcbff000f | 0x20 | ((byte)param_1[3] & 1) << 0xe |
       ((byte)param_1[4] & 1) << 0xf | 0x3ff0000 | ((byte)param_1[2] & 1) << 0x1a | 0x8000000;
  FUN_ram_40393a94(0x61,0,5,2,0,*param_1);
  _DAT_ram_600080cc = _DAT_ram_600080cc & 0xbfffffff | ((byte)param_1[1] & 1) << 0x1e;
  return;
}

