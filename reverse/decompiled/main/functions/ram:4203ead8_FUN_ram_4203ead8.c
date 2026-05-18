
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ead8(undefined4 param_1)

{
  int iVar1;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0xafc))(_DAT_ram_3fcdff6c + 0x20);
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff6c + 0x20,0x70,1);
  if (iVar1 != 0) {
    return;
  }
  FUN_ram_4039c11e(*(undefined4 *)(_DAT_ram_3fcdff6c + 0x20),param_1,0x70);
  return;
}

