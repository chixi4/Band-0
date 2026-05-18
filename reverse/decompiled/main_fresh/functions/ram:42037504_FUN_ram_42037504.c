
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037504(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_a3;
  undefined4 extraout_a3;
  undefined4 in_a4;
  undefined4 extraout_a4;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdfeb8,0x10,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                      (_DAT_ram_3fcdfeb8 + 0xc,0x1c,1,extraout_a3,extraout_a4,
                       *(code **)(_DAT_ram_3fcdfecc + 0x97c));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

