
void FUN_ram_420201a0(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pbVar2 = (byte *)(param_1 + iVar3);
    pbVar1 = (byte *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
    *pbVar1 = ~*pbVar2;
  } while (iVar3 != 5000);
  return;
}

