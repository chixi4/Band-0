
void FUN_ram_420229ca(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  iVar1 = (param_3 & 0xfffffff0) + param_2;
  for (; param_2 != iVar1; param_2 = param_2 + 0x10) {
    FUN_ram_420229a8(param_4,param_2);
    FUN_ram_42021c38(param_1,param_4,param_4);
  }
  if ((param_3 & 0xf) != 0) {
    uVar4 = 0;
    do {
      pbVar2 = (byte *)(param_4 + uVar4);
      pbVar3 = (byte *)(iVar1 + uVar4);
      uVar4 = uVar4 + 1;
      *pbVar2 = *pbVar3 ^ *pbVar2;
    } while ((param_3 & 0xf) != uVar4);
    FUN_ram_42021c38(param_1,param_4,param_4);
    return;
  }
  return;
}

