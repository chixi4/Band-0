
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039674c(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  *param_1 = param_2 | 0x80000000;
  piVar4 = (int *)param_1[4];
  uVar5 = param_1[3];
  *(uint *)(param_1[1] + 8) = param_1[2];
  *(uint *)(param_1[2] + 4) = param_1[1];
  if ((uint *)piVar4[1] == param_1) {
    piVar4[1] = param_1[2];
  }
  param_1[4] = 0;
  iVar1 = uVar5 + 4;
  *piVar4 = *piVar4 + -1;
  piVar4 = *(int **)(uVar5 + 0x14);
  *(undefined4 *)(*(int *)(uVar5 + 8) + 8) = *(undefined4 *)(uVar5 + 0xc);
  *(undefined4 *)(*(int *)(uVar5 + 0xc) + 4) = *(undefined4 *)(uVar5 + 8);
  if (piVar4[1] == iVar1) {
    piVar4[1] = *(int *)(uVar5 + 0xc);
  }
  *(undefined4 *)(uVar5 + 0x14) = 0;
  uVar2 = *(uint *)(uVar5 + 0x2c);
  *piVar4 = *piVar4 + -1;
  _DAT_ram_3fcb65e4 = 1 << (uVar2 & 0x1f) | _DAT_ram_3fcb65e4;
  piVar4 = (int *)(uVar2 * 0x14 + 0x3fcb17cc);
  iVar3 = *(int *)(uVar2 * 0x14 + 0x3fcb17d0);
  *(int *)(uVar5 + 8) = iVar3;
  *(undefined4 *)(uVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
  *(int *)(*(int *)(iVar3 + 8) + 4) = iVar1;
  *(int *)(iVar3 + 8) = iVar1;
  *(int **)(uVar5 + 0x14) = piVar4;
  *piVar4 = *piVar4 + 1;
  if (*(uint *)(_DAT_ram_3fcb65fc + 0x2c) < uVar2) {
    _DAT_ram_3fcb65d8 = 1;
  }
  return;
}

