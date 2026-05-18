
int FUN_ram_4202e3a4(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte local_60 [32];
  undefined1 auStack_40 [28];
  
  (*(code *)&SUB_ram_40010488)(local_60,0,0x30);
  iVar4 = 0;
  do {
    FUN_ram_4202e158(param_1);
    iVar1 = FUN_ram_42024198(param_1 + 0x20,1,param_1,local_60 + iVar4);
    if (iVar1 != 0) goto LAB_ram_4202e436;
    iVar4 = iVar4 + 0x10;
  } while (iVar4 != 0x30);
  iVar4 = 0;
  pbVar3 = local_60;
  do {
    pbVar2 = (byte *)(param_2 + iVar4);
    iVar4 = iVar4 + 1;
    *pbVar3 = *pbVar2 ^ *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (iVar4 != 0x30);
  iVar1 = FUN_ram_420231fe(param_1 + 0x20,local_60,0x100);
  if (iVar1 == 0) {
    FUN_ram_40399daa(param_1,auStack_40,0x10);
  }
LAB_ram_4202e436:
  FUN_ram_420293a6(local_60,0x30);
  return iVar1;
}

