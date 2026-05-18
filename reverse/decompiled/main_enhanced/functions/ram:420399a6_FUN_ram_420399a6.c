
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420399a6(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    (**(code **)(_DAT_ram_3fcdfecc + 0x5c4))
              (*(undefined4 *)(*(int *)(_DAT_ram_3fcdff68 + 8) + iVar2));
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  } while (iVar1 <= (int)(uint)*(ushort *)(iVar2 + 0x42));
  return;
}

