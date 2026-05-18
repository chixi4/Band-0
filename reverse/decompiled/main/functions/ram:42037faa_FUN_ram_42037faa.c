
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037faa(int param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1 == 1) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xbc0))(0x10);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
  }
  else if (param_1 == 0) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xbc0))(1);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
  }
  else if (param_1 == 2) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xbc0))(0x20);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
  }
  else {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x39,&DAT_ram_3c0f57e0,param_1,0,2,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  puVar1 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfecc + 0x30))(1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0xff;
    puVar1[1] = 10;
    puVar1[2] = 0xc0;
    puVar1[3] = (char)param_1;
    puVar1[4] = param_2;
    puVar1[5] = param_4;
    FUN_ram_4039c11e(puVar1 + 6,param_3,6);
    (**(code **)(_DAT_ram_3fcdfecc + 0x758))(puVar1);
  }
  return 0;
}

