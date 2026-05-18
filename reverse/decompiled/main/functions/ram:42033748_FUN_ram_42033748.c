
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033748(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcb6bc4 != 0) {
    (*(code *)&SUB_ram_40011a50)(_DAT_ram_3fcb6bc4 + 0x24);
    (**(code **)(_DAT_ram_3fcb6a44 + 0x40))(_DAT_ram_3fcb6bc4);
    (**(code **)(_DAT_ram_3fcb6a44 + 0x50))(_DAT_ram_3fcb6bc4 + 4);
    iVar1 = _DAT_ram_3fcb6bc4;
    if (*(int *)(_DAT_ram_3fcb6bc4 + 0x40) != 0) {
      FUN_ram_403a5e1e();
      iVar1 = _DAT_ram_3fcb6bc4;
      *(undefined4 *)(_DAT_ram_3fcb6bc4 + 0x40) = 0;
    }
    FUN_ram_403a5e1e(iVar1);
    _DAT_ram_3fcb6bc4 = 0;
  }
  return;
}

