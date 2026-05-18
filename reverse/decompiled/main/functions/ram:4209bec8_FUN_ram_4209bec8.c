
void FUN_ram_4209bec8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (*(byte *)((int)param_2 + 0xd) & 0xf) * 4 + param_1;
  iVar2 = *(int *)(iVar5 + 0x18);
  if (iVar2 != 0) {
    iVar3 = FUN_ram_4039c0e0(iVar2 + 8,param_2 + 2,6);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar2 + 4);
    }
    else {
      do {
        iVar5 = iVar2;
        iVar2 = *(int *)(iVar5 + 4);
        if (iVar2 == 0) goto LAB_ram_4209bf08;
        iVar3 = FUN_ram_4039c0e0(iVar2 + 8,param_2 + 2,6);
      } while (iVar3 != 0);
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar2 + 4);
    }
  }
LAB_ram_4209bf08:
  piVar1 = *(int **)(param_1 + 0x14);
  if (param_2 == *(int **)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *param_2;
  }
  else {
    do {
      piVar4 = piVar1;
      if (piVar4 == (int *)0x0) goto LAB_ram_4209bf16;
      piVar1 = (int *)*piVar4;
    } while (param_2 != (int *)*piVar4);
    *piVar4 = *param_2;
  }
LAB_ram_4209bf16:
  iVar2 = param_2[6];
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  FUN_ram_4209a0ce(iVar2);
  thunk_FUN_ram_40390634(param_2);
  return;
}

