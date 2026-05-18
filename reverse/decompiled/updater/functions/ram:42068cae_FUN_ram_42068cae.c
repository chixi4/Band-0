
int FUN_ram_42068cae(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,undefined4 param_7,uint param_8,
                    undefined4 param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_114;
  uint uStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [4];
  int iStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [12];
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  int iStack_cc;
  int iStack_c8;
  undefined1 auStack_c4 [32];
  int aiStack_a4 [8];
  undefined1 auStack_84 [80];
  
  uStack_108 = 5;
  iStack_10c = param_1[2];
  iVar5 = iStack_10c + param_1[1];
  uStack_114 = 0;
  uStack_110 = 0;
  if (*param_1 != 0x30) {
    return -0x2f62;
  }
  iVar1 = FUN_ram_4202bbf6(&iStack_10c,iVar5,auStack_100,&iStack_e8);
  if (iVar1 != 0) goto LAB_ram_42068d48;
  if (iStack_fc != 9) {
    return -0x2e80;
  }
  iVar1 = FUN_ram_40399d6c(0x3c07361c,uStack_f8);
  if (iVar1 != 0) {
    return -0x2e80;
  }
  aiStack_a4[0] = iStack_e0;
  iVar1 = iStack_e0 + iStack_e4;
  if (iStack_e8 != 0x30) {
    return -0x2f62;
  }
  iVar2 = FUN_ram_4202b91a(aiStack_a4,iVar1,&iStack_cc,4);
  if (iVar2 == 0) {
    iStack_c8 = aiStack_a4[0];
    aiStack_a4[0] = aiStack_a4[0] + iStack_cc;
    iVar2 = FUN_ram_4202ba02(aiStack_a4,iVar1,&uStack_114);
    if (iVar2 != 0) goto LAB_ram_42068da0;
    if (iVar1 != aiStack_a4[0]) {
      iVar2 = FUN_ram_4202ba02(aiStack_a4,iVar1,&uStack_110);
      if ((iVar2 != 0) && (iVar2 != -0x62)) goto LAB_ram_42068da0;
      if (iVar1 != aiStack_a4[0]) {
        iVar2 = FUN_ram_4202bcae(aiStack_a4,iVar1,auStack_84);
        if (iVar2 != 0) goto LAB_ram_42068da0;
        iVar2 = FUN_ram_42031974(auStack_84,&uStack_108);
        if (iVar2 != 0) {
          return -0x2e80;
        }
        if (iVar1 != aiStack_a4[0]) {
          return -0x2f66;
        }
      }
    }
  }
  else {
LAB_ram_42068da0:
    if (iVar2 + -0x2f00 != 0) {
      return iVar2 + -0x2f00;
    }
  }
  iVar1 = FUN_ram_4202bbf6(&iStack_10c,iVar5,auStack_f4,&iStack_dc);
  if (iVar1 != 0) {
LAB_ram_42068d48:
    return iVar1 + -0x2f00;
  }
  iVar5 = FUN_ram_420318aa(auStack_f4,&uStack_104);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_420272ca(uStack_104), iVar5 == 0)) {
    return -0x2e80;
  }
  uVar3 = *(uint *)(iVar5 + 4);
  uStack_110 = uVar3 >> 5 & 0x78;
  if (iStack_dc != 4) {
    return -0x2f00;
  }
  if (uStack_d8 != (uVar3 >> 3 & 0x1c)) {
    return -0x2f00;
  }
  uVar4 = param_6;
  if (param_2 != 0) {
    if (param_2 != 1) goto LAB_ram_42068e06;
    uVar4 = ((uVar3 & 0x1f) + param_6) - param_6 % (uVar3 & 0x1f);
  }
  if (param_8 < uVar4) {
    return -0x6c;
  }
LAB_ram_42068e06:
  FUN_ram_4202732c(auStack_84);
  FUN_ram_40399daa(aiStack_a4,uStack_d4,uStack_d8);
  iVar1 = FUN_ram_42068b36(uStack_108,param_3,param_4,iStack_c8,iStack_cc,uStack_114,uStack_110,
                           auStack_c4);
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_42027380(auStack_84,iVar5), iVar1 == 0)) &&
      (iVar1 = FUN_ram_420273d8(auStack_84,auStack_c4,uStack_110 << 3,param_2), iVar1 == 0)) &&
     (iVar1 = FUN_ram_420278ce(auStack_84,0), iVar1 == 0)) {
    iVar5 = FUN_ram_42027970(auStack_84,aiStack_a4,uStack_d8,param_5,param_6,param_7,param_9);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = -0x2e00;
    }
  }
  FUN_ram_4202733a(auStack_84);
  return iVar1;
}

