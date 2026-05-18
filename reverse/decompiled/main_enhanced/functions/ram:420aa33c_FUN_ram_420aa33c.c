
int FUN_ram_420aa33c(undefined4 *param_1,byte *param_2,int param_3,int param_4,code *param_5,
                    undefined4 param_6)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iStack_88;
  byte *pbStack_84;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  byte *pbStack_44;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x2800;
  }
  if (param_2 == (byte *)0x0) {
    return -0x2800;
  }
  puVar14 = param_1;
  puVar13 = (undefined4 *)0x0;
  do {
    puVar3 = puVar14;
    if (puVar3[7] == 0) goto LAB_ram_420aa3a0;
    puVar14 = (undefined4 *)puVar3[0x65];
    puVar13 = puVar3;
  } while ((undefined4 *)puVar3[0x65] != (undefined4 *)0x0);
  iVar6 = FUN_ram_4206d7ce(1,0x198);
  puVar3[0x65] = iVar6;
  if (iVar6 == 0) {
    return -0x2880;
  }
  FUN_ram_420aa2aa();
  puVar3 = (undefined4 *)puVar3[0x65];
LAB_ram_420aa3a0:
  iStack_70 = 0;
  iStack_6c = 0;
  uStack_68 = 0;
  iStack_64 = 0;
  iStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    if (puVar13 != (undefined4 *)0x0) {
      puVar13[0x65] = 0;
    }
    iVar6 = -0x2800;
    goto LAB_ram_420aab96;
  }
  iStack_88 = param_3;
  pbStack_84 = param_2;
  iVar6 = FUN_ram_4206e970(&pbStack_84,param_2 + param_3,&iStack_88,0x30);
  if (iVar6 == 0) {
    pbVar11 = pbStack_84 + iStack_88;
    puVar3[2] = (int)pbVar11 - (int)param_2;
    if (param_4 == 0) {
      puVar3[3] = param_2;
      *puVar3 = 0;
    }
    else {
      pbStack_84 = (byte *)FUN_ram_4206d7ce(1);
      puVar3[3] = pbStack_84;
      if (pbStack_84 == (byte *)0x0) {
        iVar6 = -0x2880;
        pbStack_84 = (byte *)0x0;
        goto LAB_ram_420aa3e4;
      }
      FUN_ram_4039c11e(pbStack_84,param_2,puVar3[2]);
      *puVar3 = 1;
      pbVar11 = pbStack_84 + puVar3[2];
      pbStack_84 = pbStack_84 + (puVar3[2] - iStack_88);
    }
    puVar3[6] = pbStack_84;
    iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar11,&iStack_88,0x30);
    if (iVar6 == 0) {
      pbVar10 = pbStack_84 + iStack_88;
      puVar3[5] = (int)pbVar10 - puVar3[6];
      iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar10,&iStack_4c,0xa0);
      if (iVar6 == 0) {
        pbVar4 = pbStack_84 + iStack_4c;
        iVar6 = FUN_ram_4206ea58(&pbStack_84,pbVar4,puVar3 + 7);
        if (iVar6 != 0) {
          iVar7 = -0x2200;
          goto LAB_ram_420aa4ee;
        }
        if (pbVar4 != pbStack_84) {
          iVar6 = -0x2266;
          goto LAB_ram_420aa4f6;
        }
      }
      else if (iVar6 == -0x62) {
        puVar3[7] = 0;
      }
      else {
        iVar7 = -0x2180;
LAB_ram_420aa4ee:
        iVar6 = iVar6 + iVar7;
        if (iVar6 != 0) goto LAB_ram_420aa4f6;
      }
      iVar6 = FUN_ram_420aac14(&pbStack_84,pbVar10,puVar3 + 8);
      if (iVar6 == 0) {
        iVar6 = FUN_ram_420aac9a(&pbStack_84,pbVar10,puVar3 + 0xb,&iStack_70);
        if (iVar6 == 0) {
          if (2 < (uint)puVar3[7]) {
            FUN_ram_420aa2b8(puVar3);
            iVar6 = -0x2580;
            goto LAB_ram_420aa3e4;
          }
          puVar3[7] = puVar3[7] + 1;
          iVar6 = FUN_ram_420ab21c(puVar3 + 0xb,&iStack_70,puVar3 + 0x62,puVar3 + 99,puVar3 + 100);
          if (iVar6 != 0) goto LAB_ram_420aa4f6;
          puVar3[0x10] = pbStack_84;
          iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar10,&iStack_88,0x30);
          if (iVar6 != 0) goto LAB_ram_420aa448;
          iVar6 = FUN_ram_420aaec0(&pbStack_84,pbStack_84 + iStack_88,puVar3 + 0x14);
          if (iVar6 == 0) {
            puVar3[0xf] = (int)pbStack_84 - puVar3[0x10];
            iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar10,&iStack_4c,0x30);
            if (iVar6 == 0) {
              pbVar4 = pbStack_84 + iStack_4c;
              iVar6 = FUN_ram_420ab038(&pbStack_84,pbVar4,puVar3 + 0x24);
              if ((iVar6 == 0) &&
                 (iVar6 = FUN_ram_420ab038(&pbStack_84,pbVar4,puVar3 + 0x2a), iVar6 == 0)) {
                if (pbVar4 == pbStack_84) goto LAB_ram_420aa596;
                iVar6 = -0x2466;
              }
            }
            else {
              iVar6 = iVar6 + -0x2400;
              if (iVar6 == 0) {
LAB_ram_420aa596:
                puVar3[0x13] = pbStack_84;
                iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar10,&iStack_88,0x30);
                if (iVar6 != 0) goto LAB_ram_420aa448;
                if ((iStack_88 == 0) ||
                   (iVar6 = FUN_ram_420aaec0(&pbStack_84,pbStack_84 + iStack_88,puVar3 + 0x1c),
                   iVar6 == 0)) {
                  puVar3[0x32] = pbStack_84;
                  puVar3[0x12] = (int)pbStack_84 - puVar3[0x13];
                  iVar6 = FUN_ram_420a8f76(&pbStack_84,pbVar10,puVar3 + 0x33);
                  if (iVar6 == 0) {
                    puVar3[0x31] = (int)pbStack_84 - puVar3[0x32];
                    if (1 < puVar3[7] - 2) {
LAB_ram_420aa6b2:
                      if (pbVar10 == pbStack_84) goto LAB_ram_420aab14;
LAB_ram_420aa6b8:
                      FUN_ram_420aa2b8(puVar3);
                      iVar6 = -0x21e6;
                      goto LAB_ram_420aa3e4;
                    }
                    if (pbVar10 != pbStack_84) {
                      puVar3[0x35] = (uint)*pbStack_84;
                      iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar10,puVar3 + 0x36,0xa1);
                      if (iVar6 == 0) {
                        puVar3[0x37] = pbStack_84;
                        pbStack_84 = pbStack_84 + puVar3[0x36];
                      }
                      else if ((iVar6 != -0x62) && (iVar6 = iVar6 + -0x2180, iVar6 != 0))
                      goto LAB_ram_420aa4f6;
                      if (1 < puVar3[7] - 2) goto LAB_ram_420aa6b2;
                    }
                    if (pbVar10 != pbStack_84) {
                      puVar3[0x38] = (uint)*pbStack_84;
                      iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar10,puVar3 + 0x39,0xa2);
                      if (iVar6 == 0) {
                        puVar3[0x3a] = pbStack_84;
                        pbStack_84 = pbStack_84 + puVar3[0x39];
                      }
                      else if ((iVar6 != -0x62) && (iVar6 = iVar6 + -0x2180, iVar6 != 0))
                      goto LAB_ram_420aa4f6;
                    }
                    if (puVar3[7] != 3) goto LAB_ram_420aa6b2;
                    if (pbVar10 != pbStack_84) {
                      iVar6 = FUN_ram_420ab2c0(&pbStack_84,pbVar10,puVar3 + 0x3b);
                      if (iVar6 == 0) {
                        pbVar9 = (byte *)(puVar3[0x3c] + puVar3[0x3d]);
                        pbVar4 = pbStack_84;
LAB_ram_420aa632:
                        pbStack_84 = pbVar4;
                        if (pbVar9 <= pbStack_84) {
                          if (pbVar9 == pbStack_84) goto LAB_ram_420aa6b2;
LAB_ram_420aa964:
                          iVar6 = -0x2566;
                          goto LAB_ram_420aa4f6;
                        }
                        iStack_4c = 0;
                        iStack_48 = 0;
                        pbStack_44 = (byte *)0x0;
                        iStack_7c = 0;
                        uStack_78 = 0;
                        iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar9,&iStack_80);
                        if (iVar6 != 0) {
LAB_ram_420aa734:
                          iVar6 = iVar6 + -0x2500;
                          if (iVar6 != 0) goto LAB_ram_420aa4f6;
                          goto LAB_ram_420aa6b2;
                        }
                        pbVar12 = pbStack_84 + iStack_80;
                        iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar12,&iStack_48,6);
                        if (iVar6 != 0) goto LAB_ram_420aa734;
                        iStack_4c = 6;
                        pbStack_44 = pbStack_84;
                        pbStack_84 = pbStack_84 + iStack_48;
                        iVar6 = FUN_ram_4206ea1a(&pbStack_84,pbVar12,&iStack_7c);
                        if (((iVar6 != 0) && (iVar6 != -0x62)) ||
                           (iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar12,&iStack_80,4),
                           pbVar1 = pbStack_84, iVar6 != 0)) goto LAB_ram_420aa734;
                        pbVar5 = pbStack_84 + iStack_80;
                        if (pbVar12 != pbVar5) goto LAB_ram_420aa964;
                        iVar6 = FUN_ram_42073644(&iStack_4c,&uStack_78);
                        pbVar4 = pbVar5;
                        if (iVar6 != 0) {
                          if (param_5 != (code *)0x0) {
                            iVar6 = (*param_5)(param_6,puVar3,&iStack_4c,iStack_7c,pbStack_84,pbVar5
                                              );
                            iVar7 = iStack_7c;
                            if (iVar6 != 0) goto joined_r0x420aa7b6;
                            goto LAB_ram_420aa632;
                          }
                          pbVar4 = pbVar12;
                          if (iStack_7c != 0) goto code_r0x420aa7c4;
                          goto LAB_ram_420aa632;
                        }
                        if ((puVar3[0x56] & uStack_78) != 0) {
                          iVar6 = -0x2500;
                          goto LAB_ram_420aa4f6;
                        }
                        puVar3[0x56] = puVar3[0x56] | uStack_78;
                        if (uStack_78 == 0x20) {
                          iVar6 = FUN_ram_420ab70c(&pbStack_84,pbVar12,puVar3 + 0x3e);
                          pbVar5 = pbStack_84;
                          iVar7 = iVar6;
                        }
                        else {
                          if ((int)uStack_78 < 0x21) {
                            if (uStack_78 == 4) {
                              iVar6 = FUN_ram_420ab36c(&pbStack_84,pbVar12,puVar3 + 0x59);
                              pbVar5 = pbStack_84;
                              iVar7 = iVar6;
                              goto joined_r0x420aa7b6;
                            }
                            if (4 < (int)uStack_78) {
                              if (uStack_78 != 8) {
LAB_ram_420aa802:
                                if (iStack_7c != 0) {
                                  iVar6 = -0x2080;
                                  goto LAB_ram_420aa4f6;
                                }
                                goto LAB_ram_420aa632;
                              }
                              iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar5,&iStack_74,0x30);
                              if (iVar6 == 0) {
                                if (pbVar5 == pbStack_84 + iStack_74) {
                                  iVar6 = 0;
                                  puVar14 = puVar3 + 0x52;
                                  if (iStack_74 != 0) {
                                    do {
                                      if (pbVar5 <= pbStack_84) {
                                        puVar14[3] = 0;
                                        if (pbVar5 == pbStack_84) goto LAB_ram_420aa832;
                                        break;
                                      }
                                      iVar7 = FUN_ram_4206e970(&pbStack_84,pbVar5,&iStack_74,0x30);
                                      if (iVar7 != 0) {
LAB_ram_420aaa6a:
                                        iVar6 = iVar7 + -0x2500;
                                        goto LAB_ram_420aa832;
                                      }
                                      pbVar12 = pbStack_84 + iStack_74;
                                      iVar7 = FUN_ram_4206e970(&pbStack_84,pbVar12,&iStack_74,6);
                                      iVar2 = iStack_74;
                                      pbVar4 = pbStack_84;
                                      if (iVar7 != 0) goto LAB_ram_420aaa6a;
                                      if ((iStack_74 != 4) ||
                                         (iVar7 = FUN_ram_4039c0e0(&DAT_ram_3c0fb758,pbStack_84,4),
                                         iVar7 != 0)) {
                                        iVar6 = -0x2080;
                                      }
                                      puVar8 = puVar14;
                                      if (puVar14[2] != 0) {
                                        if (puVar14[3] != 0) {
                                          iVar6 = -0x2500;
                                          goto LAB_ram_420aa856;
                                        }
                                        puVar8 = (undefined4 *)FUN_ram_4206d7ce(1,0x10);
                                        puVar14[3] = puVar8;
                                        if (puVar8 == (undefined4 *)0x0) {
                                          iVar6 = -0x256a;
                                          goto LAB_ram_420aa856;
                                        }
                                      }
                                      *puVar8 = 6;
                                      puVar8[2] = pbVar4;
                                      puVar8[1] = iVar2;
                                      pbStack_84 = pbStack_84 + iStack_74;
                                      if (pbStack_84 < pbVar12) {
                                        iVar7 = FUN_ram_4206e970(&pbStack_84,pbVar12,&iStack_74,0x30
                                                                );
                                        if (iVar7 != 0) goto LAB_ram_420aaa6a;
                                        pbStack_84 = pbStack_84 + iStack_74;
                                      }
                                      puVar14 = puVar8;
                                    } while (pbVar12 == pbStack_84);
                                  }
                                }
                                iVar6 = -0x2566;
                              }
                              else {
                                iVar6 = iVar6 + -0x2500;
LAB_ram_420aa832:
                                pbVar4 = pbStack_84;
                                if ((iVar6 == 0) ||
                                   (((iVar6 == -0x2080 && (param_5 != (code *)0x0)) &&
                                    (iVar7 = (*param_5)(param_6,puVar3,&iStack_4c,iStack_7c,pbVar1,
                                                        pbVar5), pbVar4 = pbStack_84, iVar7 == 0))))
                                goto LAB_ram_420aa632;
                              }
LAB_ram_420aa856:
                              if ((iStack_7c != 0) || (pbVar4 = pbStack_84, iVar6 != -0x2080))
                              goto LAB_ram_420aa4f6;
                              goto LAB_ram_420aa632;
                            }
                            if (uStack_78 == 1) {
                              iStack_74 = 0;
                              iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar5,&iStack_74,0x30);
                              if (iVar6 == 0) {
                                if (pbVar5 != pbStack_84 + iStack_74) goto LAB_ram_420aa964;
                                iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar5,&iStack_74,0x80);
                                if (iVar6 == 0) {
                                  puVar3[0x46] = iStack_74;
                                  puVar3[0x47] = pbStack_84;
                                  pbStack_84 = pbStack_84 + iStack_74;
                                  puVar3[0x45] = 4;
                                }
                                else if (iVar6 != -0x62) goto LAB_ram_420aa894;
                                if (pbVar5 <= pbStack_84) {
LAB_ram_420aaa06:
                                  pbVar4 = pbStack_84;
                                  if (pbVar5 != pbStack_84) goto LAB_ram_420aa964;
                                  goto LAB_ram_420aa632;
                                }
                                iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar5,&iStack_74,0xa1);
                                if (iVar6 == 0) {
                                  iVar6 = FUN_ram_420ab5fe(&pbStack_84,pbStack_84 + iStack_74,
                                                           puVar3 + 0x48);
                                  if (iVar6 != 0) goto LAB_ram_420aa4f6;
                                  iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar5,&iStack_74,0x82);
                                  if (iVar6 == 0) {
                                    puVar3[0x4d] = iStack_74;
                                    puVar3[0x4e] = pbStack_84;
                                    pbStack_84 = pbStack_84 + iStack_74;
                                    puVar3[0x4c] = 2;
                                    goto LAB_ram_420aaa06;
                                  }
                                }
                              }
                            }
                            else {
                              if (uStack_78 != 2) goto LAB_ram_420aa802;
                              iStack_74 = 0;
                              iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar12,&iStack_74,4);
                              if (iVar6 == 0) {
                                puVar3[0x42] = 4;
                                puVar3[0x43] = iStack_74;
                                puVar3[0x44] = pbStack_84;
                                pbStack_84 = pbStack_84 + iStack_74;
                                pbVar4 = pbStack_84;
                                if (pbVar12 != pbStack_84) goto LAB_ram_420aa964;
                                goto LAB_ram_420aa632;
                              }
                            }
                          }
                          else {
                            if (uStack_78 == 0x800) {
                              iVar6 = FUN_ram_4206ebfe(&pbStack_84,pbVar12,puVar3 + 0x5a,6);
                              if (iVar6 != 0) goto LAB_ram_420aa894;
                              pbVar4 = pbStack_84;
                              if (puVar3[0x5c] == 0) {
LAB_ram_420aa932:
                                iVar6 = -0x2564;
                                goto LAB_ram_420aa4f6;
                              }
                              goto LAB_ram_420aa632;
                            }
                            if (uStack_78 == 0x10000) {
                              iVar6 = FUN_ram_420ab320(&pbStack_84,pbVar12,puVar3 + 0x5e);
                              pbVar5 = pbStack_84;
                              iVar7 = iVar6;
                              goto joined_r0x420aa7b6;
                            }
                            if (uStack_78 != 0x100) goto LAB_ram_420aa802;
                            puVar3[0x57] = 0;
                            puVar3[0x58] = 0;
                            iVar6 = FUN_ram_4206e970(&pbStack_84,pbVar5,&iStack_74,0x30);
                            if (iVar6 == 0) {
                              pbVar4 = pbStack_84;
                              if (pbVar5 != pbStack_84) {
                                iVar6 = FUN_ram_4206ea1a(&pbStack_84,pbVar5);
                                if (iVar6 != 0) {
                                  if ((iVar6 != -0x62) ||
                                     (iVar6 = FUN_ram_4206ea58(&pbStack_84,pbVar5,puVar3 + 0x57),
                                     iVar6 != 0)) goto LAB_ram_420aa894;
                                  if (puVar3[0x57] != 0) {
                                    puVar3[0x57] = 1;
                                  }
                                }
                                pbVar4 = pbStack_84;
                                if (pbVar5 != pbStack_84) {
                                  iVar6 = FUN_ram_4206ea58(&pbStack_84,pbVar5,puVar3 + 0x58);
                                  if (iVar6 != 0) goto LAB_ram_420aa894;
                                  if (pbVar5 != pbStack_84) goto LAB_ram_420aa964;
                                  if (puVar3[0x58] == 0x7fffffff) goto LAB_ram_420aa932;
                                  puVar3[0x58] = puVar3[0x58] + 1;
                                  pbVar4 = pbStack_84;
                                }
                              }
                              goto LAB_ram_420aa632;
                            }
                          }
