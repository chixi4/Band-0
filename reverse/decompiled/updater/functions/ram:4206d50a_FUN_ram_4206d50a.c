
void FUN_ram_4206d50a(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  (*(code *)&SUB_ram_40010488)(param_1,0,0xc);
  FUN_ram_40399daa(param_1,param_2,param_3);
  iVar3 = 0;
  pbVar1 = (byte *)(param_1 + 4);
  do {
    pbVar2 = (byte *)(param_4 + iVar3);
    iVar3 = iVar3 + 1;
    *pbVar1 = *pbVar2 ^ *pbVar1;
    pbVar1 = pbVar1 + 1;
  } while (iVar3 != 8);
  return;
}

