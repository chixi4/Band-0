
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403985f2(int param_1)

{
  int iVar1;
  
  FUN_ram_40396966();
  if (param_1 == 0) {
    param_1 = _DAT_ram_3fcc4e9c;
  }
  iVar1 = FUN_ram_40396d62(param_1 + 4);
  if ((iVar1 == 0) && (*(int *)(&DAT_ram_3fcb8cc8 + *(uint *)(param_1 + 0x2c) * 0x14) == 0)) {
    _DAT_ram_3fcc4e84 = ~(1 << (*(uint *)(param_1 + 0x2c) & 0x1f)) & _DAT_ram_3fcc4e84;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_40396d62(param_1 + 0x18);
  }
  FUN_ram_40396d1a(&DAT_ram_3fcb8c64,param_1 + 4);
  if (*(char *)(param_1 + 0x14c) == '\x01') {
    *(undefined1 *)(param_1 + 0x14c) = 0;
  }
  if (_DAT_ram_3fcc4e80 != 0) {
    FUN_ram_40397dd8();
  }
  if (_DAT_ram_3fcc4e9c == param_1) {
    if (_DAT_ram_3fcc4e80 == 0) {
      if (_DAT_ram_3fcb8c64 == _DAT_ram_3fcc4e8c) {
        _DAT_ram_3fcc4e9c = 0;
      }
      else {
        FUN_ram_4039856c();
      }
    }
    else {
      if (_DAT_ram_3fcc4e64 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      FUN_ram_403969de();
    }
  }
  FUN_ram_40396994();
  return;
}

