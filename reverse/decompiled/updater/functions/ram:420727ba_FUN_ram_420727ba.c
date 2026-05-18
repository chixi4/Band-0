
int FUN_ram_420727ba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  iStack_54 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4) + iStack_54;
  if (iStack_54 == iVar1) {
    return 0;
  }
  iVar2 = FUN_ram_4202b91a(&iStack_54,iVar1,&iStack_50,0xa0);
  if (iVar2 == 0) {
    iVar3 = iStack_54 + iStack_50;
    iVar2 = FUN_ram_42072758(&iStack_54,iVar3,auStack_44);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_ram_420318fc(auStack_44,param_2);
    if (iVar2 != 0) goto LAB_ram_4207280a;
    if (iStack_54 == iVar3) goto LAB_ram_4207282a;
LAB_ram_4207281a:
    iVar2 = -0x2366;
  }
  else {
    if (iVar2 != -0x62) goto LAB_ram_4207280a;
LAB_ram_4207282a:
    if (iStack_54 == iVar1) {
      return 0;
    }
    iVar2 = FUN_ram_4202b91a(&iStack_54,iVar1,&iStack_50,0xa1);
    if (iVar2 == 0) {
      iVar3 = iStack_54 + iStack_50;
      iVar2 = FUN_ram_42072770(&iStack_54,iVar3,auStack_44,&iStack_38);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (iStack_40 != 9) {
        return -0x20ae;
      }
      iVar2 = FUN_ram_40399d6c(0x3c0745b4,uStack_3c);
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
      iVar2 = FUN_ram_4202b91a(&pbStack_4c,pbVar4,&iStack_28,6);
      if (iVar2 == 0) {
        pbStack_24 = pbStack_4c;
        pbStack_4c = pbStack_4c + iStack_28;
        iVar2 = FUN_ram_420318fc(&uStack_2c,param_3);
        if (iVar2 != 0) goto LAB_ram_420728b0;
        if (pbVar4 != pbStack_4c) {
          iVar2 = FUN_ram_4202b91a(&pbStack_4c,pbVar4,&iStack_48,5);
          if (iVar2 != 0) goto LAB_ram_420728b0;
          if (iStack_48 != 0) {
            return -0x2300;
          }
          if (pbVar4 != pbStack_4c) goto LAB_ram_4207281a;
        }
      }
      else {
LAB_ram_420728b0:
        if (iVar2 + -0x2300 != 0) {
          return iVar2 + -0x2300;
        }
      }
      if (iStack_54 != iVar3) goto LAB_ram_4207281a;
    }
    else if (iVar2 != -0x62) goto LAB_ram_4207280a;
    if (iStack_54 == iVar1) {
      return 0;
    }
    iVar2 = FUN_ram_4202b91a(&iStack_54,iVar1,&iStack_50,0xa2);
    if (iVar2 == 0) {
      iVar3 = iStack_54 + iStack_50;
      iVar2 = FUN_ram_4202ba02(&iStack_54,iVar3,param_4);
      if (iVar2 == 0) {
        if (iStack_54 != iVar3) goto LAB_ram_4207281a;
LAB_ram_420728f0:
        if (iStack_54 == iVar1) {
          return 0;
        }
        iVar2 = FUN_ram_4202b91a(&iStack_54,iVar1,&iStack_50,0xa3);
        if (iVar2 == 0) {
          iVar3 = iStack_54 + iStack_50;
          iVar2 = FUN_ram_4202ba02(&iStack_54,iVar3,&uStack_2c);
          if (iVar2 == 0) {
            if (iStack_54 != iVar3) {
              return -0x2366;
            }
            if (uStack_2c != 1) {
              return -0x2300;
            }
LAB_ram_42072934:
            if (iStack_54 == iVar1) {
              return 0;
            }
            goto LAB_ram_4207281a;
          }
        }
        else if (iVar2 == -0x62) goto LAB_ram_42072934;
      }
    }
    else if (iVar2 == -0x62) goto LAB_ram_420728f0;
LAB_ram_4207280a:
    iVar2 = iVar2 + -0x2300;
  }
  return iVar2;
}

