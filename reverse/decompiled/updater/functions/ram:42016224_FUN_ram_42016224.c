
void FUN_ram_42016224(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_ram_3fcb6695 != '\0') {
    FUN_ram_420177fa(0);
  }
  FUN_ram_420161d6(3,param_1,param_2);
  iVar1 = FUN_ram_42016076();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40398d1c();
    FUN_ram_40398c14(2,0x3c070628,0x3c070714,uVar2,0x3c070628,param_2);
    FUN_ram_40396524(300);
    FUN_ram_4201041e();
  }
  uVar2 = FUN_ram_40398d1c();
  uVar3 = FUN_ram_4201ae60(iVar1);
  FUN_ram_40398c14(1,0x3c070628,0x3c07075c,uVar2,0x3c070628,uVar3);
  if (DAT_ram_3fcb6695 != '\0') {
    FUN_ram_420177fa(0,0x3c0707a8);
  }
  do {
    FUN_ram_40396524(0xffffffff);
  } while( true );
}

