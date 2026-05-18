
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_ram_4207a29c(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe640,"Let your body choose the pace.",0x297);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = *(ushort *)(param_2 + 0x16);
  iVar4 = *(int *)(*(int *)(param_2 + 4) + 4);
  if (uVar2 < 0xc) {
    return 1;
  }
  (*(code *)&SUB_ram_40010488)(param_3 + 1,0,0x78);
  iVar12 = iVar4 + 10;
  *(undefined2 *)((int)param_3 + 10) = *(undefined2 *)(iVar4 + 0x20);
  uVar3 = *(undefined2 *)(iVar4 + 0x22);
  param_3[7] = iVar4 + 0x18;
  *param_3 = iVar12;
  *(undefined2 *)((int)param_3 + 6) = uVar3;
  iVar9 = *(int *)(param_2 + 0x24);
  param_3[0x1d] = param_5;
  iVar11 = (uint)uVar2 + iVar4 + 0x18;
  uVar1 = *(undefined1 *)(iVar9 + 8);
  pbVar5 = (byte *)(iVar4 + 0x24);
  *(undefined1 *)((int)param_3 + 5) = uVar1;
  *(undefined1 *)(param_3 + 1) = uVar1;
  param_3[5] = iVar11 - (int)pbVar5;
  param_3[4] = (int)pbVar5;
  for (; iVar4 = iVar11 - (int)pbVar5, 1 < iVar4; pbVar5 = pbVar5 + pbVar5[1] + 2) {
    uVar6 = (uint)pbVar5[1];
    if (iVar4 <= (int)(uVar6 + 1)) {
      return 1;
    }
    bVar7 = *pbVar5;
    if (bVar7 < 0x33) {
      if (bVar7 < 0x25) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(bVar7) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(bVar7 - 0x25) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else if (bVar7 == 0x7f) {
      param_3[0x17] = (int)pbVar5;
    }
    else if ((char)bVar7 < '\0') {
      if (bVar7 == 0xdd) {
        if (uVar6 < 4) {
LAB_ram_4207a556:
          if (_DAT_ram_3fcc4268 == 0) {
            if (uVar6 < 4) {
LAB_ram_4207a596:
              if ((*(uint *)(*param_1 + 300) & 0x10000000) == 0) {
                if (((3 < uVar6) && ((*(uint *)(pbVar5 + 2) & 0xffffff) != 0x34fe18)) &&
                   (_DAT_ram_3fcc40c8 != (code *)0x0)) {
                  (*_DAT_ram_3fcc40c8)(_DAT_ram_3fcc40cc,param_4 << 1,iVar12,pbVar5,param_5);
                }
              }
              else if (3 < uVar6) {
                if (*(int *)(pbVar5 + 2) == 0x334c9000) {
                  iVar4 = param_3[0x11];
                }
                else {
                  if (*(int *)(pbVar5 + 2) != 0x344c9000) goto switchD_ram_4207a432_default;
                  iVar4 = param_3[0x12];
                }
                if (iVar4 == 0) {
                  param_3[0x11] = (int)pbVar5;
                }
              }
            }
            else {
LAB_ram_4207a562:
              if (*(int *)(pbVar5 + 2) != 0x334fe18) {
                if (*(int *)(pbVar5 + 2) != -0x22cb01e8) goto LAB_ram_4207a596;
                if (_DAT_ram_3fcc409c != (code *)0x0) {
                  (*_DAT_ram_3fcc409c)
                            (param_4 << 1 & 0xff,iVar12,pbVar5 + 7,pbVar5 + 10,uVar6 - 8 & 0xff,
                             param_5);
                }
              }
            }
          }
          else {
            if (uVar6 < 4) goto LAB_ram_4207a596;
            if (*(int *)(pbVar5 + 2) != 0x734fe18) goto LAB_ram_4207a562;
            *(undefined1 *)(param_3 + 0x15) = 1;
            FUN_ram_4039c11e(param_3 + 0x1e,pbVar5 + 7,4);
          }
        }
        else {
          iVar4 = *(int *)(pbVar5 + 2);
          if (iVar4 == 0x1f25000) {
            param_3[0xd] = (int)pbVar5;
          }
          else if ((uVar6 < 6) || (iVar4 != 0x2f25000)) {
            if (iVar4 == 0x4f25000) {
              param_3[0x14] = (int)pbVar5;
            }
            else {
              if (iVar4 != 0x1c9a6f50) goto LAB_ram_4207a556;
              param_3[0x19] = (int)pbVar5;
            }
          }
          else {
            if ((pbVar5[6] != 1) && (pbVar5[6] != 0)) goto LAB_ram_4207a556;
            param_3[0x10] = (int)pbVar5;
          }
        }
      }
      else if (bVar7 == 0xf4) {
        param_3[0x1a] = (int)pbVar5;
      }
    }
    else if (bVar7 == 0x44) {
      param_3[0xe] = (int)pbVar5;
    }
    else if (bVar7 == 0x4a) {
      param_3[0x16] = (int)pbVar5;
    }
    else if (bVar7 == 0x3d) {
      param_3[0x12] = (int)pbVar5;
    }
switchD_ram_4207a432_default:
  }
  iVar4 = param_3[10];
  uVar6 = 2;
  if (iVar4 != 0) {
    uVar6 = (*(byte *)(iVar4 + 1) < 0x10 ^ 1) << 1;
    if ((param_3[0xb] != 0) &&
       ((int)(0xf - (uint)*(byte *)(iVar4 + 1)) < (int)(uint)*(byte *)(param_3[0xb] + 1))) {
      uVar6 = uVar6 | 4;
    }
  }
  if ((param_3[9] == 0) || (0x20 < *(byte *)(param_3[9] + 1))) {
    uVar6 = uVar6 | 8;
  }
  if ((param_3[8] != 0) && (*(byte *)(param_3[8] + 1) < 3)) {
    param_3[8] = 0;
  }
  pcVar10 = (char *)param_3[0x11];
  if (pcVar10 != (char *)0x0) {
    bVar7 = 0x1e;
    if (*pcVar10 != -0x23) {
      bVar7 = 0x1a;
    }
    if ((byte)pcVar10[1] < bVar7) {
      param_3[0x11] = 0;
    }
  }
  pcVar10 = (char *)param_3[0x12];
  if (pcVar10 == (char *)0x0) {
    cVar8 = *(char *)(*(int *)(param_2 + 0x24) + 8);
  }
  else {
    bVar7 = 0x1a;
    if (*pcVar10 != -0x23) {
      bVar7 = 0x16;
    }
    if ((byte)pcVar10[1] < bVar7) {
      param_3[0x12] = 0;
    }
    pcVar10 = (char *)param_3[0x12];
    if (pcVar10 == (char *)0x0) goto LAB_ram_4207a728;
    if (*pcVar10 == -0x23) {
      pcVar10 = pcVar10 + 4;
    }
    cVar8 = pcVar10[2];
  }
  *(char *)(param_3 + 1) = cVar8;
LAB_ram_4207a728:
  if ((param_3[0x1a] != 0) && ((iVar4 == 0 || (0x14 < *(byte *)(iVar4 + 1))))) {
    uVar6 = uVar6 | 0x100;
  }
  iVar4 = FUN_ram_4208b9e8((char)param_3[1]);
  if (iVar4 == 0) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc278,(char)param_3[1]);
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

