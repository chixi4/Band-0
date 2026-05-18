
undefined4 FUN_ram_420a2166(undefined1 *param_1,int param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  
  *param_4 = 0;
  param_4[1] = 0;
  uVar5 = (-(uint)(param_3 == 0) & 0xfffffffc) + 0x1b;
  iVar10 = 0;
  iVar9 = 7;
  for (puVar11 = param_1; sVar3 = (short)param_1, puVar11 < param_1 + param_2; puVar11 = puVar11 + 1
      ) {
    uVar5 = FUN_ram_4209fb3c(uVar5,*puVar11);
    if (uVar5 == 0x1d) {
      iVar10 = 1;
      iVar7 = 1;
LAB_ram_420a2276:
      if (iVar7 == iVar9) {
        param_4[iVar9 * 2 + 3] = param_4[iVar9 * 2 + 3] + 1;
      }
      else {
        param_4[iVar7 * 2 + 2] = (short)puVar11 - sVar3;
        param_4[iVar7 * 2 + 3] = 1;
        *param_4 = *param_4 | (ushort)(1 << iVar7);
        iVar9 = iVar7;
      }
    }
    else {
      if (uVar5 < 0x1e) {
        if (uVar5 == 0x18) {
          iVar7 = 0;
        }
        else {
          if (uVar5 < 0x19) {
            return 1;
          }
          iVar7 = 1;
          if (uVar5 != 0x1c) goto LAB_ram_420a2264;
        }
        goto LAB_ram_420a2276;
      }
      if (uVar5 == 0x20) {
        iVar7 = 4;
        goto LAB_ram_420a2276;
      }
      if (uVar5 < 0x21) {
        iVar7 = 3;
        if (uVar5 == 0x1e) goto LAB_ram_420a2276;
      }
      else {
        iVar7 = 5;
        if (uVar5 != 0x21) goto LAB_ram_420a2276;
      }
    }
LAB_ram_420a2264:
  }
  if ((*param_4 & 3) == 1) {
    return 1;
  }
  if ((*param_4 & 2) == 0) {
    if (param_3 != 0) {
      return 1;
    }
  }
  else {
    uVar1 = param_4[4];
    uVar2 = param_4[5];
    param_4[5] = 0;
    uVar5 = (iVar10 - 1U & 2) + 2;
    for (pbVar6 = param_1 + uVar1; pbVar6 < param_1 + (uint)uVar2 + (uint)uVar1; pbVar6 = pbVar6 + 1
        ) {
      uVar8 = (uint)*pbVar6;
      if (uVar5 == 8) {
LAB_ram_420a23fe:
        if (uVar8 != 0x3a) {
          return 1;
        }
        uVar5 = 0xb;
      }
      else {
        sVar4 = (short)pbVar6;
        if (uVar5 < 9) {
          if (uVar5 == 6) {
            if (((0x19 < ((uVar8 | 0x20) - 0x61 & 0xff)) && (9 < (uVar8 - 0x30 & 0xff))) &&
               (1 < (uVar8 - 0x2d & 0xff))) goto LAB_ram_420a23fe;
LAB_ram_420a23c0:
            uVar5 = 6;
            param_4[5] = param_4[5] + 1;
          }
          else if (uVar5 == 7) {
            if (uVar8 == 0x5d) goto LAB_ram_420a24da;
LAB_ram_420a240e:
            if (((10 < (uVar8 - 0x30 & 0xff)) && (5 < ((uVar8 | 0x20) - 0x61 & 0xff))) &&
               (uVar8 != 0x2e)) {
              if (uVar5 != 7) {
                return 1;
              }
              if (uVar8 != 0x25) {
                return 1;
              }
              uVar5 = 9;
              goto LAB_ram_420a2442;
            }
            if (uVar5 != 7) {
              param_4[4] = sVar4 - sVar3;
            }
            uVar5 = 7;
            param_4[5] = param_4[5] + 1;
          }
          else if (uVar5 == 4) {
            if (uVar8 != 0x5b) {
              if (((0x19 < ((uVar8 | 0x20) - 0x61 & 0xff)) && (9 < (uVar8 - 0x30 & 0xff))) &&
                 (1 < (uVar8 - 0x2d & 0xff))) {
                return 1;
              }
              param_4[4] = sVar4 - sVar3;
              goto LAB_ram_420a23c0;
            }
            uVar5 = 5;
          }
          else {
            if (uVar5 == 5) goto LAB_ram_420a240e;
            if (uVar8 == 0x40) {
              uVar5 = 4;
            }
            else {
              if (0x19 < ((uVar8 | 0x20) - 0x61 & 0xff)) {
                if (uVar8 < 0x3e) {
                  if (uVar8 < 0x21) {
                    return 1;
                  }
                  if ((0x17ffbff9U >> (uVar8 - 0x21 & 0x1f) & 1) == 0) {
                    return 1;
                  }
                }
                else if ((uVar8 != 0x5f) && (uVar8 != 0x7e)) {
                  return 1;
                }
              }
              if (uVar5 != 3) {
                param_4[0xe] = sVar4 - sVar3;
                param_4[0xf] = 0;
                *param_4 = *param_4 | 0x40;
              }
              uVar5 = 3;
              param_4[0xf] = param_4[0xf] + 1;
            }
          }
        }
        else {
          if (uVar5 == 10) {
            if (uVar8 == 0x5d) {
LAB_ram_420a24da:
              uVar5 = 8;
              goto LAB_ram_420a23cc;
            }
          }
          else if (10 < uVar5) {
            if (9 < (uVar8 - 0x30 & 0xff)) {
              return 1;
            }
            if (uVar5 != 0xc) {
              param_4[6] = sVar4 - sVar3;
              param_4[7] = 0;
              *param_4 = *param_4 | 4;
            }
            uVar5 = 0xc;
            param_4[7] = param_4[7] + 1;
            goto LAB_ram_420a23cc;
          }
          if (0x19 < ((uVar8 | 0x20) - 0x61 & 0xff)) {
            if (uVar8 < 0x3a) {
              if (uVar8 < 0x25) {
                return 1;
              }
              if ((0x1ffb01U >> (uVar8 - 0x25 & 0x1f) & 1) == 0) {
                return 1;
              }
            }
            else if ((uVar8 != 0x5f) && (uVar8 != 0x7e)) {
              return 1;
            }
          }
          uVar5 = 10;
LAB_ram_420a2442:
          param_4[5] = param_4[5] + 1;
        }
      }
LAB_ram_420a23cc:
    }
    if ((0x3afU >> (uVar5 - 2 & 0x1f) & 1) != 0) {
      return 1;
    }
    if (param_3 != 0) {
      if (*param_4 != 6) {
        return 1;
      }
      goto LAB_ram_420a2224;
    }
  }
  if ((*param_4 & 4) == 0) {
    return 0;
  }
LAB_ram_420a2224:
  uVar5 = (*(code *)&SUB_ram_4001058c)(param_1 + param_4[6],0,10);
  if (uVar5 < 0x10000) {
    param_4[1] = (ushort)uVar5;
    return 0;
  }
  return 1;
}

