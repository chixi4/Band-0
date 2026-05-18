
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40398c60(void)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(_DAT_ram_3fcc4e9c + 0x18);
  *(int *)(_DAT_ram_3fcc4e9c + 0x18) = 0x19 - *(int *)(_DAT_ram_3fcc4e9c + 0x2c);
  return uVar1;
}

