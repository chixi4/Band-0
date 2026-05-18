
void FUN_ram_42022a4c(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_3 >> 4;
  uVar4 = 0;
  while( true ) {
    iVar5 = uVar4 * 0x10;
    uVar4 = uVar4 + 1;
    iVar6 = iVar5 + param_4;
    if (uVar1 < uVar4) break;
    *(char *)(param_5 + 0xe) = (char)(uVar4 >> 8);
    *(char *)(param_5 + 0xf) = (char)uVar4;
    FUN_ram_42021c38(param_1,param_5,iVar6);
    FUN_ram_420229a8(iVar6,param_2 + iVar5);
  }
  if ((param_3 & 0xf) != 0) {
    param_4 = uVar1 * 0x10 + param_4;
    *(char *)(param_5 + 0xe) = (char)(uVar1 + 1 >> 8);
    *(char *)(param_5 + 0xf) = (char)(uVar1 + 1);
    FUN_ram_42021c38(param_1,param_5,param_4);
    uVar4 = 0;
    do {
      pbVar2 = (byte *)(param_4 + uVar4);
      pbVar3 = (byte *)(uVar4 + param_2 + uVar1 * 0x10);
      uVar4 = uVar4 + 1;
      *pbVar2 = *pbVar3 ^ *pbVar2;
    } while ((param_3 & 0xf) != uVar4);
  }
  return;
}

