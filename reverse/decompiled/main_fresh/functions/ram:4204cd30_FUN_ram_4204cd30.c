
int FUN_ram_4204cd30(int param_1,uint param_2,uint param_3,int param_4,uint *param_5,byte *param_6,
                    uint param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint3 uStack_60;
  undefined1 uStack_5d;
  undefined1 auStack_58 [15];
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((iVar2 == -0x10) || (iVar2 == 0)) || (iVar2 == -1)) || (uVar1 = *param_5, 0x7d < uVar1)) {
    return 0x1102;
  }
  uVar4 = *(uint *)(param_1 + 0x3c);
  if (*(uint *)(param_1 + 0x3c) < uVar1) {
    uVar4 = uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (0x7e < uVar1) {
    uVar1 = 0x7e;
  }
  if (((param_2 != 0xff) && (param_4 != 0)) && ((param_3 != 0x42 || (param_7 != 0xff)))) {
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    _uStack_60 = CONCAT13((char)param_7,(uint3)CONCAT11((char)param_3,(char)param_2));
    FUN_ram_4039c61e(auStack_58,param_4,0xf);
    uStack_49 = 0;
    uVar4 = FUN_ram_4204efce(param_1 + 0x44,uVar4,&uStack_60);
    if (0x7d < uVar4) {
      return 0x1102;
    }
  }
LAB_ram_4204cdc8:
  do {
    while( true ) {
      do {
        uVar5 = uVar4;
        if (uVar1 <= uVar5) {
          return 0x1102;
        }
        uVar4 = uVar5 + 1;
        iVar2 = FUN_ram_4204c62a(param_1 + 0x18,uVar5,&uStack_60);
        if (iVar2 != 0) {
          return -1;
        }
      } while (_uStack_60 != 2);
      iVar2 = FUN_ram_4204c52c(param_1,uVar5,param_6);
      if (iVar2 != 0) goto LAB_ram_4204cdf4;
      iVar2 = FUN_ram_4204ede6(param_6,uVar5 & 0xff);
      if (iVar2 != 0) break;
      iVar2 = FUN_ram_4204cb60(param_1,uVar5);
      if (iVar2 != 0) {
LAB_ram_4204cdf4:
        *(undefined4 *)(param_1 + 0xc) = 0;
        return iVar2;
      }
    }
    uVar3 = (uint)param_6[1];
    iVar2 = FUN_ram_4204c426(uVar3);
    if (iVar2 != 0) {
      uVar4 = param_6[2] + uVar5;
    }
  } while (((param_2 != 0xff) && (*param_6 != param_2)) ||
          ((param_4 != 0 && (iVar2 = FUN_ram_4039c5aa(param_4,param_6 + 8,0xf), iVar2 != 0))));
  if (param_7 == 0xff) {
    if (param_3 == 0x42) {
      if (uVar3 == 0x42) goto LAB_ram_4204cece;
      goto LAB_ram_4204cdc8;
    }
    if (param_3 != 0x41) goto LAB_ram_4204ceea;
    if (uVar3 == 0x48) {
      return 0x1103;
    }
    if (uVar3 == 0x42) goto LAB_ram_4204cdc8;
  }
  else if (param_3 == 0x42) {
    if (param_6[3] != param_7) goto LAB_ram_4204cdc8;
  }
  else {
LAB_ram_4204ceea:
    if (param_3 == 0x48) {
      if ((param_6[3] != 0xff) || ((param_8 != 0xff && (param_6[0x1d] != param_8))))
      goto LAB_ram_4204cdc8;
    }
    else if (param_3 == 0xff) goto LAB_ram_4204cece;
  }
  if (uVar3 == param_3) {
LAB_ram_4204cece:
    *param_5 = uVar5;
    return 0;
  }
  if ((param_4 != 0) || ((param_2 & param_7) != 0xff)) {
    *param_5 = uVar5;
    return 0x1103;
  }
  goto LAB_ram_4204cdc8;
}

