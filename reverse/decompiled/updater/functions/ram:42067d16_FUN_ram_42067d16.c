
int FUN_ram_42067d16(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                    undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (param_3 == 0) {
    return -0x3d00;
  }
  pcVar4 = (char *)(param_3 + -1 + param_2);
  FUN_ram_42068242(&uStack_3c);
  if (*pcVar4 != '\0') goto LAB_ram_42067df6;
  iVar2 = FUN_ram_4206824e(&uStack_3c,0x3c073450,0x3c073430,param_2,param_4,param_5,auStack_40);
  if (iVar2 == 0) {
    uVar3 = FUN_ram_42066de0(1);
    iVar2 = FUN_ram_42066e2a(param_1,uVar3);
    if (iVar2 == 0) {
      uVar3 = FUN_ram_420674dc(*param_1,param_1[1]);
      iVar2 = FUN_ram_4202d764(uVar3,uStack_3c,uStack_38);
      goto LAB_ram_42067d94;
    }
LAB_ram_42067d98:
    FUN_ram_42066dba(param_1);
LAB_ram_42067d9e:
    FUN_ram_420685ba(&uStack_3c);
    return iVar2;
  }
  if (iVar2 == -0x1380) {
LAB_ram_42067db0:
    iVar2 = -0x3b80;
  }
  else {
    if (iVar2 == -0x1300) {
      return -0x3c00;
    }
    if (iVar2 != -0x1080) {
      return iVar2;
    }
    if (*pcVar4 != '\0') goto LAB_ram_42067df6;
    iVar2 = FUN_ram_4206824e(&uStack_3c,0x3c073490,0x3c073470,param_2,param_4,param_5,auStack_40);
    if (iVar2 == 0) {
      uVar3 = FUN_ram_42066de0(2);
      iVar2 = FUN_ram_42066e2a(param_1,uVar3);
      if (iVar2 != 0) goto LAB_ram_42067d98;
      iVar2 = FUN_ram_420677e2(param_1,uStack_3c,uStack_38,param_6,param_7);
      goto LAB_ram_42067d94;
    }
    if (iVar2 == -0x1380) goto LAB_ram_42067db0;
    if (iVar2 == -0x1300) {
      return -0x3c00;
    }
    if (iVar2 != -0x1080) {
      return iVar2;
    }
    if (*pcVar4 == '\0') {
      iVar2 = FUN_ram_4206824e(&uStack_3c,0x3c0734cc,0x3c0734b0,param_2,0,0,auStack_40);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4206795e(param_1,uStack_3c,uStack_38,param_6,param_7);
LAB_ram_42067d94:
        if (iVar2 == 0) goto LAB_ram_42067d9e;
        goto LAB_ram_42067d98;
      }
      if (iVar2 != -0x1080) {
        return iVar2;
      }
      if (*pcVar4 == '\0') {
        iVar2 = FUN_ram_4206824e(&uStack_3c,0x3c07350c,0x3c0734e8,param_2,0,0,auStack_40);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_42067ada(param_1,uStack_3c,uStack_38,param_4,param_5,param_6,param_7);
          goto LAB_ram_42067d94;
        }
        if (iVar2 != -0x1080) {
          return iVar2;
        }
      }
    }
LAB_ram_42067df6:
    if (param_5 == 0) {
      iVar1 = -0x1080;
LAB_ram_42067e00:
      FUN_ram_42066dba(param_1);
      FUN_ram_42066db0(param_1);
      if (iVar1 == -0x3b80) goto LAB_ram_42067db0;
      iVar2 = FUN_ram_4206795e(param_1,param_2,param_3,param_6,param_7);
      if (iVar2 != 0) {
        FUN_ram_42066dba(param_1);
        FUN_ram_42066db0(param_1);
        uVar3 = FUN_ram_42066de0(1);
        iVar2 = FUN_ram_42066e2a(param_1,uVar3);
        if (iVar2 == 0) {
          uVar3 = FUN_ram_420674dc(*param_1,param_1[1]);
          iVar2 = FUN_ram_4202d764(uVar3,param_2,param_3);
          if (iVar2 == 0) goto LAB_ram_42067f84;
        }
        FUN_ram_42066dba(param_1);
        FUN_ram_42066db0(param_1);
        uVar3 = FUN_ram_42066de0(2);
        iVar2 = FUN_ram_42066e2a(param_1,uVar3);
        if ((iVar2 != 0) ||
           (iVar2 = FUN_ram_420677e2(param_1,param_2,param_3,param_6,param_7), iVar2 != 0)) {
          FUN_ram_42066dba(param_1);
          return -0x3d00;
        }
      }
    }
    else {
      iVar2 = FUN_ram_4202939a(1,param_3);
      if (iVar2 == 0) {
        return -0x3f80;
      }
      FUN_ram_40399daa(iVar2,param_2,param_3);
      iVar1 = FUN_ram_42067ada(param_1,iVar2,param_3,param_4,param_5,param_6,param_7);
      FUN_ram_420293c8(iVar2,param_3);
      if (iVar1 != 0) goto LAB_ram_42067e00;
    }
LAB_ram_42067f84:
    iVar2 = 0;
  }
  return iVar2;
}

