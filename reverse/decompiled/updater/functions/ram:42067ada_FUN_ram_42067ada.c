
int FUN_ram_42067ada(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                    undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  
  uStack_3c = 0;
  if (param_5 == 0) {
    return -0x3c00;
  }
  iStack_48 = param_2;
  iVar1 = FUN_ram_4202b91a(&iStack_48,param_2 + param_3,&iStack_4c,0x30);
  if (iVar1 == 0) {
    iVar3 = iStack_48 + iStack_4c;
    iVar1 = FUN_ram_4202bbf6(&iStack_48,iVar3,auStack_38,auStack_2c);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_ram_4202b91a(&iStack_48,iVar3,&iStack_4c,4), iVar3 = iStack_48, iVar1 == 0)) {
      iVar1 = FUN_ram_420319c6(auStack_38,&uStack_40,&uStack_44);
      if (iVar1 == 0) {
        iVar2 = FUN_ram_420688e8(auStack_2c,0,uStack_44,uStack_40,param_4,param_5,iStack_48,
                                 iStack_4c,iVar3,iStack_4c,&uStack_3c);
        if (iVar2 == 0) {
LAB_ram_42067bcc:
          iVar1 = FUN_ram_4206795e(param_1,iVar3,uStack_3c,param_6,param_7);
          return iVar1;
        }
        iVar1 = -0x2000;
      }
      else {
        if (iStack_34 != 9) {
          return -0x3980;
        }
        iVar1 = FUN_ram_40399d6c(0x3c073424,uStack_30);
        if (iVar1 != 0) {
          return -0x3980;
        }
        iVar2 = FUN_ram_42068cae(auStack_2c,0,param_4,param_5,iStack_48,iStack_4c,iVar3,iStack_4c,
                                 &uStack_3c);
        iVar1 = -0x3000;
        if (iVar2 == 0) goto LAB_ram_42067bcc;
      }
      if (iVar2 != iVar1 + 0x200) {
        return iVar2;
      }
      return -0x3b80;
    }
  }
  return iVar1 + -0x3d00;
}

