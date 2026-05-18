
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40398b96(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_ram_40398ba8:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if (*(uint *)(param_1 + 0x48) < param_2) {
    uVar3 = param_2;
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  if ((uVar2 != uVar3) && (*(int *)(param_1 + 0x4c) == 1)) {
    if (_DAT_ram_3fcc4e9c == param_1) goto LAB_ram_40398ba8;
    *(uint *)(param_1 + 0x2c) = uVar3;
    if (-1 < *(int *)(param_1 + 0x18)) {
      *(uint *)(param_1 + 0x18) = 0x19 - uVar3;
    }
    if (*(undefined1 **)(param_1 + 0x14) == &DAT_ram_3fcb8cc8 + uVar2 * 0x14) {
      iVar5 = param_1 + 4;
      iVar1 = FUN_ram_40396d62(iVar5);
      uVar3 = 1 << (*(uint *)(param_1 + 0x2c) & 0x1f);
      if (iVar1 == 0) {
        _DAT_ram_3fcc4e84 = ~uVar3 & _DAT_ram_3fcc4e84;
      }
      _DAT_ram_3fcc4e84 = uVar3 | _DAT_ram_3fcc4e84;
      iVar1 = *(uint *)(param_1 + 0x2c) * 0x14;
      piVar4 = (int *)(&DAT_ram_3fcb8cc8 + iVar1);
      iVar1 = *(int *)(iVar1 + 0x3fcb8ccc);
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

