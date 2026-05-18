
int * FUN_ram_420b03f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar9 = *param_1;
  uVar10 = param_1[1];
  iVar1 = (*(code *)&SUB_ram_400108f8)(uVar9,uVar10,0x15180,0);
  iVar2 = (*(code *)&SUB_ram_40010980)(uVar9,uVar10,0x15180,0);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x15180;
    iVar7 = 0xafa6b;
  }
  else {
    iVar7 = 0xafa6c;
  }
  iVar1 = iVar1 + iVar7;
  param_2[2] = iVar2 / 0xe10;
  param_2[1] = (iVar2 % 0xe10) / 0x3c;
  iVar7 = (iVar1 + 3) % 7;
  *param_2 = (iVar2 % 0xe10) % 0x3c;
  if (iVar7 < 0) {
    param_2[6] = iVar7 + 7;
  }
  else {
    param_2[6] = iVar7;
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_ram_420b0488;
  }
  iVar2 = iVar1 + -0x23ab0;
LAB_ram_420b0488:
  uVar4 = (iVar2 / 0x23ab1) * -0x23ab1 + iVar1;
  uVar6 = ((uVar4 / 0x8eac + uVar4) - uVar4 / 0x5b4) - uVar4 / 0x23ab0;
  uVar3 = uVar6 / 0x16d;
  uVar6 = (uVar3 / 100 - uVar6 / 0x5b4) + uVar4 + uVar3 * -0x16d;
  uVar4 = uVar6 * 5 + 2;
  uVar8 = uVar4 / 0x99;
  uVar4 = (-(uint)(0x5f9 < uVar4) & 0xfffffff4) + 2 + uVar8;
  if (uVar6 < 0x132) {
    if (((uVar3 & 3) != 0) || (uVar5 = 1, uVar3 % 100 == 0)) {
      uVar5 = (uint)(uVar3 % 400 == 0);
    }
    iVar1 = uVar6 + 0x3b + uVar5;
  }
  else {
    iVar1 = uVar6 - 0x132;
  }
  param_2[7] = iVar1;
  param_2[5] = (iVar2 / 0x23ab1) * 400 + uVar3 + (uint)(uVar4 < 2) + -0x76c;
  param_2[4] = uVar4;
  param_2[3] = (uVar6 + 1) - (uVar8 * 0x99 + 2) / 5;
  param_2[8] = 0;
  return param_2;
}

