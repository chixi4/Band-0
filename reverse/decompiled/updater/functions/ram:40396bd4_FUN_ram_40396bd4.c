
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40396bd4(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  FUN_ram_40394d36();
  cVar1 = *(char *)(param_1 + param_2 + 0x14c);
  iVar2 = param_2 * 4 + param_1;
  *(undefined1 *)(param_1 + param_2 + 0x14c) = 2;
  *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
  iVar2 = _DAT_ram_3fcb1794;
  if (cVar1 == '\x01') {
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (_DAT_ram_3fcb65c4 == 0) {
      piVar5 = *(int **)(param_1 + 0x14);
      *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = *(undefined4 *)(param_1 + 8);
      iVar2 = param_1 + 4;
      if (piVar5[1] == iVar2) {
        piVar5[1] = *(int *)(param_1 + 0xc);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *piVar5 = *piVar5 + -1;
      _DAT_ram_3fcb65e4 = 1 << (uVar3 & 0x1f) | _DAT_ram_3fcb65e4;
      piVar5 = (int *)(uVar3 * 0x14 + 0x3fcb17cc);
      iVar4 = *(int *)(uVar3 * 0x14 + 0x3fcb17d0);
      *(int *)(param_1 + 8) = iVar4;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 8);
      *(int *)(*(int *)(iVar4 + 8) + 4) = iVar2;
      *(int *)(iVar4 + 8) = iVar2;
      *(int **)(param_1 + 0x14) = piVar5;
    }
    else {
      piVar5 = (int *)&DAT_ram_3fcb1790;
      *(int *)(param_1 + 0x1c) = _DAT_ram_3fcb1794;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 8);
      *(int *)(*(int *)(iVar2 + 8) + 4) = param_1 + 0x18;
      *(int *)(iVar2 + 8) = param_1 + 0x18;
      *(undefined1 **)(param_1 + 0x28) = &DAT_ram_3fcb1790;
    }
    *piVar5 = *piVar5 + 1;
    if (*(uint *)(_DAT_ram_3fcb65fc + 0x2c) < uVar3) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      _DAT_ram_3fcb65d8 = 1;
    }
  }
  FUN_ram_40394d50();
  return;
}

