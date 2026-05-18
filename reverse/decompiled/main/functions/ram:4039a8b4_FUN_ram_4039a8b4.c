
undefined4 FUN_ram_4039a8b4(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar2 = *param_1;
  uVar10 = param_1[3];
  if (((int)uVar2 / 4) * 3 < (int)uVar10) {
    uStack_24 = 0x80000000;
    uVar5 = uVar2;
  }
  else {
    iVar3 = 2;
    iVar1 = 0;
    iVar4 = -1;
    iVar9 = -1;
    do {
      iVar8 = ((int)uVar2 / iVar3 + (int)uVar10 / 2) / (int)uVar10;
      if (iVar8 < 0x11) {
        if (iVar8 < 1) {
          iVar8 = 1;
        }
      }
      else {
        iVar8 = 0x10;
      }
      uVar5 = (int)uVar2 / (iVar8 * iVar3) - uVar10;
      uVar11 = (int)uVar5 >> 0x1f;
      iVar6 = (uVar11 ^ uVar5) - uVar11;
      iVar7 = iVar3;
      if ((iVar4 != -1) && (iVar1 < iVar6)) {
        iVar6 = iVar1;
        iVar7 = iVar4;
        iVar8 = iVar9;
      }
      iVar1 = iVar6;
      iVar3 = iVar3 + 1;
      iVar4 = iVar7;
      iVar9 = iVar8;
    } while (iVar3 != 0x41);
    iVar4 = 1;
    if (0x80 < (int)(param_1[4] * iVar7)) {
      iVar4 = (int)(param_1[4] * iVar7 + 0x7f) >> 8;
    }
    uStack_24 = iVar7 - 1U & 0x3f;
    uVar5 = (int)uVar2 / (iVar7 * iVar8);
    uStack_24 = (iVar4 - 1U & 0x3f) << 6 | uStack_24 << 0xc | (iVar8 - 1U & 0xf) << 0x12 | uStack_24
    ;
  }
  uVar11 = uStack_24;
  FUN_ram_4039a862(uVar2,uVar5,(char)param_1[6],param_1[5],&uStack_2c,&uStack_28);
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar11;
    param_2[4] = uVar10;
    param_2[6] = uStack_2c;
    param_2[5] = uVar5;
    param_2[7] = uStack_28;
  }
  return 0;
}

