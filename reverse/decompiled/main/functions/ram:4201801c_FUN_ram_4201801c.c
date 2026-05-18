
void FUN_ram_4201801c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [36];
  undefined1 auStack_104 [36];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [104];
  
  FUN_ram_4039c11e(auStack_80,&DAT_ram_3c0c6208,0x18);
  FUN_ram_42048298(auStack_80);
  FUN_ram_42015f20(0);
  iVar2 = FUN_ram_4202183c();
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4201605e();
    if (iVar2 == 0) {
      uVar5 = 0x3c0a8b64;
      uVar3 = 0x3c0a8c64;
    }
    else {
      uVar5 = 0x3c0a8b8c;
      uVar3 = 0x3c0a8c7c;
    }
    FUN_ram_42017d0c(uVar3,uVar5);
    FUN_ram_42017dd8(2000);
    do {
      FUN_ram_40398498(100);
    } while( true );
  }
  iVar2 = FUN_ram_42022260();
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4201605e();
    if (iVar2 == 0) {
      uVar5 = 0x3c0a8ba8;
      uVar3 = 0x3c0a8c90;
    }
    else {
      uVar5 = 0x3c0a8bb8;
      uVar3 = 0x3c0a8cac;
    }
    FUN_ram_42017d0c(uVar3,uVar5);
    iVar2 = FUN_ram_420222d8(12000);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4201605e();
      if (iVar2 == 0) {
        uVar5 = 0x3c0a8bf8;
        uVar3 = 0x3c0a8c08;
      }
      else {
        uVar5 = 0x3c0a8c18;
        uVar3 = 0x3c0a8c28;
      }
      FUN_ram_42017d0c(uVar3,uVar5);
      iVar2 = FUN_ram_42018be0();
      if (iVar2 != 1) {
        FUN_ram_42018a9e(0x42007e60,15000);
      }
      do {
        if ((DAT_ram_3fcc4fd8 == '\0') && (iVar2 = FUN_ram_42017c5c(), iVar2 != 0)) {
          iVar2 = FUN_ram_4201605e();
          if (iVar2 == 0) {
            uVar5 = 0x3c0a8b64;
            uVar3 = 0x3c0a8cc4;
          }
          else {
            uVar5 = 0x3c0a8b8c;
            uVar3 = 0x3c0a8cd4;
          }
          FUN_ram_42017d0c(uVar3,uVar5);
          FUN_ram_42017dd8(600);
        }
        FUN_ram_40398498(8);
      } while( true );
    }
    thunk_FUN_ram_420847b6();
  }
  FUN_ram_42021a56(0x42007ed8,0);
  uStack_134 = 0x3c0a8ce4;
  uStack_130 = 0x3c0a8cec;
  uStack_138 = 0;
  uStack_12c = 0x10406;
  iVar2 = FUN_ram_42021daa(&uStack_138);
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4201605e();
    if (iVar2 == 0) {
      uVar5 = 0x3c0a8b64;
      uVar3 = 0x3c0a8cfc;
    }
    else {
      uVar5 = 0x3c0a8b8c;
      uVar3 = 0x3c0a8d10;
    }
    FUN_ram_42017d0c(uVar3,uVar5);
    FUN_ram_42017dd8(2000);
    do {
      FUN_ram_40398498(100);
    } while( true );
  }
  (*(code *)&SUB_ram_40010488)(auStack_128,0,0x21);
  FUN_ram_42021f44(auStack_128,0x21);
  (*(code *)&SUB_ram_400106ac)(auStack_80,0x60,0x3c0a8d20,auStack_128,0x3c0a8cec);
  iVar2 = FUN_ram_4201edd8();
  if ((iVar2 == 0) && (iVar2 = FUN_ram_4201ee6a(), iVar2 != 0)) {
    FUN_ram_4201eeb2(1);
    local_140 = 0;
    uStack_13c = 0;
    iVar4 = FUN_ram_420210fa(auStack_80,1,&local_140);
    if (iVar4 != 0) {
      iVar4 = FUN_ram_42021324(&local_140,4);
      uVar3 = 4;
      if (0x8c < iVar4) {
        iVar4 = FUN_ram_42021324(&local_140,3);
        uVar3 = 3;
      }
      iVar1 = (200 - iVar4) / 2;
      FUN_ram_42017b40(iVar2,iVar1 + -6,iVar1 + -0x14,iVar4 + 0xc,iVar4 + 0xc,6);
      FUN_ram_4202120e(&local_140,iVar2,iVar1,iVar1 + -0xe,uVar3);
      (*(code *)&SUB_ram_40010488)(auStack_104,0,0x21);
      FUN_ram_42021f44(auStack_104,0x21);
      iVar2 = FUN_ram_4201605e();
      if (iVar2 == 0) {
        (*(code *)&SUB_ram_400106ac)(auStack_e0,0x30,0x3c0a8d38);
        uVar3 = 0x3c0a8d44;
      }
      else {
        (*(code *)&SUB_ram_400106ac)(auStack_e0,0x30,0x3c0a8d50,auStack_104);
        uVar3 = 0x3c0a8d5c;
      }
      (*(code *)&SUB_ram_400106ac)(auStack_b0,0x30,uVar3,0x3c0a8cec);
      FUN_ram_4201f3fe(0xa2,auStack_e0,0);
      FUN_ram_4201f3fe(0xb4,auStack_b0,0);
      FUN_ram_420211a6(&local_140);
      FUN_ram_4201eee8();
      FUN_ram_4201f096();
    }
  }
  iVar2 = FUN_ram_4202320c();
  if (iVar2 == 0) {
    FUN_ram_420232d6();
    FUN_ram_42021b72();
    do {
      if ((DAT_ram_3fcc4fd8 == '\0') && (iVar2 = FUN_ram_42017c5c(), iVar2 != 0)) {
        iVar2 = FUN_ram_4201605e();
        if (iVar2 == 0) {
          uVar5 = 0x3c0a8b64;
          uVar3 = 0x3c0a8d90;
        }
        else {
          uVar5 = 0x3c0a8b8c;
          uVar3 = 0x3c0a8da0;
        }
        FUN_ram_42017d0c(uVar3,uVar5);
        FUN_ram_42017dd8(600);
      }
      FUN_ram_40398498(8);
    } while( true );
  }
  iVar2 = FUN_ram_4201605e();
  if (iVar2 == 0) {
    uVar5 = 0x3c0a8b64;
    uVar3 = 0x3c0a8d64;
  }
  else {
    uVar5 = 0x3c0a8b8c;
    uVar3 = 0x3c0a8d80;
  }
  FUN_ram_42017d0c(uVar3,uVar5);
  FUN_ram_42017dd8(2000);
  do {
    FUN_ram_40398498(100);
  } while( true );
}

