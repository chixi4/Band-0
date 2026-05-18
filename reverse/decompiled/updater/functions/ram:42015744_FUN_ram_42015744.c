
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42015744(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                    int *param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined4 *puVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  puVar6 = (undefined4 *)FUN_ram_40396e84();
  iVar8 = _DAT_ram_3fcb668c;
  if (0x40 < param_1) {
    uVar10 = 0x16;
    goto LAB_ram_420157de;
  }
  iVar7 = FUN_ram_40390574(_DAT_ram_3fcb668c,0x1c,0x1000);
  if (iVar7 != 0) {
    iVar17 = gp + -0x600;
    iVar18 = gp + -0x600;
    puVar14 = (undefined4 *)0x0;
    pcVar16 = (code *)0x0;
    for (uVar3 = 0; param_1 != uVar3; uVar3 = uVar3 + 1) {
      FUN_ram_40390ff2(0x3fcb6688);
      iVar5 = (int)*(char *)(iVar18 + 1);
      uVar15 = (uint)*(byte *)(iVar18 + 2);
      pbVar12 = (byte *)(uVar3 * 3 + gp + -0x600);
      bVar1 = *pbVar12;
      iVar19 = FUN_ram_420147ac(uVar3,param_4);
      if (iVar19 != 0) {
        *pbVar12 = bVar1 | 4;
      }
      FUN_ram_4039100a(0x3fcb6688);
      if (-1 < iVar5) {
        if ((bVar1 & 1) == 0) {
          puVar4 = (undefined1 *)(iVar5 * 0x1c + iVar7);
          iVar5 = FUN_ram_420147ac(uVar3,param_2);
          iVar9 = (int)uVar15 >> 5;
          iVar19 = (int)uVar3 >> 5;
          if (iVar5 != 0) {
            *puVar4 = 1;
            if (uVar15 < 0x40) {
              *(uint *)(puVar4 + iVar9 * 4 + 4) =
                   *(uint *)(puVar4 + iVar9 * 4 + 4) | 1 << (uVar15 & 0x1f);
            }
            param_2[iVar19] = param_2[iVar19] & ~(1 << (uVar3 & 0x1f));
          }
          iVar5 = FUN_ram_420147ac(uVar3,param_3);
          if (iVar5 != 0) {
            *puVar4 = 1;
            if (uVar15 < 0x40) {
              *(uint *)(puVar4 + iVar9 * 4 + 0xc) =
                   *(uint *)(puVar4 + iVar9 * 4 + 0xc) | 1 << (uVar15 & 0x1f);
            }
            param_3[iVar19] = param_3[iVar19] & ~(1 << (uVar3 & 0x1f));
          }
          iVar5 = FUN_ram_420147ac(uVar3,param_4);
          if (iVar5 != 0) {
            *puVar4 = 1;
            if (uVar15 < 0x40) {
              *(uint *)(puVar4 + iVar9 * 4 + 0x14) =
                   1 << (uVar15 & 0x1f) | *(uint *)(puVar4 + iVar9 * 4 + 0x14);
            }
            param_4[iVar19] = param_4[iVar19] & ~(1 << (uVar3 & 0x1f));
          }
        }
        else if ((pcVar16 == (code *)0x0) &&
                (((iVar19 = FUN_ram_420147ac(uVar3,param_2), iVar19 != 0 ||
                  (iVar19 = FUN_ram_420147ac(uVar3,param_3), iVar19 != 0)) ||
                 (iVar19 = FUN_ram_420147ac(uVar3,param_4), iVar19 != 0)))) {
          iVar5 = *(int *)(*(int *)(*(int *)(&DAT_ram_3fcb2080 + iVar5 * 4) + 4) + 0x34);
          pcVar16 = *(code **)(iVar5 + 4);
          puVar14 = (undefined4 *)(**(code **)(iVar5 + 0x10))();
        }
      }
      iVar18 = iVar18 + 3;
    }
    bVar2 = false;
    if (pcVar16 == (code *)0x0) {
      puVar14 = (undefined4 *)FUN_ram_40395430(1,0,3);
      bVar2 = true;
      if (puVar14 != (undefined4 *)0x0) goto LAB_ram_42015970;
    }
    else {
LAB_ram_42015970:
      iVar18 = FUN_ram_40390574(iVar8,4,0x1000);
      if (iVar18 != 0) {
        iVar5 = 0;
        iVar19 = iVar7 + 4;
        while( true ) {
          if (iVar8 == iVar5) {
            if (pcVar16 == (code *)0x0) {
              if (param_2 != (undefined4 *)0x0) {
                param_2[1] = 0;
                *param_2 = 0;
              }
              if (param_3 != (undefined4 *)0x0) {
                param_3[1] = 0;
                *param_3 = 0;
              }
              if (param_4 != (undefined4 *)0x0) {
                param_4[1] = 0;
                *param_4 = 0;
              }
              iVar8 = -1;
              if (param_5 != (int *)0x0) {
                iVar8 = (*param_5 * 1000 + param_5[2] / 1000 + 9U) / 10 + 1;
              }
              FUN_ram_403958fa(puVar14,iVar8);
              iVar8 = 0;
            }
            else {
              iVar8 = (*pcVar16)(param_1,param_2,param_3,param_4,param_5);
            }
            FUN_ram_42014f76(iVar5,iVar7,iVar18);
            if (-1 < iVar8) {
              iVar5 = FUN_ram_420147d6(iVar7,iVar5,param_2,param_3,param_4);
              iVar8 = iVar8 + iVar5;
            }
            if (puVar14 != (undefined4 *)0x0) {
              if (bVar2) {
                FUN_ram_40395af2(puVar14);
              }
              else if (pcVar16 != (code *)0x0) {
                FUN_ram_403958fa(*puVar14,0);
              }
            }
            FUN_ram_40390ff2(0x3fcb6688);
            for (uVar3 = 0; param_1 != uVar3; uVar3 = uVar3 + 1) {
              pbVar12 = (byte *)(uVar3 * 3 + gp + -0x600);
              if ((*pbVar12 >> 1 & 1) != 0) {
                *pbVar12 = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                *(undefined1 *)(iVar17 + 1) = 0xff;
                *(undefined1 *)(iVar17 + 2) = 0xff;
              }
              iVar17 = iVar17 + 3;
            }
            FUN_ram_4039100a(0x3fcb6688);
            thunk_FUN_ram_40390608(iVar7);
            thunk_FUN_ram_40390608(iVar18);
            return iVar8;
          }
          iVar9 = FUN_ram_42014f30(iVar5);
          if (((iVar9 != 0) &&
              (puVar11 = *(undefined4 **)(*(int *)(iVar9 + 4) + 0x34), puVar11 != (undefined4 *)0x0)
              ) && ((pcVar13 = (code *)*puVar11, pcVar13 != (code *)0x0 &&
                    ((*(char *)(iVar19 + -4) != '\0' &&
                     (iVar9 = (*pcVar13)(param_1,iVar19,iVar19 + 8,iVar19 + 0x10,bVar2,puVar14,
                                         iVar5 * 4 + iVar18), iVar9 != 0)))))) break;
          iVar5 = iVar5 + 1;
          iVar19 = iVar19 + 0x1c;
        }
        if (iVar9 != 0x106) {
          FUN_ram_42014f76(iVar5,iVar7,iVar18);
        }
        FUN_ram_420147d6(iVar7,iVar8,param_2,param_3,param_4);
        if ((bVar2) && (puVar14 != (undefined4 *)0x0)) {
          FUN_ram_40395af2(puVar14);
        }
        thunk_FUN_ram_40390608(iVar7);
        thunk_FUN_ram_40390608(iVar18);
        uVar10 = 4;
        goto LAB_ram_420157de;
      }
    }
    thunk_FUN_ram_40390608(iVar7);
  }
  uVar10 = 0xc;
LAB_ram_420157de:
  *puVar6 = uVar10;
  return -1;
}

