
undefined4 FUN_ram_4201f550(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_ram_4201f3bc(param_2);
  iVar5 = param_1[2];
  if (iVar5 != 0) {
    iVar4 = param_1[1];
    uVar3 = *(uint *)(iVar4 + 8);
    if (uVar3 < 0x1d) {
      *(uint *)(iVar4 + 8) = uVar3 + 1;
      *(uint *)(iVar4 + uVar3 * 4 + 0xc) = param_3 & 0xff | iVar1 << 8;
      return 0;
    }
  }
  piVar2 = (int *)thunk_FUN_ram_4039047a(0x80);
  if (piVar2 != (int *)0x0) {
    FUN_ram_4201f52e();
    iVar4 = param_1[1];
    if (iVar4 != 0) {
      *(int **)(iVar4 + 4) = piVar2;
    }
    *piVar2 = iVar4;
    iVar4 = *param_1;
    piVar2[1] = 0;
    param_1[1] = (int)piVar2;
    if (iVar4 == 0) {
      *param_1 = (int)piVar2;
    }
    piVar2[3] = param_3 & 0xff | iVar1 << 8;
    iVar1 = piVar2[2];
    param_1[2] = iVar5 + 1;
    piVar2[2] = iVar1 + 1;
    return 0;
  }
  return 0x101;
}

