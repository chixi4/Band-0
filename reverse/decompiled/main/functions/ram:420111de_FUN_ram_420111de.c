
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420111de(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_a2;
  int iVar7;
  int iVar8;
  uint *extraout_a5;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int aiStack_50 [3];
  int local_44;
  uint local_40;
  
  piVar13 = (int *)&stack0x8e22bee0;
  FUN_ram_4039c11e(&stack0x8e22bee0,&DAT_ram_3c0c56c0,0x71dd40d0);
  puVar9 = (uint *)&stack0x8e22bec0;
  FUN_ram_4039c11e(&stack0x8e22bec8,&DAT_ram_3c0fba48);
  (*(code *)&SUB_ram_40010568)(&stack0x8e22bec0,3,8,0x420011b4);
  for (uVar6 = 0; iVar3 = param_1, uVar6 < 3; uVar6 = uVar6 + 1) {
    uVar2 = *puVar9 & 0xfffffffc;
    uVar5 = puVar9[1] + 3 & 0xfffffffc;
    *puVar9 = uVar2;
    puVar9[1] = uVar5;
    if ((int)uVar5 < (int)uVar2) {
LAB_ram_420112d8:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    if (uVar6 < 2) {
      if ((int)puVar9[2] <= (int)uVar2) goto LAB_ram_420112d8;
      if ((int)puVar9[2] < (int)uVar5) {
        FUN_ram_4039bf1e();
        uVar6 = extraout_a2;
        puVar9 = extraout_a5;
      }
    }
    puVar9 = puVar9 + 2;
  }
LAB_ram_42011292:
  if (piVar13 == aiStack_50) {
    return (iVar3 - param_1 >> 2) * -0x33333333;
  }
  FUN_ram_4039c11e(&local_44,piVar13,0x14);
  iVar4 = *piVar13;
  uVar5 = piVar13[1];
  iVar7 = iVar4 + uVar5;
  iVar8 = iVar4;
  uVar6 = uVar5;
  piVar11 = (int *)&stack0x8e22bec0;
  for (uVar2 = 0; iVar14 = iVar3, uVar2 < 3; uVar2 = uVar2 + 1) {
    iVar10 = piVar11[1];
    iVar12 = iVar7;
    if (iVar8 < iVar10) {
      iVar12 = *piVar11;
      if (iVar7 <= iVar12) break;
      if (iVar8 < iVar12) {
        uVar6 = iVar12 - iVar8;
        if (iVar10 < iVar7) {
          piVar13[1] = uVar5 - (iVar10 - iVar4);
          *piVar13 = iVar10;
          bVar1 = false;
          if (0x10 < uVar6) goto LAB_ram_42011332;
          goto LAB_ram_42011292;
        }
      }
      else {
        if (iVar7 <= iVar10) goto LAB_ram_4201136e;
        uVar6 = iVar7 - iVar10;
        iVar12 = iVar7;
        iVar8 = iVar10;
      }
    }
    piVar11 = piVar11 + 2;
    iVar7 = iVar12;
  }
  bVar1 = true;
  if (0x10 < uVar6) goto LAB_ram_42011332;
  goto LAB_ram_4201136e;
LAB_ram_42011332:
  iVar14 = iVar3 + 0x14;
  local_44 = iVar8;
  local_40 = uVar6;
  FUN_ram_4039c11e(iVar3,&local_44,0x14);
  iVar3 = iVar14;
  if (bVar1) {
LAB_ram_4201136e:
    piVar13 = piVar13 + 5;
    iVar3 = iVar14;
  }
  goto LAB_ram_42011292;
}

