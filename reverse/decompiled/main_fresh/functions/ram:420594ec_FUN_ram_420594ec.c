
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420594ec(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int extraout_a1;
  bool bVar8;
  uint uVar9;
  uint extraout_a3;
  int iVar10;
  int extraout_a4;
  byte bVar11;
  uint extraout_a5;
  undefined *puVar12;
  undefined *extraout_a6;
  uint uVar13;
  uint extraout_a7;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined2 uStack_22;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_ram_42058e08(iVar1,3);
  iVar3 = FUN_ram_420591cc(param_1,iVar1,3,&uStack_22);
  if (iVar3 != 0) {
    iVar16 = *(int *)(iVar3 + 4);
    iVar14 = iVar16 + 0xf0;
    uVar4 = FUN_ram_42058e58(uStack_22,iVar14,0x39,2);
    uStack_22 = (undefined2)uVar4;
    uVar4 = FUN_ram_42058e1e(uVar4,iVar14,0x240);
    uStack_22 = (undefined2)uVar4;
    uVar4 = FUN_ram_42058e58(uVar4,iVar14,0x32,4);
    uStack_22 = (undefined2)uVar4;
    uVar15 = 0;
    uVar5 = FUN_ram_420523b8(*(undefined4 *)(iVar1 + 0x2c));
    uVar4 = FUN_ram_42058e90(uVar4,iVar14,uVar5);
    uStack_22 = (undefined2)uVar4;
    uVar6 = FUN_ram_42058e58(uVar4,iVar14,0x37,4);
    uStack_22 = (undefined2)uVar6;
    bVar8 = false;
    iVar10 = 0;
    puVar12 = &DAT_ram_3c0f7000;
    uVar13 = 0x44;
    iVar7 = 4;
    do {
      uVar2 = puVar12[iVar10 + 0x588];
      uVar9 = uVar6 & 0xffff;
      if (uVar13 < uVar9) {
        if (bVar8) {
          uStack_22 = (undefined2)uVar15;
        }
        uVar2 = FUN_ram_4039bf1e();
        iVar7 = extraout_a1;
        uVar9 = extraout_a3;
        iVar10 = extraout_a4;
        uVar6 = extraout_a5;
        puVar12 = extraout_a6;
        uVar13 = extraout_a7;
      }
      *(undefined1 *)(iVar16 + uVar6 + 0xf0) = uVar2;
      iVar10 = iVar10 + 1;
      uVar15 = uVar9 + 1 & 0xffff;
      uVar6 = uVar6 + 1;
      bVar8 = true;
    } while (iVar10 != iVar7);
    uStack_22 = (undefined2)((uVar9 + 1) * 0x10000 >> 0x10);
    uStack_22 = FUN_ram_42059468(uVar15,iVar14,*(undefined4 *)(param_1 + 0x2c));
    FUN_ram_4205c572(param_1,3,iVar16,&uStack_22);
    FUN_ram_42058eee(uStack_22,iVar14,iVar3);
    FUN_ram_42058bf0(_DAT_ram_3fcc5340,iVar3,&DAT_ram_3c0f758c,0x43,param_1);
    FUN_ram_42053ac4(iVar3);
  }
  if (*(char *)(iVar1 + 6) != -1) {
    bVar11 = *(char *)(iVar1 + 6) + 1;
    *(byte *)(iVar1 + 6) = bVar11;
    if (bVar11 < 10) {
      uVar6 = (uint)bVar11 * 0x3e80000 >> 0x10;
      goto LAB_ram_4205963e;
    }
  }
  uVar6 = 10000;
LAB_ram_4205963e:
  *(uint *)(iVar1 + 0xc) = (uVar6 + 499 & 0xffff) / 500;
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_ram_420585b0(500,0x4204a58e,param_1);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}

