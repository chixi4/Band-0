
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420624ae(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcc53a8;
  iVar2 = _DAT_ram_3fcc53a8 + param_1;
  *(char *)(iVar2 + 0x1e) = *(char *)(iVar2 + 0x1e) + '\x01';
  if ((((*(char *)(iVar2 + 0x10) != '\0') && (*(int *)(iVar1 + 8) != -1)) &&
      (*(char *)(iVar1 + 0x22) == '\0')) && (iVar1 = FUN_ram_420623b2(1), iVar1 != 0)) {
    *(char *)(_DAT_ram_3fcc53a8 + param_1 + 0x1e) =
         *(char *)(_DAT_ram_3fcc53a8 + param_1 + 0x1e) + -1;
  }
  return;
}

