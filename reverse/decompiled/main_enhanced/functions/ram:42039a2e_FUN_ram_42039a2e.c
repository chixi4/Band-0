
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42039a2e(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = 0;
  (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  while( true ) {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    pcVar3 = *(char **)(iVar2 + *(int *)(_DAT_ram_3fcdff68 + 8));
    if (*pcVar3 != '\0') {
      return iVar1;
    }
    if (*(short *)(pcVar3 + 10) != 0) break;
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if ((int)(uint)*(ushort *)(iVar2 + 0x42) < iVar1) {
      return 0;
    }
  }
  return iVar1;
}

