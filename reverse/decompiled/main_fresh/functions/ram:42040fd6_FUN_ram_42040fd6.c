
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42040fd6(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while( true ) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (*(ushort *)(iVar2 + 0x38) <= uVar1) {
      return 0;
    }
    if (*(char *)(*(int *)(*(int *)(_DAT_ram_3fcdff64 + 0x1c) + uVar1 * 4) + 10) != '\0') break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1 + 1;
}

