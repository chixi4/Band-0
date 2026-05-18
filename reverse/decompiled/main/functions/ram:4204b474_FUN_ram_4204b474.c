
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204b474(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc5220 + 1;
  uVar2 = _DAT_ram_3fcc5220 << 3;
  _DAT_ram_3fcc5220 = iVar1;
  if (_DAT_ram_3fcc521c < 0x1f) {
    iVar3 = _DAT_ram_3fcc521c * 8;
    _DAT_ram_3fcc521c = _DAT_ram_3fcc521c + 1;
    *(undefined4 *)(&DAT_ram_3fcc1d90 + iVar3) = param_1;
    *(uint *)(&DAT_ram_3fcc1d94 + iVar3) = param_2 & 7 | uVar2;
  }
  else {
    _DAT_ram_3fcc1d94 = param_2 & 7 | uVar2;
    _DAT_ram_3fcc1d90 = param_1;
    FUN_ram_4204b288(0);
  }
  if (iVar1 == 0x1fffffff) {
    FUN_ram_4204b256();
    return;
  }
  return;
}

