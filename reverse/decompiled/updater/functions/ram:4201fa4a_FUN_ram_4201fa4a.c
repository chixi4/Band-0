
int FUN_ram_4201fa4a(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (*(uint *)(param_1 + 0x38) < 0x7e) {
    iVar2 = *(uint *)(param_1 + 0x38) * 0x20;
    iVar1 = *(int *)(param_1 + 8) + 0x40;
    pcVar3 = *(code **)(**(int **)(param_1 + 0x50) + 0x18);
    iVar1 = (*pcVar3)(*(int **)(param_1 + 0x50),iVar2 + iVar1,param_2,0x20,iVar1,iVar2,pcVar3);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4201f9ee(param_1,*(undefined4 *)(param_1 + 0x38),2);
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x3c) == -1) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    return iVar1;
  }
  return -1;
}

