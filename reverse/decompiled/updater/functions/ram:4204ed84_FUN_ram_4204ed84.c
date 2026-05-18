
int FUN_ram_4204ed84(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                    undefined4 *param_6,undefined4 *param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar5 = 0;
  uVar4 = 0x3c;
  do {
    if (param_1 <= (int)uVar4) {
      *param_5 = 0;
      param_5[1] = uVar11;
      *param_6 = 0;
      param_6[1] = uVar10;
      *param_7 = 0;
      param_7[1] = uVar9;
      return iVar5;
    }
    if (param_2 == 0) {
      if (param_3 == 0) {
LAB_ram_4204eed4:
        if ((param_4 != 0) && ((int)uVar4 < 0x40)) goto LAB_ram_4204eedc;
      }
      else if ((int)uVar4 < 0x40) {
LAB_ram_4204ee90:
        if ((1 << (uVar4 & 0x1f) & *(uint *)(param_3 + 4)) == 0) goto LAB_ram_4204ee9c;
        goto LAB_ram_4204edf6;
      }
    }
    else if ((int)uVar4 < 0x40) {
      if ((1 << (uVar4 & 0x1f) & *(uint *)(param_2 + 4)) == 0) {
        if (param_3 != 0) goto LAB_ram_4204ee90;
LAB_ram_4204ee9c:
        if (param_4 == 0) goto LAB_ram_4204eeea;
LAB_ram_4204eedc:
        if ((1 << (uVar4 & 0x1f) & *(uint *)(param_4 + 4)) == 0) goto LAB_ram_4204eeea;
      }
LAB_ram_4204edf6:
      uVar6 = FUN_ram_420599c2();
      iVar7 = FUN_ram_4204e868(uVar4);
      if (iVar7 == 0) {
        FUN_ram_420599ec(uVar6);
        return -1;
      }
      sVar2 = *(short *)(iVar7 + 10);
      sVar3 = *(short *)(iVar7 + 0xc);
      iVar12 = *(int *)(iVar7 + 4);
      sVar1 = *(short *)(iVar7 + 8);
      FUN_ram_420599ec(uVar6);
      if (((param_2 != 0) && (uVar8 = 1 << (uVar4 & 0x1f), (*(uint *)(param_2 + 4) & uVar8) != 0))
         && ((iVar12 != 0 || (0 < sVar1)))) {
        uVar11 = uVar11 | uVar8;
        iVar5 = iVar5 + 1;
      }
      if (((param_3 != 0) && (uVar8 = 1 << (uVar4 & 0x1f), (*(uint *)(param_3 + 4) & uVar8) != 0))
         && (sVar2 != 0)) {
        uVar10 = uVar10 | uVar8;
        iVar5 = iVar5 + 1;
      }
      if (((param_4 != 0) && (uVar8 = 1 << (uVar4 & 0x1f), (*(uint *)(param_4 + 4) & uVar8) != 0))
         && (sVar3 != 0)) {
        uVar9 = uVar9 | uVar8;
        iVar5 = iVar5 + 1;
      }
      FUN_ram_4204ecbc(iVar7);
    }
    else if (param_3 == 0) goto LAB_ram_4204eed4;
LAB_ram_4204eeea:
    uVar4 = uVar4 + 1;
  } while( true );
}

