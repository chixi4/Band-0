
int FUN_ram_4204df36(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 uStack_50;
  char cStack_4f;
  char cStack_33;
  
  if (*(int *)(param_1 + 100) != 1) {
    return 0x1101;
  }
  iStack_58 = -1;
  iStack_60 = 0;
  uStack_5c = 0;
  if (param_3 == 0x41) {
    iVar2 = FUN_ram_4204d8d8(param_1,param_2,0x48,param_4,&iStack_60,&uStack_50,0xff,0xff,&uStack_5c
                            );
    if (iVar2 == 0) {
      bVar1 = iStack_60 != 0;
    }
    else {
LAB_ram_4204df8a:
      bVar1 = false;
    }
  }
  else {
    iVar2 = FUN_ram_4204d8d8();
    if ((iVar2 != 0) || (iStack_60 == 0)) goto LAB_ram_4204df8a;
    iVar2 = FUN_ram_4204c54e(iStack_60,&iStack_58);
    bVar1 = true;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (((iStack_60 == 0) &&
      (iVar2 = FUN_ram_4204d8d8(param_1,param_2,0xff,param_4,&iStack_60,&uStack_50,0xff,0xff,
                                &uStack_5c), iVar2 == 0)) && (iStack_60 != 0)) {
    iVar2 = FUN_ram_4204c54e(iStack_60,&iStack_58);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_3 == 0x41) goto LAB_ram_4204e000;
LAB_ram_4204e07c:
    iVar4 = *(int *)(param_1 + 0x14);
    iVar2 = FUN_ram_4204c9a4(iVar4,param_2,param_3,param_4,param_5,param_6,0xff);
    if (iVar2 == 0x110a) {
      if ((*(int *)(iVar4 + 0xc) != -4) && (iVar2 = FUN_ram_4204c5e6(iVar4), iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = FUN_ram_4204f1b2(param_1 + 0x10);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4204c9a4(*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5,
                               param_6,0xff);
      goto LAB_ram_4204e010;
    }
  }
  else {
    if (param_3 != 0x41) {
      if ((bVar1) &&
         (iVar2 = FUN_ram_4204cfaa(iStack_60,param_2,param_3,param_4,param_5,param_6,0xff),
         iVar2 == 0)) {
        return 0;
      }
      goto LAB_ram_4204e07c;
    }
    if (bVar1) {
      iVar2 = FUN_ram_4204db5a(param_1,param_2,param_4,param_5,param_6);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = 0x80;
      if (cStack_33 != '\0') {
        if (cStack_33 != -0x80) {
          return -1;
        }
        goto LAB_ram_4204e000;
      }
    }
    else {
LAB_ram_4204e000:
      uVar3 = 0;
    }
    iVar2 = FUN_ram_4204d94c(param_1,param_2,param_4,param_5,param_6,uVar3);
LAB_ram_4204e010:
    if (iVar2 == 0x110a) {
      return 0x1105;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  if (iStack_60 == 0) {
    return 0;
  }
  if (cStack_4f == 'H') {
    iVar2 = FUN_ram_4204dc6e(param_1,param_2,param_4,cStack_33);
    goto LAB_ram_4204e068;
  }
  if ((*(uint *)(iStack_60 + 0xc) & 0xfffffffd) == 0xfffffffc) {
    iVar2 = FUN_ram_4204c54e(iStack_60,&iStack_54);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (iStack_54 != iStack_58) goto LAB_ram_4204e108;
  }
  else {
LAB_ram_4204e108:
    iVar2 = FUN_ram_4204d8d8(param_1,param_2,cStack_4f,param_4,&iStack_60,&uStack_50,0xff,0xff,
                             &uStack_5c);
    if (iVar2 != 0) {
      return 0x1102;
    }
  }
  iVar2 = FUN_ram_4204cb60(iStack_60,uStack_5c);
LAB_ram_4204e068:
  if (iVar2 == 0x6001) {
    return 0x1108;
  }
  return iVar2;
}

