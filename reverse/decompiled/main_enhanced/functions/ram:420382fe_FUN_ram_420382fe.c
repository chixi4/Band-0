
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_420382fe(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  int unaff_s1;
  int iVar3;
  uint unaff_s2;
  uint uVar4;
  int unaff_s3;
  byte bVar5;
  undefined2 uVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  param_3 = unaff_s1 << 8 | param_3;
  uVar4 = param_5 << 8 | unaff_s2;
  bVar5 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 2) {
    uVar6 = 0x12;
  }
  else if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 != 1) {
        return 0x12;
      }
      FUN_ram_4039c11e(unaff_s3 + 0x30,param_1 + 7,6);
      bVar5 = 0;
      uVar4 = 0;
      param_3 = 0;
      uVar6 = 0x1d;
      goto LAB_ram_42038398;
    }
    uVar6 = 0x13;
  }
  else if (bVar1 == 3) {
    uVar6 = 0x10;
  }
  else {
    if (bVar1 != 4) {
      return 0x12;
    }
    FUN_ram_4039c11e(unaff_s3 + 0x30,param_1 + 7,6);
    bVar5 = 0;
    uVar6 = 0x15;
  }
  if (uVar4 < param_3) {
    return 0x12;
  }
  if (0x3fe0 < (param_3 - 0x20 & 0xffff)) {
    return 0x12;
  }
  if (0x3fe0 < (uVar4 - 0x20 & 0xffff)) {
    return 0x12;
  }
LAB_ram_42038398:
  if ((*(byte *)(param_1 + 5) < 4) && (*(byte *)(param_1 + 6) < 2)) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    *(undefined1 *)(unaff_s3 + 8) = *(undefined1 *)(iVar3 + 0x10);
    if (1 < *(byte *)(param_1 + 5)) {
      FUN_ram_4039c11e(unaff_s3 + 0x30,param_1 + 7,6);
    }
    bVar1 = *(byte *)(param_1 + 0xd);
    if ((((bVar1 & 0xf8) == 0) && (bVar1 != 0)) && (bVar5 < 4)) {
      *(undefined1 *)(unaff_s3 + 4) = *(undefined1 *)(param_1 + 5);
      uVar2 = *(undefined1 *)(param_1 + 6);
      *(byte *)(unaff_s3 + 3) = bVar5;
      *(byte *)(unaff_s3 + 2) = bVar1;
      *(undefined1 *)(unaff_s3 + 5) = uVar2;
      *(short *)(unaff_s3 + 0xe) = (short)param_3;
      *(short *)(unaff_s3 + 0x10) = (short)uVar4;
      *(undefined2 *)(unaff_s3 + 0xc) = uVar6;
      return 0;
    }
  }
  return 0x12;
}

