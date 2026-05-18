
undefined4 FUN_ram_4209a968(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x6d) & 2) == 0) {
    *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 2;
    while ((*(ushort *)(param_1 + 0x6d) & 4) == 0) {
      *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) & 0xfffe;
      *(undefined4 *)(*(int *)*param_1 + 200) = 0;
      if (param_1[6] == 0) {
        if (param_1[10] != 0) goto LAB_ram_4209a9ec;
        if (param_1[7] == 0) {
          if (param_1[8] == 0) {
            if (param_1[9] == 0) {
              if (param_1[0x68] == 0) {
                uVar3 = param_1[4];
                if (uVar3 == 6) {
                  iVar4 = FUN_ram_42099aee(param_1 + 2,0);
                  if (iVar4 != 0) goto LAB_ram_4209aacc;
LAB_ram_4209a9ec:
                  FUN_ram_42099a04(param_1);
                }
                else if (uVar3 < 7) {
                  if (uVar3 == 3) goto LAB_ram_4209aa96;
                  if (uVar3 < 4) {
                    if (uVar3 == 1) {
                      param_1[4] = 2;
                      *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
                      goto LAB_ram_4209aa08;
                    }
                    if (uVar3 == 2) goto LAB_ram_4209a9e0;
                  }
                  else {
                    if (uVar3 != 4) goto LAB_ram_4209a9ec;
                    if ((param_1[0x81] & 0x4000d42U) != 0) {
                      *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
                      param_1[4] = 6;
                      iVar4 = FUN_ram_42099aee(param_1 + 2,0);
                      if (iVar4 != 0) {
                        FUN_ram_4039c11e(param_1 + 0x24,iVar4,0x20);
                      }
                      param_1[0x70] = 0;
                    }
                  }
                }
                else if (uVar3 == 9) {
LAB_ram_4209ac98:
                  FUN_ram_4209a5ca(param_1);
                }
                else if (uVar3 < 10) {
                  if (uVar3 == 7) {
                    if (((param_1[0xf] == 0) || (param_1[0x11] != 0)) || (param_1[0x10] == 0)) {
                      if (4 < param_1[0xc]) {
LAB_ram_4209ac04:
                        *(undefined2 *)(param_1 + 0xb) = 0xf;
                        goto LAB_ram_4209a9ec;
                      }
LAB_ram_4209ac30:
                      if (param_1[0xe] != 0) goto LAB_ram_4209aacc;
                    }
                    else {
LAB_ram_4209ab5e:
                      FUN_ram_42099b16(param_1);
                    }
                  }
                  else {
                    if (param_1[0x12] == 0) {
                      if (((param_1[0xf] == 0) || (param_1[0x11] != 0)) || (param_1[0x10] == 0))
                      goto LAB_ram_4209ac30;
                      goto LAB_ram_4209ab5e;
                    }
                    param_1[4] = 9;
                    param_1[0xc] = 0;
                    *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
                  }
                }
                else if (uVar3 == 10) {
                  if ((*(ushort *)(param_1 + 0x6d) & 0x40) != 0) goto LAB_ram_4209ab5e;
                  if ((((param_1[0xf] == 0) || (param_1[0x11] != 0)) || (param_1[0x10] == 0)) ||
                     (param_1[0x12] == 0)) {
                    if (4 < param_1[0xc]) goto LAB_ram_4209ac04;
                    if (param_1[0xe] != 0) goto LAB_ram_4209ac98;
                  }
                  else {
                    *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
                    param_1[4] = 0xb;
                    param_1[0xf] = 0;
                    piVar5 = param_1 + 2;
                    if (param_1[0x4e] != 0) {
                      iVar4 = FUN_ram_4209c8dc(param_1[0x80]);
                      uVar2 = FUN_ram_4209c726(param_1[0x80]);
                      if (iVar4 == 7) {
                        iVar4 = FUN_ram_4209999e(0,param_1 + 0x3f,uVar2);
                      }
                      else {
                        iVar4 = FUN_ram_4207f742(iVar4,piVar5,0,param_1 + 0x3f,uVar2);
                      }
                      if (iVar4 != 0) {
                        FUN_ram_4207f6bc(piVar5,2);
                        goto LAB_ram_4209aa3c;
                      }
                      param_1[0x4c] = 1;
                      if (*(int *)(*param_1 + 0x30) != 0) {
                        FUN_ram_420992a6(0x4208ad90,*param_1,param_1);
                        FUN_ram_4209915a(*(undefined4 *)(*param_1 + 0x30),0,0x4208ad90,*param_1,
                                         param_1);
                      }
                    }
                    if (param_1[0x7f] == 1) {
                      param_1[0x67] = 1;
                    }
                    else {
                      param_1[0x69] = 1;
                    }
                    FUN_ram_4207f402(piVar5);
                  }
                }
              }
              else {
                iVar4 = FUN_ram_42060348(param_1 + 0x14,0x20);
                if (iVar4 != 0) {
                  param_1[10] = 1;
                  *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
                  param_1[4] = 2;
                  goto LAB_ram_4209aa08;
                }
                param_1[0xc] = 0;
LAB_ram_4209aacc:
                FUN_ram_4209a516(param_1);
              }
            }
            else {
LAB_ram_4209aa96:
              FUN_ram_42099d6e(param_1);
            }
          }
          else {
            *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
            param_1[4] = 3;
            (*(code *)&SUB_ram_40010488)(param_1 + 0x31,0,0x68);
            param_1[0x4b] = 0;
            param_1[8] = 0;
          }
        }
        else {
          param_1[4] = 2;
          *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
LAB_ram_4209aa08:
          param_1[7] = 0;
        }
      }
      else {
LAB_ram_4209a9e0:
        FUN_ram_4209a912(param_1);
      }
LAB_ram_4209aa3c:
      if ((*(ushort *)(param_1 + 0x6d) & 4) != 0) break;
      if ((param_1[6] == 0) && (param_1[0x6a] == 0)) {
        uVar3 = param_1[5];
        if (uVar3 < 4) {
          if (uVar3 < 2) {
            if (uVar3 == 0) {
              if (param_1[0x13] == 0) {
                if (param_1[0x7f] == 1) {
                  iVar4 = param_1[0x67];
LAB_ram_4209acbc:
                  if (iVar4 != 0) goto LAB_ram_4209acc0;
                }
              }
              else {
LAB_ram_4209acc0:
                FUN_ram_4209a798(param_1);
              }
            }
            else if ((((param_1[0xf] == 0) || (param_1[0x11] != 0)) || (param_1[0x10] != 0)) ||
                    (param_1[0x12] == 0)) {
              if (param_1[0xd] < 5) {
                iVar4 = param_1[0xe];
                goto LAB_ram_4209acbc;
              }
              *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
              param_1[5] = 3;
              if (param_1[0x13] != 0) {
                *(int *)(param_1[1] + 0xc) = *(int *)(param_1[1] + 0xc) + -1;
              }
              param_1[10] = 1;
              param_1[0x13] = 0;
              *(undefined2 *)(param_1 + 0xb) = 0x10;
            }
            else {
              param_1[0xf] = 0;
              *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
              param_1[5] = 2;
              if (param_1[0x13] != 0) {
                *(int *)(param_1[1] + 0xc) = *(int *)(param_1[1] + 0xc) + -1;
              }
              param_1[0x13] = 0;
              param_1[0xd] = 0;
              param_1[0x69] = 1;
            }
          }
          else {
            *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
            param_1[5] = 0;
            param_1[0xd] = 0;
          }
        }
      }
      else {
        param_1[5] = 0;
        *(ushort *)(param_1 + 0x6d) =
             *(ushort *)(param_1 + 0x6d) & 0xfffe | (ushort)(param_1[6] == 0);
        param_1[0xd] = 0;
        param_1[0x6a] = 0;
      }
      if (((*(ushort *)(param_1 + 0x6d) & 4) != 0) ||
         ((FUN_ram_42099e5e(*param_1,param_1[1]), (*(ushort *)(param_1 + 0x6d) & 1) == 0 &&
          (*(int *)(*(int *)*param_1 + 200) == 0)))) break;
    }
    uVar1 = *(ushort *)(param_1 + 0x6d);
    *(ushort *)(param_1 + 0x6d) = uVar1 & 0xfffd;
    if ((uVar1 & 4) != 0) {
      FUN_ram_42099692(param_1);
      return 1;
    }
  }
  return 0;
}

