
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420267aa(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcb6b70;
  if (_DAT_ram_3fcb6b70 != 0) {
    *(undefined2 *)(_DAT_ram_3fcb6b70 + 0xea0) = 0;
    *(undefined4 *)(iVar1 + 0x1384) = 0;
    FUN_ram_403a5e1e();
    _DAT_ram_3fcb6b70 = 0;
  }
  return;
}

