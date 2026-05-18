
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42044958(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    iVar3 = iVar1 * 4;
    if ((int)(uint)*(byte *)(iVar2 + 10) <= iVar1) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (**(char **)(*(int *)(_DAT_ram_3fcdfedc + 8) + iVar3) == -1);
  return iVar1;
}

