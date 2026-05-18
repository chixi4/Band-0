
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40398854(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (_DAT_ram_3fcc4e64 != 0) {
    uVar1 = param_1[3];
    *param_1 = param_2 | 0x80000000;
    if (uVar1 != 0) {
      piVar5 = (int *)param_1[4];
      *(uint *)(param_1[1] + 8) = param_1[2];
      *(uint *)(param_1[2] + 4) = param_1[1];
      if ((uint *)piVar5[1] == param_1) {
        piVar5[1] = param_1[2];
      }
      param_1[4] = 0;
      *piVar5 = *piVar5 + -1;
      FUN_ram_40397dd8();
      piVar5 = *(int **)(uVar1 + 0x14);
      iVar2 = uVar1 + 4;
      *(undefined4 *)(*(int *)(uVar1 + 8) + 8) = *(undefined4 *)(uVar1 + 0xc);
      *(undefined4 *)(*(int *)(uVar1 + 0xc) + 4) = *(undefined4 *)(uVar1 + 8);
      if (piVar5[1] == iVar2) {
        piVar5[1] = *(int *)(uVar1 + 0xc);
      }
      *(undefined4 *)(uVar1 + 0x14) = 0;
      uVar3 = *(uint *)(uVar1 + 0x2c);
      *piVar5 = *piVar5 + -1;
      _DAT_ram_3fcc4e84 = 1 << (uVar3 & 0x1f) | _DAT_ram_3fcc4e84;
      piVar5 = (int *)(&DAT_ram_3fcb8cc8 + uVar3 * 0x14);
      iVar4 = *(int *)(uVar3 * 0x14 + 0x3fcb8ccc);
      *(int *)(uVar1 + 8) = iVar4;
      *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)(iVar4 + 8);
      *(int *)(*(int *)(iVar4 + 8) + 4) = iVar2;
      *(int *)(iVar4 + 8) = iVar2;
      *(int **)(uVar1 + 0x14) = piVar5;
      *piVar5 = *piVar5 + 1;
      if (*(uint *)(_DAT_ram_3fcc4e9c + 0x2c) < uVar3) {
        _DAT_ram_3fcc4e78 = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

