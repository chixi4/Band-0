
int FUN_ram_420258d8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int aiStack_24 [3];
  
  if ((*(uint *)*param_1 & 1) == 0) {
    return -0xe;
  }
  iVar4 = 3;
  iVar1 = 0;
  while( true ) {
    iVar2 = FUN_ram_4202586c(aiStack_24,param_1,iVar4);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (aiStack_24[0] == 0) break;
    pbVar3 = (byte *)(iVar1 + 0x3c077b38);
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + (uint)*pbVar3;
    if (iVar1 == 0xa7) {
      return 0;
    }
  }
  iVar1 = FUN_ram_42024dea(param_1,iVar4);
  if (iVar1 == 0) {
    return 1;
  }
  return -0xe;
}

