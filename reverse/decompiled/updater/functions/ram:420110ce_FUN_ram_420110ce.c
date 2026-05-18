
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420110ce(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint extraout_a3;
  int iVar9;
  uint *extraout_a5;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint auStack_70 [2];
  undefined1 auStack_68 [24];
  int aiStack_50 [4];
  uint local_40;
  
  iVar15 = _DAT_ram_3c074754 * 0x14;
  iVar1 = -(iVar15 + 0xfU & 0xfffffff0);
  piVar14 = (int *)((int)aiStack_50 + iVar1);
  FUN_ram_40399daa((int)aiStack_50 + iVar1,0x3c074758,iVar15);
  puVar10 = (uint *)((int)auStack_70 + iVar1);
  *(undefined4 *)((int)auStack_70 + iVar1) = *(undefined4 *)(_DAT_ram_3ff4fffc + 4);
  *(undefined4 *)((int)auStack_70 + iVar1 + 4) = 0x3fce0000;
  FUN_ram_40399daa(auStack_68 + iVar1,0x3c07aa8c);
  (*(code *)&SUB_ram_40010568)((int)auStack_70 + iVar1,3,8,0x420010a4);
  for (uVar8 = 0; uVar8 < 3; uVar8 = uVar8 + 1) {
    *puVar10 = *puVar10 & 0xfffffffc;
    uVar3 = puVar10[1] + 3 & 0xfffffffc;
    puVar10[1] = uVar3;
    if ((uVar8 < 2) && ((int)puVar10[2] < (int)uVar3)) {
      FUN_ram_40399b58();
      uVar8 = extraout_a3;
      puVar10 = extraout_a5;
    }
    puVar10 = puVar10 + 2;
  }
  iVar4 = param_1;
LAB_ram_42011182:
  if (piVar14 == (int *)((int)aiStack_50 + iVar15 + iVar1)) {
    return (iVar4 - param_1 >> 2) * -0x33333333;
  }
  FUN_ram_40399daa(aiStack_50 + 3,piVar14,0x14);
  iVar6 = *piVar14;
  uVar5 = piVar14[1];
  iVar7 = iVar6 + uVar5;
  iVar9 = iVar6;
  uVar8 = uVar5;
  piVar12 = (int *)((int)auStack_70 + iVar1);
  for (uVar3 = 0; iVar16 = iVar4, uVar3 < 3; uVar3 = uVar3 + 1) {
    iVar11 = piVar12[1];
    iVar13 = iVar7;
    if (iVar9 < iVar11) {
      iVar13 = *piVar12;
      if (iVar7 <= iVar13) break;
      if (iVar9 < iVar13) {
        uVar8 = iVar13 - iVar9;
        if (iVar11 < iVar7) {
          piVar14[1] = uVar5 - (iVar11 - iVar6);
          *piVar14 = iVar11;
          bVar2 = false;
          if (0x10 < uVar8) goto LAB_ram_4201120a;
          goto LAB_ram_42011182;
        }
      }
      else {
        if (iVar7 <= iVar11) goto LAB_ram_42011246;
        uVar8 = iVar7 - iVar11;
        iVar13 = iVar7;
        iVar9 = iVar11;
      }
    }
    piVar12 = piVar12 + 2;
    iVar7 = iVar13;
  }
  bVar2 = true;
  if (0x10 < uVar8) goto LAB_ram_4201120a;
  goto LAB_ram_42011246;
LAB_ram_4201120a:
  iVar16 = iVar4 + 0x14;
  aiStack_50[3] = iVar9;
  local_40 = uVar8;
  FUN_ram_40399daa(iVar4,aiStack_50 + 3,0x14);
  iVar4 = iVar16;
  if (bVar2) {
LAB_ram_42011246:
    piVar14 = piVar14 + 5;
    iVar4 = iVar16;
  }
  goto LAB_ram_42011182;
}

