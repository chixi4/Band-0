
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202fea8(void)

{
  int iVar1;
  
  (**(code **)(_DAT_ram_3fcb6a44 + 0x40))(_DAT_ram_3fcb6ba0 + 0x158);
  if (_DAT_ram_3fcb6ba0 != 0) {
    iVar1 = _DAT_ram_3fcb6ba0;
    if (*(int *)(_DAT_ram_3fcb6ba0 + 0x134) != 0) {
      FUN_ram_403a5e1e();
      iVar1 = _DAT_ram_3fcb6ba0;
      *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x134) = 0;
    }
    FUN_ram_403a5e1e(iVar1);
    _DAT_ram_3fcb6ba0 = 0;
  }
  return;
}

