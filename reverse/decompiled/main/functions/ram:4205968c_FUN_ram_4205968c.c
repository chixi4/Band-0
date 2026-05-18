
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205968c(int param_1)

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
  uint extraout_a5;
  undefined *puVar10;
  undefined *extraout_a6;
  uint uVar11;
  uint extraout_a7;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined2 auStack_22 [3];
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  FUN_ram_42058e08(iVar1,6);
  iVar3 = FUN_ram_420591cc(param_1,iVar1,1,auStack_22);
  if (iVar3 != 0) {
    iVar13 = *(int *)(iVar3 + 4);
    iVar12 = iVar13 + 0xf0;
    uVar4 = FUN_ram_42058e58(auStack_22[0],iVar12,0x39,2);
    auStack_22[0] = (undefined2)uVar4;
    uVar4 = FUN_ram_42058e1e(uVar4,iVar12,*(undefined2 *)(param_1 + 0x30));
    auStack_22[0] = (undefined2)uVar4;
    uVar4 = FUN_ram_42059468(uVar4,iVar12,*(undefined4 *)(param_1 + 0x2c));
    auStack_22[0] = (undefined2)uVar4;
    uVar5 = FUN_ram_42058e58(uVar4,iVar12,0x37,4);
    uVar14 = 0;
    auStack_22[0] = (undefined2)uVar5;
    bVar7 = false;
    iVar9 = 0;
    puVar10 = &DAT_ram_3c0f7000;
    uVar11 = 0x44;
    iVar6 = 4;
    do {
      uVar2 = puVar10[iVar9 + 0x588];
      uVar8 = uVar5 & 0xffff;
      if (uVar11 < uVar8) {
        if (bVar7) {
          auStack_22[0] = (undefined2)uVar14;
        }
        uVar2 = FUN_ram_4039bf1e();
        iVar6 = extraout_a1;
        uVar8 = extraout_a3;
        iVar9 = extraout_a4;
        uVar5 = extraout_a5;
        puVar10 = extraout_a6;
        uVar11 = extraout_a7;
      }
      *(undefined1 *)(iVar13 + uVar5 + 0xf0) = uVar2;
      iVar9 = iVar9 + 1;
      uVar14 = uVar8 + 1 & 0xffff;
      uVar5 = uVar5 + 1;
      bVar7 = true;
    } while (iVar9 != iVar6);
    auStack_22[0] = (undefined2)((uVar8 + 1) * 0x10000 >> 0x10);
    FUN_ram_4205c572(param_1,6,iVar13,auStack_22);
    FUN_ram_42058eee(auStack_22[0],iVar12,iVar3);
    FUN_ram_42058a7e(_DAT_ram_3fcc5340,iVar3,&DAT_ram_3c0f758c,0x43,param_1,&DAT_ram_3c0f7590);
    FUN_ram_42053ac4(iVar3);
  }
  if (*(byte *)(iVar1 + 6) != 0xff) {
    uVar5 = *(byte *)(iVar1 + 6) + 1;
    *(char *)(iVar1 + 6) = (char)uVar5;
    if ((uVar5 & 0xff) < 5) {
      uVar5 = (uint)((1 << (uVar5 & 0x1f)) * 0xfa0000) >> 0x10;
      goto LAB_ram_420597c0;
    }
  }
  uVar5 = 4000;
LAB_ram_420597c0:
  *(uint *)(iVar1 + 0xc) = (uVar5 + 499 & 0xffff) / 500;
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_ram_420585b0(500,0x4204a58e,param_1);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}

