
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42031c34(char *param_1,code *param_2,undefined4 param_3)

{
  ushort uVar1;
  int *piVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  int iStack_98;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined1 auStack_80 [2];
  undefined2 uStack_7e;
  undefined1 auStack_7c [4];
  undefined2 uStack_78;
  char *pcStack_74;
  undefined1 auStack_68 [4];
  undefined2 uStack_64;
  undefined2 uStack_62;
  int *piStack_60;
  char *pcStack_5c;
  ushort auStack_54 [2];
  undefined2 uStack_50;
  int *piStack_4c;
  int *piStack_48;
  char *pcStack_44;
  
  iVar11 = _DAT_ram_3fcb6bb8;
  iVar12 = _DAT_ram_3fcb6b88;
  uVar1 = *(ushort *)(_DAT_ram_3fcb6bb8 + 8);
  iVar10 = 0;
  while (iVar7 = (uint)uVar1 + iVar10, *param_1 != '\0') {
    if ((int)(uint)*(ushort *)(iVar12 + 4) <= iVar7) {
      return 6;
    }
    iVar10 = iVar10 + 1;
    puVar9 = (undefined4 *)(iVar7 * 8 + *(int *)(iVar11 + 4));
    *puVar9 = param_1;
    puVar9[1] = 0xffff0000;
    param_1 = param_1 + 0x10;
  }
  *(short *)(iVar11 + 8) = (short)iVar7;
  iStack_98 = 0;
  do {
    if (iVar10 <= iStack_98) {
      return 0;
    }
    iVar12 = 0;
    for (iVar11 = 0; iVar11 < (int)(uint)*(ushort *)(_DAT_ram_3fcb6bb8 + 8); iVar11 = iVar11 + 1) {
      iVar7 = *(int *)(_DAT_ram_3fcb6bb8 + 4);
      puVar9 = (undefined4 *)(iVar11 * 8 + iVar7);
      if (*(short *)(puVar9 + 1) == 0) {
        pcVar3 = (char *)*puVar9;
        piVar2 = *(int **)(pcVar3 + 8);
        if (piVar2 == (int *)0x0) {
LAB_ram_42031cc0:
          if (1 < (byte)(*pcVar3 - 1U)) {
            return 3;
          }
          if (*(int *)(pcVar3 + 4) == 0) {
            return 3;
          }
          if (*pcVar3 == '\x02') {
            uVar5 = 0x3fcb69f8;
          }
          else {
            uVar5 = 0x3fcb69fc;
          }
          iVar7 = FUN_ram_420298b6(uVar5,1,0,&uStack_86,0x42021660,pcVar3);
          if (iVar7 == 0) {
            if (param_2 != (code *)0x0) {
              auStack_7c[0] = 1;
              uStack_78 = uStack_86;
              pcStack_74 = pcVar3;
              (*param_2)(auStack_7c,param_3);
            }
            iVar13 = 0;
            if (*(int *)(pcVar3 + 8) == 0) {
LAB_ram_42031d2a:
              piVar2 = *(int **)(pcVar3 + 0xc);
              if (piVar2 != (int *)0x0) {
                for (; *piVar2 != 0; piVar2 = piVar2 + 8) {
                  if (piVar2[1] == 0) {
                    return 3;
                  }
                  iVar7 = FUN_ram_42031ac2(piVar2[4]);
                  if (iVar7 != 0) {
                    if ((int)(uint)*(ushort *)(_DAT_ram_3fcb6b88 + 6) <
                        *(int *)(_DAT_ram_3fcb6bb8 + 0x30)) {
                      return 6;
                    }
                    *(int *)(_DAT_ram_3fcb6bb8 + 0x30) = *(int *)(_DAT_ram_3fcb6bb8 + 0x30) + 1;
                  }
                  iVar7 = FUN_ram_420298b6(0x3fcb69f0,1,0,&uStack_84,0x42021a0c,piVar2);
                  if (iVar7 != 0) goto LAB_ram_42031da2;
                  uVar8 = piVar2[4];
                  uVar6 = uVar8 >> 1 & 1;
                  if ((uVar8 & 0xc) != 0) {
                    uVar6 = uVar6 | 2;
                  }
                  if ((uVar8 & 0x200) != 0) {
                    uVar6 = uVar6 | 4;
                  }
                  if ((uVar8 & 0x400) != 0) {
                    uVar6 = uVar6 | 8;
                  }
                  if ((int)(uVar8 << 0x14) < 0) {
                    uVar6 = uVar6 | 0x10;
                  }
                  if ((int)(uVar8 << 0x13) < 0) {
                    uVar6 = uVar6 | 0x20;
                  }
                  if ((int)(uVar8 << 0x12) < 0) {
                    uVar6 = uVar6 | 0x40;
                  }
                  if ((int)(uVar8 << 0x11) < 0) {
                    uVar6 = uVar6 | 0x80;
                  }
                  iVar7 = FUN_ram_420298b6(*piVar2,uVar6,(char)piVar2[5],&uStack_82,0x420217dc,
                                           piVar2);
                  if (iVar7 != 0) goto LAB_ram_42031da2;
                  if ((undefined2 *)piVar2[6] != (undefined2 *)0x0) {
                    *(undefined2 *)piVar2[6] = uStack_82;
                  }
                  if (param_2 != (code *)0x0) {
                    auStack_68[0] = 2;
                    uStack_64 = uStack_84;
                    uStack_62 = uStack_82;
                    piStack_60 = piVar2;
                    pcStack_5c = pcVar3;
                    (*param_2)(auStack_68,param_3);
                  }
                  uVar6 = piVar2[4];
                  iVar7 = FUN_ram_42031ac2(uVar6);
                  if (iVar7 != 0) {
                    uVar8 = (uVar6 >> 10 & 0x20) + 3;
                    if ((int)(uVar6 << 0xf) < 0) {
                      uVar8 = uVar8 | 0x40;
                    }
                    if ((int)(uVar6 << 0xe) < 0) {
                      uVar8 = uVar8 | 0x80;
                    }
                    iVar7 = FUN_ram_420298b6(0x3fcb69ec,uVar8,0,auStack_80,0x42021ad4,0);
                    if (iVar7 != 0) goto LAB_ram_42031da2;
                  }
                  pcVar14 = (char *)piVar2[7];
                  iVar13 = 0;
                  if (pcVar14 != (char *)0x0) {
                    while (*pcVar14 != '\0') {
                      iVar7 = FUN_ram_420298b6(0x3fcb69e8,1,0,auStack_54,0x42021880,pcVar14);
                      pcVar14 = pcVar14 + 8;
                      if (iVar7 != 0) goto LAB_ram_42031da2;
                      iVar13 = iVar13 + 1;
                    }
                    if (1 < iVar13) {
                      auStack_54[0] = (ushort)(((auStack_54[0] + 1) - iVar13) * 0x10000 >> 0x10);
                      iVar7 = FUN_ram_42029960();
                      if (iVar7 == 0) {
                        return 5;
                      }
                      iVar7 = FUN_ram_420298b6(0x3fcb69e4,1,0,0,0x42021832,iVar7);
                      if (iVar7 != 0) goto LAB_ram_42031da2;
                    }
                  }
                  piVar15 = (int *)piVar2[3];
                  if (piVar15 != (int *)0x0) {
                    for (; *piVar15 != 0; piVar15 = piVar15 + 4) {
                      if (piVar15[2] == 0) {
                        return 3;
                      }
                      iVar7 = FUN_ram_420298b6(*piVar15,(char)piVar15[1],
                                               *(undefined1 *)((int)piVar15 + 5),&uStack_7e,
                                               0x42021806,piVar15);
                      if (iVar7 != 0) goto LAB_ram_42031da2;
                      if (param_2 != (code *)0x0) {
                        auStack_54[0] = CONCAT11(auStack_54[0]._1_1_,3);
                        uStack_50 = uStack_7e;
                        piStack_4c = piVar15;
                        piStack_48 = piVar2;
                        pcStack_44 = pcVar3;
                        (*param_2)(auStack_54,param_3);
                      }
                    }
                  }
                }
              }
              iVar12 = iVar12 + 1;
              *(undefined2 *)(puVar9 + 1) = uStack_86;
              uVar4 = FUN_ram_42029952();
              *(undefined2 *)((int)puVar9 + 6) = uVar4;
              goto LAB_ram_42031d5c;
            }
            do {
              if (*(int *)(*(int *)(pcVar3 + 8) + iVar13) == 0) goto LAB_ram_42031d2a;
              iVar7 = FUN_ram_420315d6();
              iVar7 = FUN_ram_420298b6(0x3fcb69f4,1,0,auStack_54,0x4202169a,
                                       *(int *)(_DAT_ram_3fcb6bb8 + 4) + iVar7 * 8);
              iVar13 = iVar13 + 4;
            } while (iVar7 == 0);
          }
LAB_ram_42031da2:
          if (iVar7 != 1) {
            return iVar7;
          }
        }
        else {
          do {
            if (*piVar2 == 0) goto LAB_ram_42031cc0;
            iVar13 = FUN_ram_420315d6();
          } while ((iVar13 != -1) && (piVar2 = piVar2 + 1, *(short *)(iVar13 * 8 + iVar7 + 4) != 0))
          ;
        }
      }
LAB_ram_42031d5c:
    }
    if (iVar12 == 0) {
      return 3;
    }
    iStack_98 = iStack_98 + iVar12;
  } while( true );
}

