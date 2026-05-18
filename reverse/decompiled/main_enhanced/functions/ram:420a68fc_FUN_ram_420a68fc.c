
void FUN_ram_420a68fc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  if (param_2 == 0) {
    iVar4 = iVar3 - *(int *)(param_1 + 0x58);
    if (iVar3 == *(int *)(param_1 + 0x58)) {
      iVar4 = 0xd;
    }
    iVar5 = 0;
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar5 = param_2 + 8;
    iVar1 = param_2 + 0xb;
    iVar2 = param_2 + 0xd;
    iVar4 = param_2 + iVar3;
  }
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_2;
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 100) = iVar1;
  *(int *)(param_1 + 0x68) = iVar2;
  *(int *)(param_1 + 0x6c) = iVar4;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

