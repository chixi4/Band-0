
bool FUN_ram_42016834(undefined4 param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_ram_4201da0c();
  if (iVar2 == 0) {
    bVar1 = *param_3 != '\0';
  }
  else {
    *param_3 = '\0';
    if (iVar2 != 0x1102) {
      uVar3 = FUN_ram_40398d1c();
      uVar4 = FUN_ram_4201ae60(iVar2);
      FUN_ram_40398c14(2,0x3c070cd4,0x3c070cdc,uVar3,0x3c070cd4,param_2,uVar4);
    }
    bVar1 = false;
  }
  return bVar1;
}

