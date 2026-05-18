
undefined4 FUN_ram_4205f936(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  
  piVar9 = *(int **)(param_1 + 0x10);
  iVar10 = *(int *)(param_1 + 0xc);
  pbVar2 = (byte *)FUN_ram_4209780c(*(undefined4 *)(iVar10 + 0x24),(char)piVar9[1],piVar9[3]);
  if (pbVar2 == (byte *)0x0) {
    return 0x5001;
  }
  pbVar1 = (byte *)piVar9[2];
  if (pbVar1 == (byte *)0x0) {
    return 0x5001;
  }
  if (*piVar9 == 2) {
    if (*(int *)(iVar10 + 0x40) == 2) {
      return 0x5005;
    }
    uVar8 = piVar9[1];
    if (uVar8 != 0x20) {
      if (uVar8 < 0x21) {
        if (uVar8 != 1) {
          if (uVar8 != 6) {
            return 0;
          }
          if ((*pbVar2 & 2) != 0) {
            *pbVar1 = 1;
            return 0;
          }
          goto LAB_ram_4205fa00;
        }
      }
      else if (uVar8 != 0x32) {
        if (uVar8 != 0x33) {
          return 0;
        }
        *(undefined4 *)pbVar1 = *(undefined4 *)pbVar2;
        return 0;
      }
      FUN_ram_4039c11e(pbVar1,pbVar2,piVar9[3]);
      return 0;
    }
    if ((*pbVar2 & 1) != 0) {
      *pbVar1 = 1;
      return 0;
    }
LAB_ram_4205fa00:
    *pbVar1 = 0;
    return 0;
  }
  if (*piVar9 != 1) {
    return 0x5001;
  }
  if (*(int *)(iVar10 + 0x40) == 1) {
    return 0x5004;
  }
  uVar8 = piVar9[1];
  if (uVar8 == 0x32) {
    if (*pbVar1 != 0) {
      FUN_ram_4205f8ee(iVar10);
      uVar8 = (*(code *)&SUB_ram_400108cc)(0);
      uVar4 = (*(code *)&SUB_ram_400108cc)(0);
      uVar11 = uVar4 & uVar8;
      uVar4 = ~uVar4 | uVar8;
      if ((uVar8 == uVar11) || (uVar8 == uVar4)) {
        return 0x5001;
      }
      uVar5 = (*(code *)&SUB_ram_400108cc)(*(undefined4 *)(pbVar1 + 4));
      uVar6 = (*(code *)&SUB_ram_400108cc)(*(undefined4 *)(pbVar1 + 8));
      if ((uVar5 <= uVar8) && (uVar8 <= uVar6)) {
        return 0x5001;
      }
      if (uVar5 <= uVar11) {
        return 0x5001;
      }
      if (uVar4 <= uVar5) {
        return 0x5001;
      }
      if (uVar6 <= uVar11) {
        return 0x5001;
      }
      if (uVar4 <= uVar6) {
        return 0x5001;
      }
      if (100 < (uVar6 + 1) - uVar5) {
        return 0x5001;
      }
      if (uVar6 <= uVar5) {
        return 0x5001;
      }
    }
LAB_ram_4205fa80:
    FUN_ram_4039c11e(pbVar2,pbVar1,piVar9[3]);
  }
  else if (uVar8 < 0x33) {
    if (uVar8 == 6) {
      if (*pbVar1 == 0) {
        bVar7 = *pbVar2 & 0xfd;
      }
      else {
        bVar7 = *pbVar2 | 2;
      }
    }
    else {
      if (uVar8 != 0x20) {
        if (uVar8 == 1) {
          iVar3 = FUN_ram_4039c0e0(*(int *)(iVar10 + 8) + 4,pbVar1);
          if (iVar3 == 0) {
            return 0x5001;
          }
          goto LAB_ram_4205fa80;
        }
        goto LAB_ram_4205fa36;
      }
      if (*pbVar1 == 0) {
        bVar7 = *pbVar2 & 0xfe;
      }
      else {
        bVar7 = *pbVar2 | 1;
      }
    }
    *pbVar2 = bVar7;
  }
  else if (uVar8 == 0x33) {
    iVar3 = *(int *)pbVar1;
    if (iVar3 == 0) {
      iVar3 = 0x78;
    }
    *(int *)pbVar2 = iVar3;
  }
  else if (uVar8 == 0x72) goto LAB_ram_4205fa4a;
LAB_ram_4205fa36:
  pbVar1 = pbVar2;
LAB_ram_4205fa4a:
  FUN_ram_4209787e(*(undefined4 *)(iVar10 + 0x24),(char)piVar9[1],pbVar1,piVar9[3]);
  return 0;
}

