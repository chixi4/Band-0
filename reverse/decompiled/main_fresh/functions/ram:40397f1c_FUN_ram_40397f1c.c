
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40397f1c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_ram_40396966();
  if (param_1 == 0) {
    param_1 = _DAT_ram_3fcc4e9c;
  }
  iVar2 = FUN_ram_40396d62(param_1 + 4);
  if ((iVar2 == 0) && (*(int *)(&DAT_ram_3fcb8cc8 + *(uint *)(param_1 + 0x2c) * 0x14) == 0)) {
    _DAT_ram_3fcc4e84 = ~(1 << (*(uint *)(param_1 + 0x2c) & 0x1f)) & _DAT_ram_3fcc4e84;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_40396d62(param_1 + 0x18);
  }
  _DAT_ram_3fcc4e70 = _DAT_ram_3fcc4e70 + 1;
  bVar1 = _DAT_ram_3fcc4e9c != param_1;
  if (bVar1) {
    _DAT_ram_3fcc4e8c = _DAT_ram_3fcc4e8c + -1;
    FUN_ram_40397dd8();
    FUN_ram_40396994();
    FUN_ram_40397e0a(param_1);
  }
  else {
    FUN_ram_40396d1a(0x3fcb8c78,param_1 + 4);
    _DAT_ram_3fcc4e90 = _DAT_ram_3fcc4e90 + 1;
    FUN_ram_40396994();
  }
  if ((_DAT_ram_3fcc4e80 != 0) && (!bVar1)) {
    if (_DAT_ram_3fcc4e64 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    FUN_ram_403969de();
    return;
  }
  return;
}

