
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204073c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(_DAT_ram_3fcdfecc + 0xbb0);
  uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x814))(param_1 + 0xe);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar2 = (*pcVar3)(uVar1,*(char *)(iVar2 + 100) != '\0');
  if (iVar2 == 0) {
    pcVar3 = *(code **)(_DAT_ram_3fcdfecc + 0x9fc);
    uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x814))(param_1 + 0xe);
    (*pcVar3)(0x7033,uVar1);
    return 0;
  }
  uVar1 = FUN_ram_42040438(param_1,param_2,param_3,param_4);
  return uVar1;
}

