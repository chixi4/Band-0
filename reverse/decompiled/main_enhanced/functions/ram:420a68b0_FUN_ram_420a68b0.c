
void FUN_ram_420a68b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0xa8);
  if (param_2 == 0) {
    iVar3 = iVar4 - *(int *)(param_1 + 0x94);
    if (iVar4 == *(int *)(param_1 + 0x94)) {
      iVar3 = 0xd;
    }
    iVar5 = 0;
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar5 = param_2 + 8;
    iVar1 = param_2 + 0xb;
    iVar2 = param_2 + 0xd;
    iVar3 = param_2 + iVar4;
  }
  *(int *)(param_1 + 0x94) = param_2;
  *(int *)(param_1 + 0x98) = param_2;
  *(int *)(param_1 + 0x9c) = iVar5;
  *(int *)(param_1 + 0xa0) = iVar1;
  *(int *)(param_1 + 0xa4) = iVar2;
  *(int *)(param_1 + 0xa8) = iVar3;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}

