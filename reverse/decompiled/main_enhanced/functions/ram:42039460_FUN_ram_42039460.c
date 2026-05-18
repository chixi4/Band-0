
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42039460(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x72c))();
  if (iVar1 == 0) {
    iVar1 = **(int **)(_DAT_ram_3fcdff68 + 8);
  }
  else {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x5cc))(*param_1);
  }
  if (iVar1 == 0) {
    uVar2 = 0x42;
  }
  else {
    uVar2 = 0;
    *(undefined1 *)(iVar1 + 0x194) = param_1[1];
  }
  return uVar2;
}

