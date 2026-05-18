
int FUN_ram_4206795e(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_3c = 0;
  uStack_38 = 0;
  iStack_40 = param_2;
  iVar1 = FUN_ram_4202b91a(&iStack_40,param_2 + param_3,&iStack_44,0x30);
  if (iVar1 != 0) {
LAB_ram_42067990:
    return iVar1 + -0x3d00;
  }
  iVar3 = iStack_40 + iStack_44;
  iVar1 = FUN_ram_4202ba02(&iStack_40,iVar3,&iStack_48);
  if (iVar1 != 0) goto LAB_ram_42067990;
  if (iStack_48 != 0) {
    return -0x3d80;
  }
  iVar1 = FUN_ram_4206744e(&iStack_40,iVar3,&iStack_3c,&iStack_2c,&uStack_38);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4202b91a(&iStack_40,iVar3,&iStack_44,4);
  if (iVar1 != 0) goto LAB_ram_42067990;
  if (iStack_44 == 0) {
    return -0x3d60;
  }
  iVar1 = FUN_ram_42066de0(iStack_3c);
  if (iVar1 == 0) {
    return -0x3c80;
  }
  iVar1 = FUN_ram_42066e2a(param_1,iVar1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (iStack_3c == 1) {
    uVar2 = FUN_ram_420674dc(*param_1,param_1[1]);
    iVar1 = FUN_ram_4202d764(uVar2,iStack_40,iStack_44);
  }
  else {
    if (1 < iStack_3c - 2U) {
      return -0x3c80;
    }
    if ((uStack_38 & 0xfffffffb) == 9) {
      if (iStack_28 != 0 || iStack_2c != 0) {
LAB_ram_42067a4c:
        iVar1 = -0x3d00;
        goto LAB_ram_42067a52;
      }
      iVar1 = FUN_ram_4206709c(param_1);
      if (iVar1 != 0) goto LAB_ram_42067a52;
      iStack_34 = iStack_40;
      iVar1 = FUN_ram_4202b91a(&iStack_34,iStack_44 + iStack_40,&iStack_30,4);
      if (iVar1 == 0) {
        if (iVar3 != iStack_34 + iStack_30) goto LAB_ram_42067a4c;
        iVar1 = FUN_ram_420670f2(param_1);
        if (iVar1 != 0) goto LAB_ram_42067a52;
        iVar1 = FUN_ram_42067124(param_1,iStack_34,iStack_30,param_4,param_5);
      }
      else {
        iVar1 = iVar1 + -0x3d00;
      }
    }
    else {
      iVar1 = FUN_ram_420674fc(&iStack_2c,param_1);
      if (iVar1 != 0) goto LAB_ram_42067a52;
      iVar1 = FUN_ram_420677e2(param_1,iStack_40,iStack_44,param_4,param_5);
    }
  }
  if (iVar1 == 0) {
    if (param_2 + param_3 != iStack_40 + iStack_44) {
      return -0x3d66;
    }
    return 0;
  }
LAB_ram_42067a52:
  FUN_ram_42066dba(param_1);
  return iVar1;
}