LAB_ram_420aa894:
                          iVar6 = iVar6 + -0x2500;
                          pbVar5 = pbStack_84;
                          iVar7 = iVar6;
                        }
joined_r0x420aa7b6:
                        pbVar4 = pbVar5;
                        if (iVar7 != 0) goto LAB_ram_420aa4f6;
                        goto LAB_ram_420aa632;
                      }
                      goto LAB_ram_420aa4f6;
                    }
LAB_ram_420aab14:
                    iVar6 = FUN_ram_420aac9a(&pbStack_84,pbVar11,&uStack_58,&iStack_64);
                    if (iVar6 == 0) {
                      if ((((puVar3[0xc] != iStack_54) ||
                           (iVar6 = FUN_ram_4039c0e0(puVar3[0xd],uStack_50), iVar6 != 0)) ||
                          ((iStack_70 != iStack_64 || (iStack_6c != iStack_60)))) ||
                         ((iStack_6c != 0 &&
                          (iVar6 = FUN_ram_4039c0e0(uStack_68,uStack_5c), iVar6 != 0)))) {
                        FUN_ram_420aa2b8(puVar3);
                        iVar6 = -0x2680;
                        goto LAB_ram_420aa3e4;
                      }
                      iVar6 = FUN_ram_420ab1ca(&pbStack_84,pbVar11,puVar3 + 0x5f);
                      if (iVar6 == 0) {
                        if (pbVar11 == pbStack_84) {
                          return 0;
                        }
                        goto LAB_ram_420aa6b8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_ram_420aa4f6:
      FUN_ram_420aa2b8(puVar3);
    }
    else {
LAB_ram_420aa448:
      FUN_ram_420aa2b8(puVar3);
      iVar6 = iVar6 + -0x2180;
      if (iVar6 == 0) {
        return 0;
      }
    }
  }
  else {
    FUN_ram_420aa2b8(puVar3);
    iVar6 = -0x2180;
  }
LAB_ram_420aa3e4:
  if (puVar13 != (undefined4 *)0x0) {
    puVar13[0x65] = 0;
  }
  if (param_1 == puVar3) {
    return iVar6;
  }
LAB_ram_420aab96:
  FUN_ram_4206d7d4(puVar3);
  return iVar6;
code_r0x420aa7c4:
  iVar6 = -0x2562;
  pbStack_84 = pbVar12;
  goto LAB_ram_420aa4f6;
}

