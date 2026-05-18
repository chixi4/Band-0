
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42087590(void)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(_DAT_ram_3fcc4014 + 0x94) != '\0') {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fcf7c);
    return;
  }
  FUN_ram_4207a038(1,4,3,&DAT_ram_3c0fffac);
  FUN_ram_4208344a(0x15,0,0);
  iVar2 = _DAT_ram_3fcdfdd8;
  iVar1 = _DAT_ram_3fcc4014;
  *(undefined1 *)(_DAT_ram_3fcc4014 + 0x94) = 0;
  (**(code **)(iVar2 + 0xe8))(iVar1 + 0x18);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcc4014 + 0x18,0x420752b4,0);
  FUN_ram_420874ce();
  return;
}

