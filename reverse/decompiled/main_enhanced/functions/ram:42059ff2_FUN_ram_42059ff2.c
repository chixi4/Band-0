
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42059ff2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined2 auStack_22 [3];
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_ram_42058e08(iVar1,5);
  iVar2 = FUN_ram_420591cc(param_1,iVar1,3,auStack_22);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar11 = *(int *)(iVar2 + 4);
    iVar9 = iVar11 + 0xf0;
    uVar3 = FUN_ram_42058e58(auStack_22[0],iVar9,0x39,2);
    auStack_22[0] = (undefined2)uVar3;
    uVar3 = FUN_ram_42058e1e(uVar3,iVar9,*(undefined2 *)(param_1 + 0x30));
    auStack_22[0] = (undefined2)uVar3;
    uVar4 = FUN_ram_42058e58(uVar3,iVar9,0x37,4);
    uVar10 = 0;
    auStack_22[0] = (undefined2)uVar4;
    bVar5 = false;
    iVar7 = 0;
    do {
      if (0x44 < (uVar4 & 0xffff)) {
        if (bVar5) {
          auStack_22[0] = (undefined2)uVar10;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      uVar6 = (uVar4 & 0xffff) + 1;
      *(undefined1 *)(iVar11 + uVar4 + 0xf0) = (&DAT_ram_3c0f7588)[iVar7];
      iVar7 = iVar7 + 1;
      uVar10 = uVar6 & 0xffff;
      uVar4 = uVar4 + 1;
      bVar5 = true;
    } while (iVar7 != 4);
    auStack_22[0] = (undefined2)(uVar6 * 0x10000 >> 0x10);
    auStack_22[0] = FUN_ram_42059468(uVar10,iVar9,*(undefined4 *)(param_1 + 0x2c));
    FUN_ram_4205c572(param_1,5,iVar11,auStack_22);
    FUN_ram_42058eee(auStack_22[0],iVar9,iVar2);
    uVar3 = FUN_ram_42058bf0(_DAT_ram_3fcc5340,iVar2,iVar1 + 0x28,0x43,param_1);
    FUN_ram_42053ac4(iVar2);
  }
  if (*(char *)(iVar1 + 6) != -1) {
    bVar8 = *(char *)(iVar1 + 6) + 1;
    *(byte *)(iVar1 + 6) = bVar8;
    if (bVar8 < 10) {
      uVar4 = (uint)bVar8 * 0x7d00000 >> 0x10;
      goto LAB_ram_4205a11a;
    }
  }
  uVar4 = 20000;
LAB_ram_4205a11a:
  *(uint *)(iVar1 + 0xc) = (uVar4 + 499 & 0xffff) / 500;
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_ram_420585b0(500,0x4204a58e,param_1);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return uVar3;
}

