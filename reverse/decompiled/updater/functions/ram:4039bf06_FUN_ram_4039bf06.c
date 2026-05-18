
/* WARNING: Removing unreachable block (ram,0x4039bfce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039bf06(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (DAT_ram_3fcb5371 == '\x02') {
    (*(code *)&SUB_ram_40011fd8)(0);
    _DAT_ram_3fcb53f8 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcb56c4 = _DAT_ram_3fcb56c4 + 1;
    uVar2 = (uint)_DAT_ram_3fcb53f8 - _DAT_ram_3fcb53f0;
    iVar1 = ((int)((ulonglong)_DAT_ram_3fcb53f8 >> 0x20) - _DAT_ram_3fcb53f4) -
            (uint)((uint)_DAT_ram_3fcb53f8 < uVar2);
    _DAT_ram_3fcb56cc =
         (uint)(_DAT_ram_3fcb56c8 + uVar2 < _DAT_ram_3fcb56c8) + _DAT_ram_3fcb56cc + iVar1;
    _DAT_ram_3fcb56dc =
         (uint)(_DAT_ram_3fcb56d8 + uVar2 < _DAT_ram_3fcb56d8) + _DAT_ram_3fcb56dc + iVar1;
    _DAT_ram_3fcb540c =
         (uint)(uVar2 + _DAT_ram_3fcb5408 < _DAT_ram_3fcb5408) + _DAT_ram_3fcb540c + iVar1;
    _DAT_ram_3fcb5408 = uVar2 + _DAT_ram_3fcb5408;
    _DAT_ram_3fcb56c8 = _DAT_ram_3fcb56c8 + uVar2;
    _DAT_ram_3fcb56d8 = _DAT_ram_3fcb56d8 + uVar2;
  }
  if (DAT_ram_3fcb5545 != '\0') {
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar1 != 0) {
      uVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      if (uVar3 < CONCAT44(_DAT_ram_3fcb53ec,_DAT_ram_3fcb53e8)) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5460);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))(0x3fcb5460,_DAT_ram_3fcb53e8 - (int)uVar3,0);
      }
      else {
        DAT_ram_3fcb538a = 0;
      }
    }
  }
  FUN_ram_420479e0(1);
  return;
}

