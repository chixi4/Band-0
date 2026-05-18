
void FUN_ram_42065c7a(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)(param_1 + 2);
  while( true ) {
    pbVar3 = pbVar2 + 1;
    if ((byte *)(param_1 + param_2) <= pbVar3) break;
    pbVar2[-2] = *pbVar2 << 3 | *pbVar3 >> 5;
    pbVar2 = pbVar3;
  }
  iVar1 = 0;
  if ((byte *)(param_1 + 3) <= (byte *)(param_1 + param_2)) {
    iVar1 = param_2 + -3;
  }
  pbVar3 = (byte *)(param_1 + iVar1);
  *pbVar3 = *pbVar2 << 3;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  return;
}

