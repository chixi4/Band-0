
undefined4 FUN_ram_4204ac68(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar8 = *(int *)(param_2 + 0x24);
  if (5 < iVar8) {
    return 0x102;
  }
  uVar11 = *param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    if (*(int *)(param_2 + 0x20) == 1) {
      puVar6 = &DAT_ram_60024000;
      goto LAB_ram_4204acaa;
    }
    FUN_ram_4039bf1e();
  }
  puVar6 = &DAT_ram_60002000;
LAB_ram_4204acaa:
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = *(undefined1 *)(param_2 + 8);
  uVar10 = *(undefined4 *)(param_2 + 0x2c);
  uVar9 = *(undefined4 *)(param_2 + 0x30);
  (*(code *)&SUB_ram_40010488)(param_1,0,0x30);
  param_1[1] = puVar6;
  *(undefined1 *)((int)param_1 + 0xe) = uVar1;
  *(undefined1 *)((int)param_1 + 0xf) = uVar2;
  *param_1 = uVar11;
  param_1[2] = iVar8;
  param_1[5] = uVar10;
  param_1[10] = uVar9;
  iVar7 = *(int *)(param_2 + 0x18);
  uVar4 = FUN_ram_4204ac34(param_2);
  iVar8 = 0;
  if (-0x1a < iVar7) {
    iVar8 = (iVar7 + 1) / 0x19;
  }
  *(char *)(param_1 + 3) = (char)(iVar8 / (int)(40000000 / (40000000 / uVar4)));
  if (*(int *)(param_2 + 0x20) == 0) {
    bVar3 = FUN_ram_4204ac34(param_2);
    uVar4 = 0x80000000;
    if (bVar3 != 1) {
      uVar4 = bVar3 - 1;
      uVar4 = (int)uVar4 / 2 << 8 | uVar4 * 0x10000 & 0xff0000 | uVar4;
    }
  }
  else {
    uVar5 = FUN_ram_4204ac34(param_2);
    uVar4 = 0x80000000;
    if ((uVar5 & 0xff) != 1) {
      uVar4 = (uVar5 & 0xff) - 1;
      uVar4 = uVar4 * 0x1000 & 0xff000 | uVar4 | (((uVar5 & 0xff) >> 1) - 1) * 0x40 & 0x3fc0;
    }
  }
  param_1[4] = uVar4;
  if (*(char *)(param_2 + 0x28) != '\0') {
    param_1[6] = param_1[6] | 3;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x38);
    *(undefined1 *)((int)param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x39);
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x3a);
  }
  return 0;
}

