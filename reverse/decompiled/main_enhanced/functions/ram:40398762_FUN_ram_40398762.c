
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40398762(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  piVar5 = *(int **)(iVar2 + 0x28);
  *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(*(int *)(iVar2 + 0x20) + 4) = *(undefined4 *)(iVar2 + 0x1c);
  iVar3 = iVar2 + 0x18;
  if (piVar5[1] == iVar3) {
    piVar5[1] = *(int *)(iVar2 + 0x20);
  }
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *piVar5 = *piVar5 + -1;
  iVar4 = _DAT_ram_3fcb8c90;
  if (_DAT_ram_3fcc4e64 == 0) {
    piVar5 = *(int **)(iVar2 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) + 4) = *(undefined4 *)(iVar2 + 8);
    iVar3 = iVar2 + 4;
    if (piVar5[1] == iVar3) {
      piVar5[1] = *(int *)(iVar2 + 0xc);
    }
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *piVar5 = *piVar5 + -1;
    _DAT_ram_3fcc4e84 = 1 << (*(uint *)(iVar2 + 0x2c) & 0x1f) | _DAT_ram_3fcc4e84;
    iVar4 = *(uint *)(iVar2 + 0x2c) * 0x14;
    piVar5 = (int *)(&DAT_ram_3fcb8cc8 + iVar4);
    iVar4 = *(int *)(iVar4 + 0x3fcb8ccc);
    *(int *)(iVar2 + 8) = iVar4;
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar4 + 8);
    *(int *)(*(int *)(iVar4 + 8) + 4) = iVar3;
    *(int *)(iVar4 + 8) = iVar3;
    *(int **)(iVar2 + 0x14) = piVar5;
    *piVar5 = *piVar5 + 1;
    FUN_ram_40397dd8();
  }
  else {
    *(int *)(iVar2 + 0x1c) = _DAT_ram_3fcb8c90;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar4 + 8);
    *(int *)(*(int *)(iVar4 + 8) + 4) = iVar3;
    *(int *)(iVar4 + 8) = iVar3;
    *(undefined1 **)(iVar2 + 0x28) = &DAT_ram_3fcb8c8c;
    _DAT_ram_3fcb8c8c = _DAT_ram_3fcb8c8c + 1;
  }
  bVar1 = *(uint *)(_DAT_ram_3fcc4e9c + 0x2c) < *(uint *)(iVar2 + 0x2c);
  if (bVar1) {
    _DAT_ram_3fcc4e78 = 1;
  }
  return bVar1;
}

