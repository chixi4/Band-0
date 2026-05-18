
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039d934(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_420499ca();
  _DAT_ram_60047ca0 = ~(uVar1 & 0xf0000 | 0x1000) & _DAT_ram_60047ca0;
  return 0;
}

