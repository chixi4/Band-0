
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40397b7e(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_3fcc4e9c;
  uVar2 = _DAT_ram_3fcc4e88;
  *(undefined1 *)(_DAT_ram_3fcc4e9c + 0x14e) = 0;
  iVar4 = FUN_ram_40396d62(iVar1 + 4);
  iVar1 = _DAT_ram_3fcb8c68;
  if (iVar4 == 0) {
    _DAT_ram_3fcc4e84 = ~(1 << (*(uint *)(_DAT_ram_3fcc4e9c + 0x2c) & 0x1f)) & _DAT_ram_3fcc4e84;
  }
  if ((param_1 == -1) && (param_2 != 0)) {
    *(int *)(_DAT_ram_3fcc4e9c + 8) = _DAT_ram_3fcb8c68;
    *(undefined4 *)(_DAT_ram_3fcc4e9c + 0xc) = *(undefined4 *)(iVar1 + 8);
    *(int *)(*(int *)(iVar1 + 8) + 4) = _DAT_ram_3fcc4e9c + 4;
    *(int *)(iVar1 + 8) = _DAT_ram_3fcc4e9c + 4;
    *(undefined1 **)(_DAT_ram_3fcc4e9c + 0x14) = &DAT_ram_3fcb8c64;
    _DAT_ram_3fcb8c64 = _DAT_ram_3fcb8c64 + 1;
  }
  else {
    uVar3 = param_1 + uVar2;
    *(uint *)(_DAT_ram_3fcc4e9c + 4) = uVar3;
    if (uVar3 < uVar2) {
      FUN_ram_40396d32(_DAT_ram_3fcc4e94,_DAT_ram_3fcc4e9c + 4);
      return;
    }
    FUN_ram_40396d32(_DAT_ram_3fcc4e98,_DAT_ram_3fcc4e9c + 4);
    if (uVar3 < _DAT_ram_3fcc4e6c) {
      _DAT_ram_3fcc4e6c = uVar3;
    }
  }
  return;
}

