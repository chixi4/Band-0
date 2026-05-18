
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42039a8a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    if ((*(byte *)(*(int *)(iVar2 + *(int *)(_DAT_ram_3fcdff68 + 8)) + 0x108) & 1) != 0) {
      return iVar1;
    }
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  } while (iVar1 <= (int)(uint)*(ushort *)(iVar2 + 0x42));
  return 0;
}

