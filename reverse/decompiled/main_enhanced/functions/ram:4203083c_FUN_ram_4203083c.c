
int FUN_ram_4203083c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int aiStack_14 [3];
  
  aiStack_14[0] = param_3;
  aiStack_14[0] =
       FUN_ram_4203064a(param_3,*(undefined2 *)(param_2 + 6),*(undefined2 *)(param_3 + 0x10));
  if (aiStack_14[0] == 0) {
    iVar1 = 6;
  }
  else {
    iVar1 = FUN_ram_42033618(param_1,aiStack_14);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return iVar1;
      }
      piVar2 = *(int **)(param_1 + 0x50);
      *(undefined4 *)(aiStack_14[0] + 0x14) = 0;
      *piVar2 = aiStack_14[0] + 0x10;
      *(int *)(param_1 + 0x50) = aiStack_14[0] + 0x14;
    }
    iVar1 = 0;
  }
  return iVar1;
}

