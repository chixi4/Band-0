
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40398ae8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((_DAT_ram_3fcc4e9c == param_1) && (*(int *)(param_1 + 0x4c) != 0)) {
    iVar4 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar4;
    if ((*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x48)) || (iVar4 != 0)) {
      uVar1 = 0;
    }
    else {
      iVar4 = param_1 + 4;
      iVar2 = FUN_ram_40396d62(iVar4);
      if (iVar2 == 0) {
        _DAT_ram_3fcc4e84 = ~(1 << (*(uint *)(param_1 + 0x2c) & 0x1f)) & _DAT_ram_3fcc4e84;
      }
      uVar3 = *(uint *)(param_1 + 0x48);
      uVar1 = 1;
      *(uint *)(param_1 + 0x18) = 0x19 - uVar3;
      *(uint *)(param_1 + 0x2c) = uVar3;
      _DAT_ram_3fcc4e84 = 1 << (uVar3 & 0x1f) | _DAT_ram_3fcc4e84;
      piVar5 = (int *)(&DAT_ram_3fcb8cc8 + uVar3 * 0x14);
      iVar2 = *(int *)(uVar3 * 0x14 + 0x3fcb8ccc);
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 8);
      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar4;
      *(int *)(iVar2 + 8) = iVar4;
      *(int **)(param_1 + 0x14) = piVar5;
      *piVar5 = *piVar5 + 1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

