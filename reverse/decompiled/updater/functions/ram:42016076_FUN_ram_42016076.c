
int FUN_ram_42016076(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_ram_42019344(0,0x10,0x3c070598);
  if (iVar2 == 0) {
    uVar3 = FUN_ram_40398d1c();
    FUN_ram_40398c14(1,0x3c070628,0x3c070630,uVar3,0x3c070628);
    iVar1 = 0x105;
  }
  else {
    iVar1 = FUN_ram_42018f42();
    if (iVar1 == 0) {
      uVar4 = FUN_ram_40398d1c();
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      uVar5 = 0x3c070654;
      uVar3 = 3;
    }
    else {
      uVar4 = FUN_ram_40398d1c();
      uVar6 = FUN_ram_4201ae60(iVar1);
      uVar5 = 0x3c070680;
      uVar3 = 1;
    }
    FUN_ram_40398c14(uVar3,0x3c070628,uVar5,uVar4,0x3c070628,uVar6);
  }
  return iVar1;
}

