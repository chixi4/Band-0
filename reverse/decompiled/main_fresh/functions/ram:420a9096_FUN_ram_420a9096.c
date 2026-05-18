
undefined4
FUN_ram_420a9096(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (param_3 == 0) {
LAB_ram_420a924c:
    uVar1 = 0xffffc300;
  }
  else {
    if (param_5 == 0) {
      iVar3 = -0x6e;
LAB_ram_420a91e6:
      FUN_ram_420a85ae(param_1);
      FUN_ram_420a85a4(param_1);
      if (iVar3 == -0x3b80) {
        return 0xffffc480;
      }
      iVar3 = FUN_ram_420a8e5a(param_1,param_2,param_3,param_6,param_7);
      if (iVar3 != 0) {
        FUN_ram_420a85ae(param_1);
        FUN_ram_420a85a4(param_1);
        uVar1 = FUN_ram_420a85d4(1);
        iVar3 = FUN_ram_420a861e(param_1,uVar1);
        if (iVar3 == 0) {
          uStack_3c = *param_1;
          uStack_38 = param_1[1];
          iVar3 = FUN_ram_420a8740(&uStack_3c);
          uVar1 = 0;
          if (iVar3 == 1) {
            uVar1 = uStack_38;
          }
          iVar3 = FUN_ram_420707ba(uVar1,param_2,param_3);
          if (iVar3 == 0) goto LAB_ram_420a910c;
        }
        FUN_ram_420a85ae(param_1);
        FUN_ram_420a85a4(param_1);
        uVar1 = FUN_ram_420a85d4(2);
        iVar3 = FUN_ram_420a861e(param_1,uVar1);
        if ((iVar3 != 0) ||
           (iVar3 = FUN_ram_420a8ce6(param_1,param_2,param_3,param_6,param_7), iVar3 != 0)) {
          FUN_ram_420a85ae(param_1);
          goto LAB_ram_420a924c;
        }
      }
    }
    else {
      iVar2 = FUN_ram_4206d7ce(1,param_3);
      if (iVar2 == 0) {
        return 0xffffc080;
      }
      FUN_ram_4039c11e(iVar2,param_2,param_3);
      uStack_4c = 0;
      iStack_58 = iVar2;
      iVar3 = FUN_ram_4206e970(&iStack_58,iVar2 + param_3,&iStack_5c,0x30);
      if (iVar3 == 0) {
        iVar5 = iStack_58 + iStack_5c;
        iVar3 = FUN_ram_4206ec4c(&iStack_58,iVar5,auStack_48,&uStack_3c);
        if ((iVar3 != 0) ||
           (iVar3 = FUN_ram_4206e970(&iStack_58,iVar5,&iStack_5c,4), iVar5 = iStack_58, iVar3 != 0))
        goto LAB_ram_420a90f8;
        iVar3 = FUN_ram_42073890(auStack_48,&uStack_50,&uStack_54);
        if (iVar3 == 0) {
          iVar3 = FUN_ram_420a9594(&uStack_3c,0,uStack_54,uStack_50,param_4,param_5,iStack_58,
                                   iStack_5c,iVar5,iStack_5c,&uStack_4c);
          if (iVar3 == 0) {
LAB_ram_420a91d0:
            iVar3 = FUN_ram_420a8e5a(param_1,iVar5,uStack_4c,param_6,param_7);
          }
          else {
            iVar4 = -0x2000;
LAB_ram_420a917a:
            if (iVar3 == iVar4 + 0x200) {
              iVar3 = -0x3b80;
            }
          }
        }
        else {
          iVar3 = -0x3980;
          if (iStack_44 == 9) {
            iVar4 = FUN_ram_4039c0e0(&DAT_ram_3c0c5458,uStack_40);
            iVar3 = -0x3980;
            if (iVar4 == 0) {
              iVar3 = FUN_ram_420a995a(&uStack_3c,0,param_4,param_5,iStack_58,iStack_5c,iVar5,
                                       iStack_5c,&uStack_4c);
              iVar4 = -0x3000;
              if (iVar3 == 0) goto LAB_ram_420a91d0;
              goto LAB_ram_420a917a;
            }
          }
        }
      }
      else {
LAB_ram_420a90f8:
        iVar3 = iVar3 + -0x3d00;
      }
      FUN_ram_4206d7fc(iVar2,param_3);
      if (iVar3 != 0) goto LAB_ram_420a91e6;
    }
LAB_ram_420a910c:
    uVar1 = 0;
  }
  return uVar1;
}

