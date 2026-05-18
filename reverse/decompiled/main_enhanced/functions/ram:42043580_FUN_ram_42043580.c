
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42043580(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_a3;
  undefined4 extraout_a3;
  undefined4 extraout_a3_00;
  undefined4 in_a4;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdfef8,8,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                      (_DAT_ram_3fcdfef8,1,0x20,extraout_a3,extraout_a4,
                       *(code **)(_DAT_ram_3fcdfecc + 0x97c));
    if (iVar1 == 0) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                        (_DAT_ram_3fcdfef8 + 4,0xc,1,extraout_a3_00,extraout_a4_00,
                         *(code **)(_DAT_ram_3fcdfecc + 0x97c));
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

