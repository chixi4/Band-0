
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42010156(undefined4 *param_1,undefined4 param_2,uint param_3,code *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int aiStack_44 [4];
  
  aiStack_44[0] = 0;
  uVar3 = FUN_ram_42010128();
  uVar2 = _DAT_ram_3fcc4df8;
  if ((param_3 != 0) && (param_3 < uVar3)) {
    uVar3 = param_3;
  }
  for (puVar7 = (undefined1 *)*param_1;
      (aiStack_44[0] < (int)uVar3 && (puVar7 != (undefined1 *)0x0)); puVar7 = puVar7 + 4) {
    bVar1 = puVar7[1];
    uVar4 = (uint)*(ushort *)(puVar7 + 2) + (uint)bVar1;
    if (0x100 < uVar4) {
      uVar4 = 0x1604;
      goto LAB_ram_42010244;
    }
    iVar5 = uVar4 - 1;
    uVar9 = iVar5 / 0x20;
    uVar4 = bVar1 & 0x1f;
    for (uVar8 = (uint)(bVar1 >> 5); (int)uVar8 <= (int)uVar9; uVar8 = uVar8 + 1) {
      iVar6 = iVar5 % 0x20;
      if (uVar8 != uVar9) {
        iVar6 = 0x1f;
      }
      iVar6 = (iVar6 - (-(uint)(uVar8 == bVar1 >> 5) & uVar4)) + 1;
      if ((int)uVar3 < aiStack_44[0] + iVar6) {
        iVar6 = uVar3 - aiStack_44[0];
      }
      uVar4 = (*param_4)(uVar8,*puVar7,uVar4,iVar6,param_2,aiStack_44);
      if (uVar4 != 0) goto LAB_ram_42010244;
      if ((int)uVar3 <= aiStack_44[0]) break;
      uVar4 = 0;
    }
  }
  if (((param_4 == (code *)0x420002da) || (uVar4 = 0, param_4 == (code *)0x420003b2)) &&
     (uVar4 = 0x1606, _DAT_ram_3fcc4df8 == uVar2)) {
    uVar4 = -(uint)((_DAT_ram_3fcc4df8 & 1) != 0) & 0x1606;
  }
LAB_ram_42010244:
  if (aiStack_44[0] <= (int)uVar3) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

