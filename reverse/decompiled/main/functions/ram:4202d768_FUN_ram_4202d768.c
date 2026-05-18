
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202d768(void)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined1 auStack_e0 [72];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  byte bStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  byte bStack_3a;
  
  iVar3 = FUN_ram_420332b4(0xc03,0,0,0,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_ram_420332b4(0x1001,0,0,&uStack_50,8);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_ram_42033632(uStack_50);
  iVar3 = FUN_ram_420332b4(0x1002,0,0,&uStack_90,0x40);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_ram_4039c11e(&uStack_50,&uStack_90,0x40);
  FUN_ram_4039c11e(auStack_e0,&uStack_50,0x40);
  FUN_ram_4203364e(auStack_e0);
  uVar4 = FUN_ram_42033640();
  FUN_ram_42033672(&uStack_50);
  uStack_98 = 0x2008890;
  uStack_94 = 0x20008000;
  iVar3 = FUN_ram_420332b4(0xc01,&uStack_98,8,0,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((6 < uVar4) && ((bStack_3a & 4) != 0)) {
    uStack_90 = 0x800000;
    uStack_8c = 0;
    iVar3 = FUN_ram_420332b4(0xc63,&uStack_90,8,0,0);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  uVar4 = FUN_ram_42033640();
  uVar7 = 0x1f;
  if (uVar4 < 7) {
LAB_ram_4202d886:
    uStack_4c = 0;
  }
  else {
    uVar7 = 0x3f;
    uStack_4c = 0;
    if (uVar4 != 7) {
      uVar7 = 0x67f;
      uStack_4c = 0;
      if (uVar4 != 8) {
        uVar7 = 0xffe7f;
        uStack_4c = 0x400;
        if (uVar4 < 0xe) {
          uVar7 = 0xffe7f;
          goto LAB_ram_4202d886;
        }
      }
    }
  }
  uStack_50 = (undefined1)uVar7;
  uStack_4f = (undefined1)((uint)uVar7 >> 8);
  bStack_4e = (byte)((uint)uVar7 >> 0x10);
  uStack_4d = 0;
  iVar3 = FUN_ram_420332b4(0x2001,&uStack_50,8,0,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_ram_420332b4(0x2002,0,0,&uStack_50,3);
  if (iVar3 != 0) {
    return iVar3;
  }
  sVar2 = CONCAT11(uStack_4f,uStack_50);
  uVar6 = (ushort)bStack_4e;
  if (sVar2 == 0) {
    iVar3 = FUN_ram_420332b4(0x1005,0,0,&uStack_50,7);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar6 = CONCAT11((undefined1)uStack_4c,uStack_4d);
    sVar2 = CONCAT11(uStack_4f,uStack_50);
  }
  iVar3 = FUN_ram_42033272(sVar2,uVar6);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_ram_420332b4(0x2003,0,0,&uStack_50,8);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_ram_42033624(CONCAT13(uStack_4d,CONCAT12(bStack_4e,CONCAT11(uStack_4f,uStack_50))),uStack_4c);
  iVar3 = FUN_ram_420332b4(0x1009,0,0,&uStack_50,6);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_ram_42036b66(&uStack_50);
  pcVar1 = _DAT_ram_3fcb69cc;
  if (iVar3 != 0) {
    return iVar3;
  }
  if (_DAT_ram_3fcb69cc != (code *)0x0) {
    (*(code *)&SUB_ram_40010488)(&uStack_50,0,0x20);
    iVar3 = (*pcVar1)(2,&uStack_50,0xffff);
    if (iVar3 == 0) {
      puVar5 = &uStack_50;
      goto LAB_ram_4202d94e;
    }
  }
  FUN_ram_42030312();
  puVar5 = (undefined1 *)0x0;
LAB_ram_4202d94e:
  FUN_ram_42030512(puVar5);
  FUN_ram_4203059a();
  return 0;
}

