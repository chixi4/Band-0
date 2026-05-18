
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039153e(void)

{
  undefined4 uVar1;
  
  _DAT_ram_60002010 = _DAT_ram_60002010 & 0x7fffffff;
  _DAT_ram_60003010 = _DAT_ram_60003010 & 0x7fffffff;
  FUN_ram_403914fc(5,0,0,0);
  uVar1 = 0xffffffff;
  if ((_DAT_ram_60002000 & 0xf) == 0) {
    FUN_ram_403914fc(0x66,0,0,0);
    FUN_ram_403914fc(0x99,0,0,0);
    uVar1 = 0;
  }
  return uVar1;
}

