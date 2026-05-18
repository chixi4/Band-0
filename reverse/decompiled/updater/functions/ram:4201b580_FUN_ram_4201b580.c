
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b580(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcb66fc + 1;
  uVar2 = _DAT_ram_3fcb66fc << 3;
  _DAT_ram_3fcb66fc = iVar1;
  if (_DAT_ram_3fcb66f8 < 0x1f) {
    iVar3 = _DAT_ram_3fcb66f8 * 8;
    _DAT_ram_3fcb66f8 = _DAT_ram_3fcb66f8 + 1;
    *(undefined4 *)(&DAT_ram_3fcb3598 + iVar3) = param_1;
    *(uint *)(&DAT_ram_3fcb359c + iVar3) = param_2 & 7 | uVar2;
  }
  else {
    _DAT_ram_3fcb359c = param_2 & 7 | uVar2;
    _DAT_ram_3fcb3598 = param_1;
    FUN_ram_4201b418(0);
  }
  if (iVar1 == 0x1fffffff) {
    FUN_ram_4201b3e6();
    return;
  }
  return;
}

