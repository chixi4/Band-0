
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42040ee0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x388))();
  if (iVar1 == 0) {
    return 2;
  }
  if (param_2 != 0x7f) {
    *(char *)(iVar1 + 0xe) = (char)param_2;
    return 0;
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  *(undefined1 *)(iVar1 + 0xe) = *(undefined1 *)(iVar2 + 0x10);
  return 0;
}

