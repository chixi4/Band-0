
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042c8c(void)

{
  int iVar1;
  code *in_a5;
  
  iVar1 = (*in_a5)();
  if ((*(char *)(iVar1 + 0x1ec) != '\0') && (*(char *)(iVar1 + 0x1ef) != '\0')) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x44c))(iVar1,0xd);
    *(undefined1 *)(iVar1 + 0x1ef) = 0;
  }
  return;
}

