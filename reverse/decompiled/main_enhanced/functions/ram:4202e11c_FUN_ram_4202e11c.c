
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202e11c(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcb6ba0;
  *(ushort *)(_DAT_ram_3fcb6ba0 + 0xf4) = *(ushort *)(_DAT_ram_3fcb6ba0 + 0xf4) & 0xfe00;
  *(byte *)(iVar1 + 0x105) = *(byte *)(iVar1 + 0x105) & 0xf7;
  (*(code *)&SUB_ram_40010488)(iVar1 + 0x106,0,7);
  FUN_ram_4202bac4();
  return;
}

