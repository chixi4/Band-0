
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42041120(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x4d4))(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x41) = uVar1;
  FUN_ram_4039c11e(param_1 + 0x2f,param_1 + 0x34,5);
  if (*(code **)(_DAT_ram_3fcdff64 + 0x58) != (code *)0x0) {
    (**(code **)(_DAT_ram_3fcdff64 + 0x58))(param_1,0);
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1,1);
  return 0;
}

