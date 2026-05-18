
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203f69a(void)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(_DAT_ram_3fcb4f84 + 0x94) != '\0') {
    FUN_ram_42033fd8(1,8,4,0x3c07bb0c);
    return;
  }
  FUN_ram_42033fd8(1,4,3,0x3c07e584);
  FUN_ram_4203bea0(0x15,0,0);
  iVar2 = _DAT_ram_3fcdfdd8;
  iVar1 = _DAT_ram_3fcb4f84;
  *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x94) = 0;
  (**(code **)(iVar2 + 0xe8))(iVar1 + 0x18);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcb4f84 + 0x18,0x4202d6ae,0);
  FUN_ram_4203f5d8();
  return;
}

