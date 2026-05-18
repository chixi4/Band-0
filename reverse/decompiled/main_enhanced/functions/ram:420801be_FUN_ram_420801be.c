
void FUN_ram_420801be(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_4207e5a8();
  *(char *)(iVar2 + 0x90) = (char)param_1;
  bVar1 = *(byte *)(iVar2 + 0x9f);
  iVar3 = FUN_ram_4207e5e6(5,param_1,DAT_ram_3fcc41d5 == '\0');
  if (iVar3 == 0) {
    *(char *)((uint)bVar1 * 0x8c + iVar2 + 299) = (char)param_1;
    iVar2 = FUN_ram_4207e5e6(0xd,iVar2 + 0xa0,DAT_ram_3fcc41d5 == '\0');
    if (iVar2 == 0) {
      FUN_ram_4207e5ae();
      return;
    }
  }
  return;
}

