
int FUN_ram_420179b0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [20];
  undefined4 uStack_30;
  
  if (DAT_ram_3fcb66a0 == '\0') {
    uVar1 = FUN_ram_40398d1c();
    FUN_ram_40398c14(3,0x3c07123c,0x3c071264,uVar1,0x3c07123c);
    uStack_b4 = 0;
    uStack_b8 = 0x30;
    uStack_b0 = 2;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    FUN_ram_420184d8(&uStack_b8);
    uStack_a0 = 8;
    uStack_9c = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_98 = 1;
    FUN_ram_420184d8(&uStack_a0);
    FUN_ram_42018400(5,1);
    FUN_ram_42018400(4,1);
    FUN_ram_40396524(10);
    (*(code *)&SUB_ram_40010488)(auStack_44,0,0x24);
    uStack_58 = 7;
    uStack_54 = 0xffffffff;
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    uStack_50 = 6;
    uStack_30 = 0x1000;
    iVar2 = FUN_ram_4201c662(1,&uStack_58,3);
    if (iVar2 == 0) {
      (*(code *)&SUB_ram_40010488)(auStack_88,0,0x30);
      uStack_78 = 20000000;
      auStack_88[0] = 1;
      uStack_6c = 5;
      uStack_64 = 4;
      iVar2 = FUN_ram_4201c876(1,auStack_88,&DAT_ram_3fcb66a4);
      if (iVar2 == 0) {
        FUN_ram_42018400(4,1);
        FUN_ram_40396524(1);
        FUN_ram_42018400(4,0);
        FUN_ram_40396524(1);
        FUN_ram_42018400(4,1);
        FUN_ram_40396524(1);
        FUN_ram_42017936();
        FUN_ram_42017900(0x4d);
        FUN_ram_420178fa(0x55);
        FUN_ram_42017900(0xf3);
        FUN_ram_420178fa(10);
        FUN_ram_42017900(0xaa);
        FUN_ram_420178fa(0xb7);
        FUN_ram_42017900(0);
        FUN_ram_420178fa(0x3f);
        FUN_ram_420178fa(0xc);
        FUN_ram_42017900(1);
        FUN_ram_420178fa(3);
        FUN_ram_420178fa(0);
        FUN_ram_420178fa(0x3f);
        FUN_ram_420178fa(0x3f);
        FUN_ram_420178fa(0xa6);
        FUN_ram_42017900(6);
        FUN_ram_420178fa(199);
        FUN_ram_420178fa(199);
        FUN_ram_420178fa(0x2f);
        FUN_ram_420178fa(0xa5);
        FUN_ram_420178fa(0x33);
        FUN_ram_42017900(0x61);
        FUN_ram_420178fa(200);
        FUN_ram_420178fa(200);
        FUN_ram_42017900(0x30);
        FUN_ram_420178fa(0x13);
        FUN_ram_42017900(0x60);
        FUN_ram_420178fa(0);
        FUN_ram_42017900(0x82);
        FUN_ram_420178fa(0x12);
        FUN_ram_42017900(3);
        FUN_ram_420178fa(0);
        FUN_ram_42017900(0x50);
        FUN_ram_420178fa(0x87);
        FUN_ram_42017900(4);
        FUN_ram_42017936();
        FUN_ram_42017906(0x20,0x3c0756ac);
        FUN_ram_42017906(0x21,0x3c075680);
        FUN_ram_42017906(0x22,0x3c075654);
        FUN_ram_42017906(0x23,0x3c075628);
        FUN_ram_42017906(0x24,0x3c0755fc);
        DAT_ram_3fcb66a0 = '\x01';
        goto LAB_ram_42017c90;
      }
      uVar1 = FUN_ram_40398d1c();
      uVar3 = 0x3c0712bc;
    }
    else {
      uVar1 = FUN_ram_40398d1c();
      uVar3 = 0x3c071294;
    }
    FUN_ram_40398c14(1,0x3c07123c,uVar3,uVar1,0x3c07123c,iVar2);
  }
  else {
LAB_ram_42017c90:
    iVar2 = 0;
  }
  return iVar2;
}

