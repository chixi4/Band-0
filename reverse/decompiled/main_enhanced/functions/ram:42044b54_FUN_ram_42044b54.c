
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42044b54(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x240))();
  uVar2 = 0xc;
  if (iVar1 != 0) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x508))();
    (**(code **)(_DAT_ram_3fcdfecc + 0xbec))();
    uVar2 = 0;
    *(undefined2 *)(_DAT_ram_3fcdfec0 + 0x10) = 0;
  }
  return uVar2;
}

