
int FUN_ram_4206ba14(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  iVar2 = FUN_ram_4206ab3c(param_1,param_1 + 0x168,0x10,param_2,&uStack_24);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x188) == '\0') {
      iVar6 = 0;
      iVar4 = param_1 + param_3;
      do {
        pbVar3 = (byte *)(param_5 + iVar6);
        iVar6 = iVar6 + 1;
        *(byte *)(iVar4 + 0x178) = *pbVar3 ^ *(byte *)(iVar4 + 0x178);
        iVar4 = iVar4 + 1;
      } while (param_4 != iVar6);
    }
    iVar6 = 0;
    do {
      iVar4 = iVar6;
      *(byte *)(param_6 + iVar4) = *(byte *)(param_3 + iVar4 + param_2) ^ *(byte *)(param_5 + iVar4)
      ;
      iVar6 = iVar4 + 1;
    } while (param_4 != iVar4 + 1);
    if (*(char *)(param_1 + 0x188) == '\x01') {
      iVar6 = param_1 + param_3;
      iVar5 = 0;
      do {
        *(byte *)(iVar6 + 0x178) = *(byte *)(param_6 + iVar5) ^ *(byte *)(iVar6 + 0x178);
        bVar1 = iVar4 != iVar5;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (bVar1);
    }
  }
  else {
    FUN_ram_4206d7da(param_2,0x10);
  }
  return iVar2;
}

