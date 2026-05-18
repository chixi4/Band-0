
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205968c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined2 auStack_22 [3];
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  FUN_ram_42058e08(iVar1,6);
  iVar2 = FUN_ram_420591cc(param_1,iVar1,1,auStack_22);
  if (iVar2 != 0) {
    iVar9 = *(int *)(iVar2 + 4);
    iVar8 = iVar9 + 0xf0;
    uVar3 = FUN_ram_42058e58(auStack_22[0],iVar8,0x39,2);
    auStack_22[0] = (undefined2)uVar3;
    uVar3 = FUN_ram_42058e1e(uVar3,iVar8,*(undefined2 *)(param_1 + 0x30));
    auStack_22[0] = (undefined2)uVar3;
    uVar3 = FUN_ram_42059468(uVar3,iVar8,*(undefined4 *)(param_1 + 0x2c));
    auStack_22[0] = (undefined2)uVar3;
    uVar4 = FUN_ram_42058e58(uVar3,iVar8,0x37,4);
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
      *(undefined1 *)(iVar9 + uVar4 + 0xf0) = (&DAT_ram_3c0f7588)[iVar7];
      iVar7 = iVar7 + 1;
      uVar10 = uVar6 & 0xffff;
      uVar4 = uVar4 + 1;
      bVar5 = true;
    } while (iVar7 != 4);
    auStack_22[0] = (undefined2)(uVar6 * 0x10000 >> 0x10);
    FUN_ram_4205c572(param_1,6,iVar9,auStack_22);
    FUN_ram_42058eee(auStack_22[0],iVar8,iVar2);
    FUN_ram_42058a7e(_DAT_ram_3fcc5340,iVar2,&DAT_ram_3c0f758c,0x43,param_1,&DAT_ram_3c0f7590);
    FUN_ram_42053ac4(iVar2);
  }
  if (*(byte *)(iVar1 + 6) != 0xff) {
    uVar4 = *(byte *)(iVar1 + 6) + 1;
    *(char *)(iVar1 + 6) = (char)uVar4;
    if ((uVar4 & 0xff) < 5) {
      uVar4 = (uint)((1 << (uVar4 & 0x1f)) * 0xfa0000) >> 0x10;
      goto LAB_ram_420597c0;
    }
  }
  uVar4 = 4000;
LAB_ram_420597c0:
  *(uint *)(iVar1 + 0xc) = (uVar4 + 499 & 0xffff) / 500;
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_ram_420585b0(500,0x4204a58e,param_1);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}

