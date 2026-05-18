
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42059ff2(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int extraout_a1;
  bool bVar7;
  uint uVar8;
  uint extraout_a3;
  int iVar9;
  int extraout_a4;
  byte bVar10;
  uint extraout_a5;
  undefined *puVar11;
  undefined *extraout_a6;
  uint uVar12;
  uint extraout_a7;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined2 auStack_22 [3];
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_ram_42058e08(iVar1,5);
  iVar3 = FUN_ram_420591cc(param_1,iVar1,3,auStack_22);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar15 = *(int *)(iVar3 + 4);
    iVar13 = iVar15 + 0xf0;
    uVar4 = FUN_ram_42058e58(auStack_22[0],iVar13,0x39,2);
    auStack_22[0] = (undefined2)uVar4;
    uVar4 = FUN_ram_42058e1e(uVar4,iVar13,*(undefined2 *)(param_1 + 0x30));
    auStack_22[0] = (undefined2)uVar4;
    uVar5 = FUN_ram_42058e58(uVar4,iVar13,0x37,4);
    uVar14 = 0;
    auStack_22[0] = (undefined2)uVar5;
    bVar7 = false;
    iVar9 = 0;
    puVar11 = &DAT_ram_3c0f7000;
    uVar12 = 0x44;
    iVar6 = 4;
    do {
      uVar2 = puVar11[iVar9 + 0x588];
      uVar8 = uVar5 & 0xffff;
      if (uVar12 < uVar8) {
        if (bVar7) {
          auStack_22[0] = (undefined2)uVar14;
        }
        uVar2 = FUN_ram_4039bf1e();
        iVar6 = extraout_a1;
        uVar8 = extraout_a3;
        iVar9 = extraout_a4;
        uVar5 = extraout_a5;
        puVar11 = extraout_a6;
        uVar12 = extraout_a7;
      }
      *(undefined1 *)(iVar15 + uVar5 + 0xf0) = uVar2;
      iVar9 = iVar9 + 1;
      uVar14 = uVar8 + 1 & 0xffff;
      uVar5 = uVar5 + 1;
      bVar7 = true;
    } while (iVar9 != iVar6);
    auStack_22[0] = (undefined2)((uVar8 + 1) * 0x10000 >> 0x10);
    auStack_22[0] = FUN_ram_42059468(uVar14,iVar13,*(undefined4 *)(param_1 + 0x2c));
    FUN_ram_4205c572(param_1,5,iVar15,auStack_22);
    FUN_ram_42058eee(auStack_22[0],iVar13,iVar3);
    uVar4 = FUN_ram_42058bf0(_DAT_ram_3fcc5340,iVar3,iVar1 + 0x28,0x43,param_1);
    FUN_ram_42053ac4(iVar3);
  }
  if (*(char *)(iVar1 + 6) != -1) {
    bVar10 = *(char *)(iVar1 + 6) + 1;
    *(byte *)(iVar1 + 6) = bVar10;
    if (bVar10 < 10) {
      uVar5 = (uint)bVar10 * 0x7d00000 >> 0x10;
      goto LAB_ram_4205a11a;
    }
  }
  uVar5 = 20000;
LAB_ram_4205a11a:
  *(uint *)(iVar1 + 0xc) = (uVar5 + 499 & 0xffff) / 500;
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_ram_420585b0(500,0x4204a58e,param_1);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return uVar4;
}

