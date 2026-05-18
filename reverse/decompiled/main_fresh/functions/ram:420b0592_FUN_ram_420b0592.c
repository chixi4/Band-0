
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_420b0592(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar2 = (int *)FUN_ram_420b171e();
  piVar3 = (int *)FUN_ram_420b03f0(param_1,param_2);
  iVar4 = piVar3[5] + 0x76c;
  if (((piVar3[5] & 3U) != 0) || (uVar1 = 1, iVar4 % 100 == 0)) {
    uVar1 = (uint)(iVar4 % 400 == 0);
  }
  FUN_ram_420b095a();
  FUN_ram_420b097a();
  if (_DAT_ram_3fcc5414 == 0) {
LAB_ram_420b06e2:
    piVar3[8] = 0;
LAB_ram_420b0708:
    iVar4 = piVar2[10];
  }
  else {
    if ((piVar2[1] != iVar4) && (iVar4 = FUN_ram_420b07e8(), iVar4 == 0)) {
      piVar3[8] = -1;
      goto LAB_ram_420b0708;
    }
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar8 = piVar2[9];
    if (*piVar2 == 0) {
      if (((int)uVar7 < (int)uVar8) || ((uVar8 == uVar7 && (uVar5 < (uint)piVar2[8]))))
      goto LAB_ram_420b06e8;
      piVar3[8] = 1;
    }
    else {
      if (((int)uVar7 < (int)uVar8) || ((uVar8 == uVar7 && (uVar5 < (uint)piVar2[8]))))
      goto LAB_ram_420b06e2;
LAB_ram_420b06e8:
      iVar4 = 1;
      if ((piVar2[0x13] <= (int)uVar7) && ((piVar2[0x13] != uVar7 || ((uint)piVar2[0x12] <= uVar5)))
         ) {
        iVar4 = 0;
      }
      piVar3[8] = iVar4;
      if (iVar4 != 1) goto LAB_ram_420b0708;
    }
    iVar4 = piVar2[0x14];
  }
  iVar6 = *piVar3 - (iVar4 % 0xe10) % 0x3c;
  *piVar3 = iVar6;
  iVar9 = piVar3[2] - iVar4 / 0xe10;
  piVar3[2] = iVar9;
  iVar4 = piVar3[1] - (iVar4 % 0xe10) / 0x3c;
  piVar3[1] = iVar4;
  if (iVar6 < 0x3c) {
    if (iVar6 < 0) {
      iVar4 = iVar4 + -1;
      piVar3[1] = iVar4;
      iVar6 = iVar6 + 0x3c;
      goto LAB_ram_420b0666;
    }
  }
  else {
    iVar4 = iVar4 + 1;
    piVar3[1] = iVar4;
    iVar6 = iVar6 + -0x3c;
LAB_ram_420b0666:
    *piVar3 = iVar6;
  }
  if (iVar4 < 0x3c) {
    if (iVar4 < 0) {
      iVar9 = iVar9 + -1;
      piVar3[2] = iVar9;
      iVar4 = iVar4 + 0x3c;
      goto LAB_ram_420b0678;
    }
  }
  else {
    iVar9 = iVar9 + 1;
    piVar3[2] = iVar9;
    iVar4 = iVar4 + -0x3c;
LAB_ram_420b0678:
    piVar3[1] = iVar4;
  }
  if (0x17 < iVar9) {
    piVar3[7] = piVar3[7] + 1;
    iVar4 = piVar3[6] + 1;
    if (6 < iVar4) {
      iVar4 = 0;
    }
    piVar3[6] = iVar4;
    piVar3[2] = iVar9 + -0x18;
    iVar6 = piVar3[3] + 1;
    piVar3[3] = iVar6;
    iVar4 = *(int *)(&DAT_ram_3c0fb99c + piVar3[4] * 4 + (-uVar1 & 0x30));
    if (iVar4 < iVar6) {
      piVar3[3] = iVar6 - iVar4;
      iVar4 = piVar3[4] + 1;
      if (iVar4 == 0xc) {
        piVar3[4] = 0;
        piVar3[7] = 0;
        piVar3[5] = piVar3[5] + 1;
      }
      else {
        piVar3[4] = iVar4;
      }
    }
    goto LAB_ram_420b06ba;
  }
  if (-1 < iVar9) goto LAB_ram_420b06ba;
  piVar3[7] = piVar3[7] + -1;
  iVar4 = piVar3[6] + -1;
  if (iVar4 < 0) {
    iVar4 = 6;
  }
  piVar3[6] = iVar4;
  iVar4 = piVar3[3];
  piVar3[2] = iVar9 + 0x18;
  piVar3[3] = iVar4 + -1;
  if (iVar4 + -1 != 0) goto LAB_ram_420b06ba;
  iVar4 = piVar3[4] + -1;
  if (iVar4 < 0) {
    piVar3[4] = 0xb;
    iVar4 = piVar3[5];
    uVar5 = iVar4 - 1;
    piVar3[5] = uVar5;
    iVar4 = iVar4 + 0x76b;
    if ((uVar5 & 3) == 0) {
      uVar5 = 1;
      if (iVar4 % 100 == 0) goto LAB_ram_420b0790;
    }
    else {
LAB_ram_420b0790:
      uVar5 = (uint)(iVar4 % 400 == 0);
    }
    piVar3[7] = uVar5 + 0x16c;
    iVar4 = 0xb;
  }
  else {
    piVar3[4] = iVar4;
  }
  piVar3[3] = *(int *)(&DAT_ram_3c0fb99c + iVar4 * 4 + (-uVar1 & 0x30));
LAB_ram_420b06ba:
  FUN_ram_420b096a();
  return piVar3;
}

