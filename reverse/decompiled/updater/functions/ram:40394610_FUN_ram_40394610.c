
int * FUN_ram_40394610(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x34);
  piVar3 = *(int **)(param_1 + 0x20);
  piVar5 = *(int **)(param_1 + 0x30);
  uVar2 = (param_2 + 3U & 0xfffffffc) + 8;
  if ((uint)(iVar1 - (int)piVar3) < uVar2) {
    piVar3[1] = 2;
    *piVar3 = 0;
    piVar3 = piVar5;
  }
  *piVar3 = param_2;
  piVar3[1] = 0;
  piVar4 = (int *)((int)piVar3 + uVar2);
  if ((uint)(iVar1 - (int)piVar4) < 8) {
    piVar4 = piVar5;
  }
  *(int **)(param_1 + 0x20) = piVar4;
  if (*(int **)(param_1 + 0x2c) == piVar4) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  }
  return piVar3 + 2;
}

