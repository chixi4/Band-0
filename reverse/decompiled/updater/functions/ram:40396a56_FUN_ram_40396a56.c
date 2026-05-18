
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40396a56(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x48);
    if (*(uint *)(param_1 + 0x48) < param_2) {
      uVar2 = param_2;
    }
    uVar3 = *(uint *)(param_1 + 0x2c);
    if ((uVar3 != uVar2) && (*(int *)(param_1 + 0x4c) == 1)) {
      *(uint *)(param_1 + 0x2c) = uVar2;
      if (-1 < *(int *)(param_1 + 0x18)) {
        *(uint *)(param_1 + 0x18) = 0x19 - uVar2;
      }
      if (*(int *)(param_1 + 0x14) == uVar3 * 0x14 + 0x3fcb17cc) {
        iVar5 = param_1 + 4;
        iVar1 = FUN_ram_40395174(iVar5);
        uVar2 = 1 << (*(uint *)(param_1 + 0x2c) & 0x1f);
        if (iVar1 == 0) {
          _DAT_ram_3fcb65e4 = ~uVar2 & _DAT_ram_3fcb65e4;
        }
        _DAT_ram_3fcb65e4 = uVar2 | _DAT_ram_3fcb65e4;
        iVar1 = *(uint *)(param_1 + 0x2c) * 0x14;
        piVar4 = (int *)(iVar1 + 0x3fcb17cc);
        iVar1 = *(int *)(iVar1 + 0x3fcb17d0);
        *(int *)(param_1 + 8) = iVar1;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 8);
        *(int *)(*(int *)(iVar1 + 8) + 4) = iVar5;
        *(int *)(iVar1 + 8) = iVar5;
        *(int **)(param_1 + 0x14) = piVar4;
        *piVar4 = *piVar4 + 1;
      }
    }
    return;
  }
  return;
}

