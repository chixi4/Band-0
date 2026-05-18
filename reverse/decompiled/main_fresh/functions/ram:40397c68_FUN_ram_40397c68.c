
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40397c68(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  FUN_ram_40396966();
  _DAT_ram_3fcc4e8c = _DAT_ram_3fcc4e8c + 1;
  if (_DAT_ram_3fcc4e8c == 1) {
    puVar4 = &DAT_ram_3fcb8cc8;
    do {
      puVar5 = puVar4 + 0x14;
      FUN_ram_40396d00(puVar4);
      puVar4 = puVar5;
    } while (puVar5 != (undefined1 *)0x3fcb8ebc);
    FUN_ram_40396d00(0x3fcb8cb4);
    FUN_ram_40396d00(0x3fcb8ca0);
    FUN_ram_40396d00(&DAT_ram_3fcb8c8c);
    FUN_ram_40396d00(0x3fcb8c78);
    FUN_ram_40396d00(&DAT_ram_3fcb8c64);
    _DAT_ram_3fcc4e98 = 0x3fcb8cb4;
    _DAT_ram_3fcc4e94 = 0x3fcb8ca0;
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  if ((_DAT_ram_3fcc4e9c == 0) ||
     (((_DAT_ram_3fcc4e80 == 0 && (_DAT_ram_3fcc4e9c != 0)) &&
      (*(uint *)(_DAT_ram_3fcc4e9c + 0x2c) <= uVar2)))) {
    _DAT_ram_3fcc4e9c = param_1;
  }
  _DAT_ram_3fcc4e70 = _DAT_ram_3fcc4e70 + 1;
  _DAT_ram_3fcc4e84 = 1 << (uVar2 & 0x1f) | _DAT_ram_3fcc4e84;
  piVar3 = (int *)(&DAT_ram_3fcb8cc8 + uVar2 * 0x14);
  iVar1 = *(int *)(uVar2 * 0x14 + 0x3fcb8ccc);
  *(int *)(param_1 + 8) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 8);
  *(int *)(*(int *)(iVar1 + 8) + 4) = param_1 + 4;
  *(int *)(iVar1 + 8) = param_1 + 4;
  *(int **)(param_1 + 0x14) = piVar3;
  *piVar3 = *piVar3 + 1;
  if (_DAT_ram_3fcc4e80 != 0) {
    if (*(uint *)(_DAT_ram_3fcc4e9c + 0x2c) < uVar2 + 1) {
      FUN_ram_403969de();
    }
  }
  FUN_ram_40396994();
  return;
}

