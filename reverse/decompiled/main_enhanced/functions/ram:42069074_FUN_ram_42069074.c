
int FUN_ram_42069074(undefined4 *param_1)

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
    iVar2 = FUN_ram_42069008(aiStack_24,param_1,iVar4);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (aiStack_24[0] == 0) break;
    pbVar3 = &DAT_ram_3c0f989c + iVar1;
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + (uint)*pbVar3;
    if (iVar1 == 0xa7) {
      return 0;
    }
  }
  iVar1 = FUN_ram_420685b4(param_1,iVar4);
  if (iVar1 == 0) {
    return 1;
  }
  return -0xe;
}

