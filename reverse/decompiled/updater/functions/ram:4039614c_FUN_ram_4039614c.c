
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039614c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_ram_40394d60();
  if (param_1 == 0) {
    param_1 = _DAT_ram_3fcb65fc;
  }
  iVar2 = FUN_ram_40395174(param_1 + 4);
  if ((iVar2 == 0) && (*(int *)(*(uint *)(param_1 + 0x2c) * 0x14 + 0x3fcb17cc) == 0)) {
    _DAT_ram_3fcb65e4 = ~(1 << (*(uint *)(param_1 + 0x2c) & 0x1f)) & _DAT_ram_3fcb65e4;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_40395174(param_1 + 0x18);
  }
  _DAT_ram_3fcb65d0 = _DAT_ram_3fcb65d0 + 1;
  bVar1 = _DAT_ram_3fcb65fc != param_1;
  if (bVar1) {
    _DAT_ram_3fcb65ec = _DAT_ram_3fcb65ec + -1;
    FUN_ram_40395fce();
    FUN_ram_40394d8e();
    FUN_ram_40395ff0(param_1);
  }
  else {
    FUN_ram_4039512c(0x3fcb177c,param_1 + 4);
    _DAT_ram_3fcb65f0 = _DAT_ram_3fcb65f0 + 1;
    FUN_ram_40394d8e();
  }
  if ((_DAT_ram_3fcb65e0 != 0) && (!bVar1)) {
    FUN_ram_40394dce();
    return;
  }
  return;
}

