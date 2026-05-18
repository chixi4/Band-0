
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42045074(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  bVar1 = *(byte *)(iVar2 + 0x3a);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if ((uint)*(byte *)(iVar2 + 10) + (uint)bVar1 == 1) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    *(char *)(iVar2 + 0x3a) = *(char *)(iVar2 + 0x3a) + '\x01';
  }
  FUN_ram_42044f92();
  return;
}

