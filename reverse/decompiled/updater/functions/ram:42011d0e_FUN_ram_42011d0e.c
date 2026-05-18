
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42011d0e(void)

{
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_18 = _DAT_ram_3c0747b8;
  uStack_14 = DAT_ram_3c0747bc;
  FUN_ram_4201b1ee(&uStack_18);
  _DAT_ram_60008044 = _DAT_ram_60008044 | 0x200;
  FUN_ram_42011aa0(0x40380dde,0,0x200,1);
  _DAT_ram_60008038 = _DAT_ram_60008038 | 0x200;
  return;
}

