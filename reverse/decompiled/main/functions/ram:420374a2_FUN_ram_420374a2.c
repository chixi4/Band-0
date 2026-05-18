
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420374a2(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(_DAT_ram_3fcdfeb8 + 4) == 0) {
    if (*(int *)(*(int *)(_DAT_ram_3fcdfeb8 + 0xc) + 0x10) == 0) {
      _DAT_ram_6004e014 = 0xffffffff;
      _DAT_ram_6004e034 = 0xffffffff;
    }
    iVar2 = (**(code **)(_DAT_ram_3fcdfec8 + 4))
                      (7,0,*(undefined4 *)(_DAT_ram_3fcdfecc + 0x8a0),0,_DAT_ram_3fcdfeb8 + 8,
                       _DAT_ram_3fcdfecc + 0x1000,*(code **)(_DAT_ram_3fcdfec8 + 4));
    if (iVar2 == 0) {
      *(undefined4 *)(_DAT_ram_3fcdfeb8 + 4) = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

