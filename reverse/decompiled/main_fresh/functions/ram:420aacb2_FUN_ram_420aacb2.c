
int FUN_ram_420aacb2(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iStack_54;
  int iStack_50;
  byte *pbStack_4c;
  int iStack_48;
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  byte *pbStack_30;
  uint uStack_2c;
  int iStack_28;
  byte *pbStack_24;
  
  *param_2 = 5;
  *param_3 = 5;
  *param_4 = 0x14;
  if (*param_1 != 0x30) {
    return -0x2362;
  }
  iStack_54 = param_1[2];
  iVar1 = param_1[1] + iStack_54;
  if (iStack_54 == iVar1) {
    return 0;
  }
  iVar2 = FUN_ram_4206e970(&iStack_54,iVar1,&iStack_50,0xa0);
  if (iVar2 == 0) {
    iVar3 = iStack_54 + iStack_50;
    iVar2 = FUN_ram_420aac82(&iStack_54,iVar3,auStack_44);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_ram_420737c6(auStack_44,param_2);
    if (iVar2 != 0) goto LAB_ram_420aad34;
    if (iStack_54 == iVar3) goto LAB_ram_420aad54;
LAB_ram_420aad44:
    iVar2 = -0x2366;
  }
  else {
    if (iVar2 != -0x62) goto LAB_ram_420aad34;
LAB_ram_420aad54:
    if (iStack_54 == iVar1) {
      return 0;
    }
    iVar2 = FUN_ram_4206e970(&iStack_54,iVar1,&iStack_50,0xa1);
    if (iVar2 == 0) {
      iVar3 = iStack_54 + iStack_50;
      iVar2 = FUN_ram_420aac9a(&iStack_54,iVar3,auStack_44,&iStack_38);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (iStack_40 != 9) {
        return -0x20ae;
      }
      iVar2 = FUN_ram_4039c0e0(&DAT_ram_3c0c5470,uStack_3c);
      if (iVar2 != 0) {
        return -0x20ae;
      }
      if (iStack_38 != 0x30) {
        return -0x2362;
      }
      pbStack_4c = pbStack_30;
      pbVar4 = pbStack_30 + iStack_34;
      if (pbVar4 <= pbStack_30) {
        return -0x2360;
      }
      uStack_2c = (uint)*pbStack_30;
      iVar2 = FUN_ram_4206e970(&pbStack_4c,pbVar4,&iStack_28,6);
      if (iVar2 == 0) {
        pbStack_24 = pbStack_4c;
        pbStack_4c = pbStack_4c + iStack_28;
        iVar2 = FUN_ram_420737c6(&uStack_2c,param_3);
        if (iVar2 != 0) goto LAB_ram_420aadda;
        if (pbVar4 != pbStack_4c) {
          iVar2 = FUN_ram_4206e970(&pbStack_4c,pbVar4,&iStack_48,5);
          if (iVar2 != 0) goto LAB_ram_420aadda;
          if (iStack_48 != 0) {
            return -0x2300;
          }
          if (pbVar4 != pbStack_4c) goto LAB_ram_420aad44;
        }
      }
      else {
LAB_ram_420aadda:
        if (iVar2 + -0x2300 != 0) {
          return iVar2 + -0x2300;
        }
      }
      if (iStack_54 != iVar3) goto LAB_ram_420aad44;
    }
    else if (iVar2 != -0x62) goto LAB_ram_420aad34;
    if (iStack_54 == iVar1) {
      return 0;
    }
    iVar2 = FUN_ram_4206e970(&iStack_54,iVar1,&iStack_50,0xa2);
    if (iVar2 == 0) {
      iVar3 = iStack_54 + iStack_50;
      iVar2 = FUN_ram_4206ea58(&iStack_54,iVar3,param_4);
      if (iVar2 == 0) {
        if (iStack_54 != iVar3) goto LAB_ram_420aad44;
LAB_ram_420aae1a:
        if (iStack_54 == iVar1) {
          return 0;
        }
        iVar2 = FUN_ram_4206e970(&iStack_54,iVar1,&iStack_50,0xa3);
        if (iVar2 == 0) {
          iVar3 = iStack_54 + iStack_50;
          iVar2 = FUN_ram_4206ea58(&iStack_54,iVar3,&uStack_2c);
          if (iVar2 == 0) {
            if (iStack_54 != iVar3) {
              return -0x2366;
            }
            if (uStack_2c != 1) {
              return -0x2300;
            }
LAB_ram_420aae5e:
            if (iStack_54 == iVar1) {
              return 0;
            }
            goto LAB_ram_420aad44;
          }
        }
        else if (iVar2 == -0x62) goto LAB_ram_420aae5e;
      }
    }
    else if (iVar2 == -0x62) goto LAB_ram_420aae1a;
LAB_ram_420aad34:
    iVar2 = iVar2 + -0x2300;
  }
  return iVar2;
}

