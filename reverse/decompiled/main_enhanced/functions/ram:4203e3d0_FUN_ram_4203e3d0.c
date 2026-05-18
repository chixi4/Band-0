
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203e3d0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_a3;
  
  iVar1 = FUN_ram_4203e1f4();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                      (&DAT_ram_3fcb6a20,8,1,extraout_a3,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
    if (iVar1 == 0) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcb6a20 + 4,0x70,1);
      if (iVar1 == 0) {
        FUN_ram_4039c11e(*(undefined4 *)(_DAT_ram_3fcb6a20 + 4),param_1,0x70);
        iVar1 = 0;
      }
      else {
        iVar1 = -2;
        (**(code **)(_DAT_ram_3fcdfecc + 0xaf8))();
      }
    }
    else {
      iVar1 = -1;
      (**(code **)(_DAT_ram_3fcdfecc + 0xaf8))();
    }
  }
  return iVar1;
}

