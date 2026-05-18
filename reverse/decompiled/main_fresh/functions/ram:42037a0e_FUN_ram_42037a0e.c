
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42037a0e(void)

{
  int iVar1;
  code *pcVar2;
  
  (*(code *)&SUB_ram_40012660)(1,1,1);
  (**(code **)(_DAT_ram_3fcdfecc + 0xa0c))(0);
  (**(code **)(_DAT_ram_3fcdfecc + 200))(0xff);
  (**(code **)(_DAT_ram_3fcdfecc + 0xab4))(0xffffffff);
  DAT_ram_3fcdfe66 = 1;
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  pcVar2 = *(code **)(_DAT_ram_3fcdfecc + 0x114);
  *(short *)(iVar1 + 0x24) = *(short *)(iVar1 + 0x24) + -5;
  iVar1 = (*pcVar2)();
  *(undefined1 *)(iVar1 + 0x62) = 1;
  return;
}

