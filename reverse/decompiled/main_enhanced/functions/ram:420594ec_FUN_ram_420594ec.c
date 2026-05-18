
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420594ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined2 uStack_22;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_ram_42058e08(iVar1,3);
  iVar2 = FUN_ram_420591cc(param_1,iVar1,3,&uStack_22);
  if (iVar2 != 0) {
    iVar12 = *(int *)(iVar2 + 4);
    iVar10 = iVar12 + 0xf0;
    uVar3 = FUN_ram_42058e58(uStack_22,iVar10,0x39,2);
    uStack_22 = (undefined2)uVar3;
    uVar3 = FUN_ram_42058e1e(uVar3,iVar10,0x240);
    uStack_22 = (undefined2)uVar3;
    uVar3 = FUN_ram_42058e58(uVar3,iVar10,0x32,4);
    uStack_22 = (undefined2)uVar3;
    uVar11 = 0;
    uVar4 = FUN_ram_420523b8(*(undefined4 *)(iVar1 + 0x2c));
    uVar3 = FUN_ram_42058e90(uVar3,iVar10,uVar4);
    uStack_22 = (undefined2)uVar3;
    uVar5 = FUN_ram_42058e58(uVar3,iVar10,0x37,4);
    uStack_22 = (undefined2)uVar5;
    bVar6 = false;
    iVar8 = 0;
    do {
      if (0x44 < (uVar5 & 0xffff)) {
        if (bVar6) {
          uStack_22 = (undefined2)uVar11;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      uVar7 = (uVar5 & 0xffff) + 1;
      *(undefined1 *)(iVar12 + uVar5 + 0xf0) = (&DAT_ram_3c0f7588)[iVar8];
      iVar8 = iVar8 + 1;
      uVar11 = uVar7 & 0xffff;
      uVar5 = uVar5 + 1;
      bVar6 = true;
    } while (iVar8 != 4);
    uStack_22 = (undefined2)(uVar7 * 0x10000 >> 0x10);
    uStack_22 = FUN_ram_42059468(uVar11,iVar10,*(undefined4 *)(param_1 + 0x2c));
    FUN_ram_4205c572(param_1,3,iVar12,&uStack_22);
    FUN_ram_42058eee(uStack_22,iVar10,iVar2);
    FUN_ram_42058bf0(_DAT_ram_3fcc5340,iVar2,&DAT_ram_3c0f758c,0x43,param_1);
    FUN_ram_42053ac4(iVar2);
  }
  if (*(char *)(iVar1 + 6) != -1) {
    bVar9 = *(char *)(iVar1 + 6) + 1;
    *(byte *)(iVar1 + 6) = bVar9;
    if (bVar9 < 10) {
      uVar5 = (uint)bVar9 * 0x3e80000 >> 0x10;
      goto LAB_ram_4205963e;
    }
  }
  uVar5 = 10000;
LAB_ram_4205963e:
  *(uint *)(iVar1 + 0xc) = (uVar5 + 499 & 0xffff) / 500;
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_ram_420585b0(500,0x4204a58e,param_1);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}

