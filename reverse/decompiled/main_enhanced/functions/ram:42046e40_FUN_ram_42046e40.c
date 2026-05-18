
undefined4
FUN_ram_42046e40(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6
                ,int param_7,int param_8,undefined1 *param_9)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  int iVar23;
  int iStack_8c;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 auStack_5c [40];
  
  if ((((param_1 != (undefined4 *)0x0) || (param_2 == 0)) && (0 < (int)param_4)) &&
     ((((int)param_4 <= (int)param_5 && ((int)param_5 < 0x29)) &&
      ((param_3 < 4 && (param_6 + 1 < 9)))))) {
    while ((iVar6 = FUN_ram_42046b66(param_4,param_3), param_1 != (undefined4 *)0x0 ||
           (param_2 == 0))) {
      uVar13 = 0;
      puVar9 = param_1;
      for (iVar12 = 0; param_2 != iVar12; iVar12 = iVar12 + 1) {
        uVar20 = puVar9[1];
        uVar18 = puVar9[3];
        if ((0x7fff < (uVar20 | uVar18)) ||
           (uVar7 = FUN_ram_42046770(*puVar9,param_4), 0x10 < uVar7)) goto LAB_ram_42046e70;
        if (1 << (uVar7 & 0x1f) <= (int)uVar20) goto LAB_ram_42046ece;
        uVar13 = uVar13 + uVar7 + 4 + uVar18;
        puVar9 = puVar9 + 4;
        if (0x7fff < (int)uVar13) goto LAB_ram_42046ece;
      }
      if (0x7fff < uVar13) break;
      if ((int)uVar13 <= iVar6 << 3) {
        uVar18 = 1;
        do {
          if ((param_7 != 0) &&
             (iVar6 = FUN_ram_42046b66(param_4,uVar18), (int)uVar13 <= iVar6 << 3)) {
            param_3 = uVar18;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != 4);
        iVar6 = param_4 * 4 + 0x11;
        (*(code *)&SUB_ram_40010488)(param_9,0,(iVar6 * iVar6 + 7 >> 3) + 1);
        uStack_64 = 0;
        for (iVar6 = 0; iVar6 != param_2; iVar6 = iVar6 + 1) {
          FUN_ram_420467f4(*param_1,4,param_9,&uStack_64);
          uVar21 = FUN_ram_42046770(*param_1,param_4);
          FUN_ram_420467f4(param_1[1],uVar21,param_9,&uStack_64);
          for (uVar18 = 0; (int)uVar18 < (int)param_1[3]; uVar18 = uVar18 + 1) {
            FUN_ram_420467f4((int)(uint)*(byte *)(param_1[2] + ((int)uVar18 >> 3)) >> (~uVar18 & 7)
                             & 1,1,param_9,&uStack_64);
          }
          param_1 = param_1 + 4;
        }
        if (uStack_64 == uVar13) {
          iVar6 = FUN_ram_42046b66(param_4,param_3);
          iVar6 = iVar6 * 8;
          if ((int)uVar13 <= iVar6) {
            iVar12 = iVar6 - uVar13;
            if (4 < iVar12) {
              iVar12 = 4;
            }
            FUN_ram_420467f4(0,iVar12,param_9,&uStack_64);
            uVar13 = 0xec;
            FUN_ram_420467f4(0,-((int)uStack_64 % 8) & 7,param_9,&uStack_64);
            if ((uStack_64 & 7) == 0) {
              while ((int)uStack_64 < iVar6) {
                FUN_ram_420467f4(uVar13,8,param_9,&uStack_64);
                uVar13 = uVar13 ^ 0xfd;
              }
              if ((param_3 < 4) && ((int)param_4 < 0x29)) {
                iVar19 = (int)(char)(&UNK_ram_3c0f7144)[param_4 + param_3 * 0x29];
                iVar15 = (int)(char)(&UNK_ram_3c0f71e8)[param_4 + param_3 * 0x29];
                iVar6 = FUN_ram_42046848(param_4);
                iVar12 = FUN_ram_42046b66(param_4,param_3);
                uVar13 = iVar15 - 1;
                iVar11 = iVar19 - (iVar6 >> 3) % iVar19;
                iVar6 = (iVar6 >> 3) / iVar19 - iVar15;
                if (uVar13 < 0x1e) {
                  (*(code *)&SUB_ram_40010488)(&local_60,0,iVar15);
                  uVar21 = 1;
                  *(undefined1 *)((int)&uStack_64 + iVar15 + 3) = 1;
                  iVar16 = 0;
                  do {
                    iVar3 = 0;
                    pbVar14 = (byte *)&local_60;
                    while( true ) {
                      iVar3 = iVar3 + 1;
                      bVar4 = FUN_ram_42046680(*pbVar14,uVar21);
                      *pbVar14 = bVar4;
                      if (iVar15 <= iVar3) break;
                      *pbVar14 = bVar4 ^ pbVar14[1];
                      pbVar14 = pbVar14 + 1;
                    }
                    uVar21 = FUN_ram_42046680(uVar21,2);
                    iVar16 = iVar16 + 1;
                  } while (iVar16 < iVar15);
                  pbVar14 = param_9 + iVar12;
                  puVar22 = param_9;
                  for (iVar16 = 0; iVar16 < iVar19; iVar16 = iVar16 + 1) {
                    iVar17 = (uint)(iVar11 <= iVar16) + iVar6;
                    (*(code *)&SUB_ram_40010488)(pbVar14,0,iVar15);
                    for (iVar3 = 0; iVar3 < iVar17; iVar3 = iVar3 + 1) {
                      bVar4 = puVar22[iVar3];
                      bVar2 = *pbVar14;
                      FUN_ram_4039c1f2(pbVar14,pbVar14 + 1,uVar13);
                      iVar23 = 0;
                      pbVar14[uVar13] = 0;
                      do {
                        bVar5 = FUN_ram_42046680(*(byte *)((int)&local_60 + iVar23),bVar4 ^ bVar2);
                        pbVar10 = pbVar14 + iVar23;
                        iVar23 = iVar23 + 1;
                        *pbVar10 = bVar5 ^ *pbVar10;
                      } while (iVar23 < iVar15);
                    }
                    iVar3 = iVar16;
                    for (iVar23 = 0; iVar23 < iVar17; iVar23 = iVar23 + 1) {
                      if (iVar6 == iVar23) {
                        iVar3 = iVar3 - iVar11;
                      }
                      *(undefined1 *)(param_8 + iVar3) = puVar22[iVar23];
                      iVar3 = iVar3 + iVar19;
                    }
                    iVar3 = 0;
                    pbVar10 = (byte *)(param_8 + iVar12 + iVar16);
                    do {
                      pbVar8 = pbVar14 + iVar3;
                      iVar3 = iVar3 + 1;
                      *pbVar10 = *pbVar8;
                      pbVar10 = pbVar10 + iVar19;
                    } while (iVar3 < iVar15);
                    puVar22 = puVar22 + iVar17;
                  }
                  uVar13 = 0;
                  FUN_ram_42046a22(param_4,param_9);
                  iVar6 = FUN_ram_42046848(param_4);
                  uVar18 = (iVar6 >> 3) << 3;
                  iVar12 = FUN_ram_42046bd8(param_9);
                  iVar12 = iVar12 + -1;
                  iVar6 = iVar12;
                  do {
                    if (iVar6 == 6) {
                      iVar6 = 5;
                    }
                    iVar11 = iVar12;
                    do {
                      iVar15 = iVar12 - iVar11;
                      if ((iVar6 + 1U >> 1 & 1) != 1) {
                        iVar15 = iVar11;
                      }
                      iVar19 = 0;
                      do {
                        iVar16 = FUN_ram_420468b8(param_9);
                        if ((iVar16 == 0) && ((int)uVar13 < (int)uVar18)) {
                          FUN_ram_420468fe(param_9,iVar6 - iVar19,iVar15,
                                           (int)(uint)*(byte *)(((int)uVar13 >> 3) + param_8) >>
                                           (~uVar13 & 7) & 1);
                          uVar13 = uVar13 + 1;
                        }
                        bVar1 = iVar19 != 1;
                        iVar19 = 1;
                      } while (bVar1);
                      iVar11 = iVar11 + -1;
                    } while (iVar11 != -1);
                    iVar6 = iVar6 + -2;
                  } while (0 < iVar6);
                  if (uVar18 == uVar13) {
                    iVar12 = FUN_ram_42046bd8(param_9);
                    iVar6 = 7;
                    do {
                      FUN_ram_420468fe(param_9,6,iVar6,0);
                      iVar11 = iVar6 + 2;
                      FUN_ram_420468fe(param_9,iVar6,6,0);
                      iVar6 = iVar11;
                    } while (iVar11 < iVar12 + -7);
                    uVar13 = 0xfffffffc;
                    do {
                      iVar6 = ((int)uVar13 >> 0x1f ^ uVar13) - ((int)uVar13 >> 0x1f);
                      uVar18 = 0xfffffffc;
                      do {
                        iVar11 = ((int)uVar18 >> 0x1f ^ uVar18) - ((int)uVar18 >> 0x1f);
                        if (iVar11 < iVar6) {
                          iVar11 = iVar6;
                        }
                        if ((iVar11 - 2U & 0xfffffffd) == 0) {
                          FUN_ram_42046bba(param_9,uVar18 + 3,uVar13 + 3);
                          FUN_ram_42046bba(param_9,uVar18 + iVar12 + -4,uVar13 + 3);
                          FUN_ram_42046bba(param_9,uVar18 + 3,uVar13 + iVar12 + -4);
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 != 5);
                      uVar13 = uVar13 + 1;
                    } while (uVar13 != 5);
                    iVar6 = FUN_ram_420466b0(param_4,&local_60);
                    for (iVar11 = 0; iVar6 != iVar11; iVar11 = iVar11 + 1) {
                      iVar15 = 0;
                      do {
                        if (iVar11 == 0) {
                          if (iVar15 == 0) {
                            iVar15 = 1;
                          }
                          if (iVar6 + -1 != iVar15) goto LAB_ram_42047556;
                        }
                        else {
                          while ((iVar11 == iVar6 + -1 && (iVar15 == 0))) {
                            iVar15 = 1;
                          }
LAB_ram_42047556:
                          iVar19 = -1;
                          do {
                            iVar16 = -1;
                            do {
                              FUN_ram_420468fe(param_9,(uint)*(byte *)((int)&local_60 + iVar11) +
                                                       iVar16,
                                               (uint)*(byte *)((int)&local_60 + iVar15) + iVar19,
                                               iVar16 == 0 && iVar19 == 0);
                              iVar16 = iVar16 + 1;
                            } while (iVar16 != 2);
                            iVar19 = iVar19 + 1;
                          } while (iVar19 != 2);
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar6 != iVar15);
                    }
                    if (6 < (int)param_4) {
                      iVar6 = 0xc;
                      uVar13 = param_4;
                      do {
                        iVar6 = iVar6 + -1;
                        uVar13 = ((int)uVar13 >> 0xb) * 0x1f25 ^ uVar13 << 1;
                      } while (iVar6 != 0);
                      uVar13 = param_4 << 0xc | uVar13;
                      if ((int)uVar13 >> 0x12 != 0) break;
                      iVar6 = 0;
                      do {
                        iVar11 = iVar12 + -0xb;
                        do {
                          FUN_ram_420468fe(param_9,iVar11,iVar6);
                          iVar15 = iVar11 + 1;
                          FUN_ram_420468fe(param_9,iVar6,iVar11,uVar13 & 1);
                          uVar13 = (int)uVar13 >> 1;
                          iVar11 = iVar15;
                        } while (iVar12 + -8 != iVar15);
                        iVar6 = iVar6 + 1;
                      } while (iVar6 != 6);
                    }
                    FUN_ram_42046a22(param_4,param_8);
                    if (param_6 == 0xffffffff) {
                      uVar13 = 0;
                      iStack_8c = 0x7fffffff;
                      do {
                        FUN_ram_42046c06(param_8,param_9,uVar13);
                        FUN_ram_42046d12(param_3,uVar13,param_9);
                        iVar12 = 0;
                        iVar11 = FUN_ram_42046bd8(param_9);
                        iVar6 = 0;
                        do {
                          (*(code *)&SUB_ram_40010488)(&local_60,0,0x1c);
                          iVar19 = 0;
                          iVar3 = 0;
                          iVar16 = 0;
                          iVar15 = iVar11;
                          do {
                            iVar17 = iVar16;
                            iVar16 = FUN_ram_420468b8(param_9,iVar17,iVar6);
                            if (iVar16 == iVar3) {
                              iVar19 = iVar19 + 1;
                              if (iVar19 == 5) {
                                iVar12 = iVar12 + 3;
                              }
                              else {
                                iVar12 = iVar12 + (uint)(5 < iVar19);
                              }
                            }
                            else {
                              FUN_ram_4039c1f2(auStack_5c,&local_60,0x18);
                              local_60 = iVar19 + iVar15;
                              if (iVar3 == 0) {
                                iVar15 = FUN_ram_420469b4(&local_60,iVar11);
                                iVar12 = iVar12 + iVar15 * 0x28;
                              }
                              iVar3 = FUN_ram_420468b8(param_9,iVar17,iVar6);
                              iVar15 = 0;
                              iVar19 = 1;
                            }
                            iVar16 = iVar17 + 1;
                          } while (iVar11 != iVar16);
                          iVar23 = iVar15 + iVar19;
                          if (iVar3 != 0) {
                            FUN_ram_4039c1f2(auStack_5c,&local_60,0x18);
                            iVar23 = 0;
                            local_60 = iVar15 + iVar19;
                          }
                          FUN_ram_4039c1f2(auStack_5c,&local_60,0x18);
                          local_60 = iVar16 + iVar23;
                          iVar15 = FUN_ram_420469b4(&local_60,iVar16);
                          iVar12 = iVar12 + iVar15 * 0x28;
                          bVar1 = iVar17 != iVar6;
                          iVar6 = iVar6 + 1;
                        } while (bVar1);
                        iVar6 = 0;
                        do {
                          (*(code *)&SUB_ram_40010488)(&local_60,0,0x1c);
                          iVar15 = 0;
                          iVar3 = 0;
                          iVar19 = 0;
                          iVar11 = iVar16;
                          do {
                            iVar23 = FUN_ram_420468b8(param_9,iVar6,iVar19);
                            if (iVar23 == iVar3) {
                              iVar15 = iVar15 + 1;
                              if (iVar15 == 5) {
                                iVar12 = iVar12 + 3;
                              }
                              else {
                                iVar12 = iVar12 + (uint)(5 < iVar15);
                              }
                            }
                            else {
                              FUN_ram_4039c1f2(auStack_5c,&local_60,0x18);
                              local_60 = iVar15 + iVar11;
                              if (iVar3 == 0) {
                                iVar11 = FUN_ram_420469b4(&local_60,iVar16);
                                iVar12 = iVar12 + iVar11 * 0x28;
                              }
                              iVar3 = FUN_ram_420468b8(param_9,iVar6,iVar19);
                              iVar11 = 0;
                              iVar15 = 1;
                            }
                            bVar1 = iVar17 != iVar19;
                            iVar19 = iVar19 + 1;
                          } while (bVar1);
                          iVar19 = iVar15 + iVar11;
                          if (iVar3 != 0) {
                            FUN_ram_4039c1f2(auStack_5c,&local_60,0x18);
                            iVar19 = 0;
                            local_60 = iVar15 + iVar11;
                          }
                          FUN_ram_4039c1f2(auStack_5c,&local_60,0x18);
                          local_60 = iVar16 + iVar19;
                          iVar11 = FUN_ram_420469b4(&local_60,iVar16);
                          iVar12 = iVar12 + iVar11 * 0x28;
                          bVar1 = iVar17 != iVar6;
                          iVar6 = iVar6 + 1;
                        } while (bVar1);
                        iVar6 = 0;
                        do {
                          iVar11 = 0;
                          do {
                            iVar15 = FUN_ram_420468b8(param_9,iVar11,iVar6);
                            iVar3 = iVar11 + 1;
                            iVar19 = FUN_ram_420468b8(param_9,iVar3,iVar6);
                            if (((iVar15 == iVar19) &&
                                (iVar11 = FUN_ram_420468b8(param_9,iVar11,iVar6 + 1),
                                iVar15 == iVar11)) &&
                               (iVar11 = FUN_ram_420468b8(param_9,iVar3,iVar6 + 1), iVar15 == iVar11
                               )) {
                              iVar12 = iVar12 + 3;
                            }
                            iVar11 = iVar3;
                          } while (iVar3 < iVar17);
                          iVar6 = iVar6 + 1;
                        } while (iVar6 < iVar17);
                        iVar11 = 0;
                        iVar6 = 0;
                        do {
                          iVar15 = 0;
                          do {
                            iVar19 = FUN_ram_420468b8(param_9,iVar15,iVar6);
                            iVar11 = iVar11 + iVar19;
                            bVar1 = iVar17 != iVar15;
                            iVar15 = iVar15 + 1;
                          } while (bVar1);
                          bVar1 = iVar17 != iVar6;
                          iVar6 = iVar6 + 1;
                        } while (bVar1);
                        iVar16 = iVar16 * iVar16;
                        uVar20 = iVar11 * 0x14 + iVar16 * -10;
                        uVar18 = (int)uVar20 >> 0x1f;
                        iVar12 = ((int)(((uVar18 ^ uVar20) - uVar18) + iVar16 + -1) / iVar16 + -1) *
                                 10 + iVar12;
                        if (iVar12 < iStack_8c) {
                          param_6 = uVar13;
                          iStack_8c = iVar12;
                        }
                        FUN_ram_42046c06(param_8,param_9,uVar13);
                        uVar13 = uVar13 + 1;
                      } while (uVar13 != 8);
                      if (7 < param_6) break;
                    }
                    FUN_ram_42046c06(param_8,param_9,param_6);
                    FUN_ram_42046d12(param_3,param_6,param_9);
                    return 1;
                  }
                }
              }
            }
          }
        }
        break;
      }
LAB_ram_42046ece:
      if (param_4 == param_5) {
        *param_9 = 0;
        return 0;
      }
      param_4 = param_4 + 1;
    }
  }
LAB_ram_42046e70:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

