
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202e0fa(int param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(_DAT_ram_3fcb6ba0 + (param_1 + 0x11) * 0x10);
  *puVar1 = *puVar1 & 0xef00;
  FUN_ram_4202bac4();
  return;
}

