
int FUN_ram_42071084(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  short *psVar16;
  uint uVar17;
  undefined1 *puVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puStack_3c;
  int iStack_38;
  uint uStack_34;
  
  iVar4 = param_1[0xd];
  if (iVar4 == 0) {
    return -0x6c00;
  }
  pcVar8 = (char *)param_1[0xe];
  iVar11 = *param_1;
  if (*pcVar8 == '\0') {
    iVar9 = *(int *)(iVar11 + 4);
  }
  else {
    iVar9 = *(int *)(iVar4 + 4);
    param_1[2] = iVar9;
  }
  *(int *)(pcVar8 + 4) = iVar9;
  iVar11 = (**(code **)(iVar11 + 0x1c))
                     (*(undefined4 *)(iVar11 + 0x20),pcVar8 + 0x1b0,0x20,param_4,
                      *(code **)(iVar11 + 0x1c));
  if (iVar11 != 0) {
    return iVar11;
  }
  if (param_1[2] == 0x303) {
    if (*(int *)(iVar4 + 0xc) - 0x10U < 0x11) {
      if (*(char *)param_1[0xe] != '\0') goto LAB_ram_420710e6;
    }
    else if (*(int *)(iVar4 + 0xc) == 0) goto LAB_ram_420710e6;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
LAB_ram_420710e6:
  iVar11 = FUN_ram_4206ddda(param_1,1,&puStack_3c,&iStack_38);
  iVar4 = iStack_38;
  puVar3 = puStack_3c;
  if (iVar11 != 0) {
    return iVar11;
  }
  iVar11 = param_1[0xe];
  puVar14 = puStack_3c + iStack_38;
  bVar2 = false;
  if (*(uint *)(iVar11 + 4) < 0x304) {
    bVar2 = 0x302 < (uint)param_1[2];
  }
  if ((puStack_3c <= puVar14) && (1 < iStack_38)) {
    FUN_ram_4206e7f6(puStack_3c,*(undefined1 *)(*param_1 + 9),0x303);
    if ((puVar3 + 2 <= puVar14) &&
       (((0x1f < iVar4 - 2U &&
         (FUN_ram_40399daa(puVar3 + 2,iVar11 + 0x1b0,0x20), puVar3 + 0x22 <= puVar14)) &&
        (*(int *)(param_1[0xd] + 0xc) + 1U <= iVar4 - 0x22U)))) {
      puVar3[0x22] = (char)*(int *)(param_1[0xd] + 0xc);
      FUN_ram_40399daa(puVar3 + 0x23,param_1[0xd] + 0x10,*(undefined4 *)(param_1[0xd] + 0xc));
      uStack_34 = 0;
      puVar5 = puVar3 + 0x23 + *(int *)(param_1[0xd] + 0xc);
      if ((puVar5 <= puVar14) && (1 < (int)puVar14 - (int)puVar5)) {
        puVar13 = puVar5 + 2;
        uVar15 = 0;
        for (piVar19 = *(int **)(*param_1 + 0x10); iVar4 = *piVar19, iVar4 != 0;
            piVar19 = piVar19 + 1) {
          uVar7 = FUN_ram_4206d416(iVar4);
          iVar11 = FUN_ram_4206fd28(param_1,uVar7,*(undefined4 *)(param_1[0xe] + 4),param_1[2]);
          if (iVar11 == 0) {
            uVar17 = FUN_ram_4206d4a2(uVar7);
            if (puVar14 < puVar13) {
              return -0x6a00;
            }
            if ((int)puVar14 - (int)puVar13 < 2) {
              return -0x6a00;
            }
            *puVar13 = (char)((uint)iVar4 >> 8);
            puVar13[1] = (char)iVar4;
            uVar15 = uVar15 | uVar17;
            puVar13 = puVar13 + 2;
          }
        }
        if ((puVar13 <= puVar14) && (1 < (int)puVar14 - (int)puVar13)) {
          puVar13[1] = 0xff;
          *puVar13 = 0;
          *puVar5 = (char)((uint)((int)puVar13 - (int)puVar5) >> 8);
          puVar10 = puVar13 + 2;
          puVar5[1] = (char)((uint)(((int)puVar13 - (int)puVar5) * 0x100) >> 8);
          uStack_34 = (int)puVar10 - (int)puVar5;
          if ((puVar10 <= puVar14) && (1 < (int)puVar14 - (int)puVar10)) {
            puVar13[2] = 1;
            puVar5 = puVar13 + 4;
            puVar13[3] = 0;
            if ((puVar5 <= puVar14) && (1 < (int)puVar14 - (int)puVar5)) {
              iVar4 = FUN_ram_4206ef1c(param_1);
              uStack_34 = 0;
              puVar10 = puVar13 + 6;
              if (iVar4 == 0) {
                uVar17 = 0;
              }
              else {
                if (puVar14 < puVar10) {
                  return -0x6a00;
                }
                uVar6 = (*(code *)&SUB_ram_400104a8)();
                uVar17 = uVar6 + 9;
                if ((uint)((int)puVar14 - (int)puVar10) < uVar17) {
                  return -0x6a00;
                }
                uVar12 = uVar6 & 0xffff;
                puVar13[8] = (char)(uVar12 + 5 >> 8);
                puVar13[9] = (char)((uVar12 + 5) * 0x100 >> 8);
                puVar13[10] = (char)(uVar12 + 3 >> 8);
                puVar13[0xb] = (char)((uVar12 + 3) * 0x100 >> 8);
                puVar13[0xd] = (char)(uVar12 >> 8);
                puVar13[6] = 0;
                puVar13[7] = 0;
                puVar13[0xc] = 0;
                puVar13[0xe] = (char)uVar12;
                FUN_ram_40399daa(puVar13 + 0xf,iVar4,uVar6);
              }
              puVar10 = puVar10 + uVar17;
              piVar19 = *(int **)(*param_1 + 0x58);
              puVar21 = puVar10;
              if (piVar19 != (int *)0x0) {
                if (puVar14 < puVar10) {
                  return -0x6a00;
                }
                if ((int)puVar14 - (int)puVar10 < 6) {
                  return -0x6a00;
                }
                *puVar10 = 0;
                puVar10[1] = 0x10;
                puVar21 = puVar10 + 6;
                for (; *piVar19 != 0; piVar19 = piVar19 + 1) {
                  if (puVar14 < puVar21) {
                    return -0x6a00;
                  }
                  iVar4 = (*(code *)&SUB_ram_400104a8)();
                  if ((uint)((int)puVar14 - (int)puVar21) < iVar4 + 1U) {
                    return -0x6a00;
                  }
                  *puVar21 = (char)iVar4;
                  iVar11 = FUN_ram_40399daa(puVar21 + 1,*piVar19,iVar4);
                  puVar21 = (undefined1 *)(iVar11 + iVar4);
                }
                uStack_34 = (int)puVar21 - (int)puVar10;
                iVar4 = (uStack_34 & 0xffff) - 6;
                puVar10[4] = (char)((uint)iVar4 >> 8);
                iVar11 = (uStack_34 & 0xffff) - 4;
                puVar10[5] = (char)((uint)(iVar4 * 0x100) >> 8);
                puVar10[2] = (char)((uint)iVar11 >> 8);
                puVar10[3] = (char)((uint)(iVar11 * 0x100) >> 8);
              }
              if (bVar2) {
                puVar10 = puVar21;
                if (uVar15 != 0) {
                  uStack_34 = 0;
                  psVar16 = *(short **)(*param_1 + 0x54);
                  if (puVar14 < puVar21) {
                    return -0x6a00;
                  }
                  if ((int)puVar14 - (int)puVar21 < 6) {
                    return -0x6a00;
                  }
                  puVar20 = puVar21 + 6;
                  puVar10 = puVar20;
                  if (psVar16 == (short *)0x0) {
                    return -0x5e80;
                  }
                  for (; *psVar16 != 0; psVar16 = psVar16 + 1) {
                    puVar18 = puVar10;
                    if (((ushort)(*psVar16 - 0x12U) < 0xd) &&
                       (iVar4 = FUN_ram_4206f566(), iVar4 != 0)) {
                      if (puVar14 < puVar10) {
                        return -0x6a00;
                      }
                      if ((int)puVar14 - (int)puVar10 < 2) {
                        return -0x6a00;
                      }
                      sVar1 = *psVar16;
                      puVar18 = puVar10 + 2;
                      *puVar10 = (char)((ushort)sVar1 >> 8);
                      puVar10[1] = (char)sVar1;
                    }
                    puVar10 = puVar18;
                  }
                  if (puVar10 == puVar20) {
                    return -0x6c00;
                  }
                  uVar17 = (int)puVar10 - (int)puVar20 & 0xffff;
                  puVar21[1] = 10;
                  puVar21[2] = (char)(uVar17 + 2 >> 8);
                  puVar21[3] = (char)((uVar17 + 2) * 0x100 >> 8);
                  puVar21[4] = (char)(uVar17 >> 8);
                  *puVar21 = 0;
                  puVar21[5] = (char)uVar17;
                  uStack_34 = (int)puVar10 - (int)puVar21;
                }
                iVar4 = FUN_ram_4206fd42(param_1,puVar10,puVar14,&uStack_34);
                if (iVar4 != 0) {
                  return iVar4;
                }
                puVar10 = puVar10 + uStack_34;
                iVar4 = FUN_ram_420702bc(param_1,puVar10,puVar14,uVar15,&uStack_34);
                if (iVar4 != 0) {
                  return iVar4;
                }
                puVar21 = puVar10 + uStack_34;
              }
              puVar14 = puVar21 + (-2 - (int)puVar5);
              if (puVar14 != (undefined1 *)0x0) {
                puVar13[4] = (char)((uint)puVar14 >> 8);
                puVar13[5] = (char)((uint)((int)puVar14 * 0x100) >> 8);
                puVar5 = puVar21;
              }
              iVar11 = (int)puVar5 - (int)puVar3;
              iVar4 = FUN_ram_4206ed6e(param_1,1,iVar11);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = (**(code **)(param_1[0xe] + 0x10))(param_1,puStack_3c,iVar11);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = FUN_ram_4206e0b4(param_1,iStack_38,iVar11);
              if (iVar4 == 0) {
                param_1[1] = 2;
                return 0;
              }
              return iVar4;
            }
          }
        }
      }
    }
  }
  return -0x6a00;
}

