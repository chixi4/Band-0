
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_ram_42078724(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  undefined *puVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  undefined1 auStack_48 [20];
  
  iVar19 = *(int *)(param_2 + 0x10);
  _DAT_ram_3fcc29e4 = _DAT_ram_3fcc29e4 + 1;
  uVar12 = *(uint *)(iVar19 + 0x2c);
  if (param_1 == 0) goto LAB_ram_42078dd2;
  (*(code *)&SUB_ram_40011fd0)(_DAT_ram_3fcc4014 != param_1,auStack_48);
  uVar13 = uVar12 & 0xfff;
  if ((**(uint **)(param_2 + 0x24) & 0x20) == 0) {
    if (0xf < uVar13) {
      pbVar18 = *(byte **)(*(int *)(param_2 + 4) + 4);
      bVar15 = *pbVar18;
      if ((bVar15 & 3) == 0) {
        bVar4 = pbVar18[1];
        bVar3 = bVar15 & 0xc;
        bVar14 = bVar15 & 0xf0;
        if (bVar3 == 8) {
          if ((bVar4 & 3) == 3) {
            if ((pbVar18[4] & 1) != 0) {
              FUN_ram_4207b45e(pbVar18,uVar13 - 4,param_3);
              goto LAB_ram_42078856;
            }
          }
          else if ((bVar4 & 3) == 0) goto LAB_ram_420788a4;
LAB_ram_42078866:
          pbVar17 = pbVar18 + 4;
        }
        else {
          if (((bVar4 & 3) != 0) || (bVar3 == 4)) goto LAB_ram_42078866;
LAB_ram_420788a4:
          if (uVar13 < 0x18) goto LAB_ram_42078856;
          pbVar17 = pbVar18 + 0x10;
        }
        param_5 = (*(code *)&SUB_ram_40011f9c)(pbVar18 + 10);
        iVar9 = _DAT_ram_6004d000;
        if (param_5 == 0) {
          if (bVar3 != 8) {
            if ((bVar3 == 4) && (((bVar15 & 0xe0) == 0x80 || (bVar14 == 0xa0)))) {
              FUN_ram_4207a038(1,0x20,5,
                               "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..." /* TRUNCATED STRING LITERAL */
                              );
              param_5 = (*(code *)&SUB_ram_40011f9c)(&DAT_ram_3c0fab70);
              if (param_5 == 0) goto LAB_ram_42078856;
              puVar10 = &DAT_ram_3c0fbbfc;
              goto LAB_ram_420788ba;
            }
            if (((*(char *)(iVar19 + 0x2f) != '\0') && (*(char *)(iVar19 + 0x2f) != -0xb)) ||
               (((iVar9 = FUN_ram_4039c0e0(pbVar17,&DAT_ram_3c0fab70,6), iVar9 != 0 &&
                 (iVar9 = FUN_ram_4039c0e0(pbVar17,auStack_48,6), iVar9 != 0)) ||
                (param_5 = (*(code *)&SUB_ram_40011f9c)(&DAT_ram_3c0fab70), param_5 == 0))))
            goto LAB_ram_42078856;
            bVar2 = false;
            goto LAB_ram_42078968;
          }
          param_5 = (*(code *)&SUB_ram_40011f9c)(&DAT_ram_3c0fab70);
          if (param_5 != 0) {
            puVar10 = &DAT_ram_3c0fbbc8;
LAB_ram_420788ba:
            FUN_ram_4207a038(1,4,4,puVar10,6);
            uVar7 = 6;
LAB_ram_420788ca:
            FUN_ram_42075c60(param_5,pbVar18 + 10,uVar7);
            goto LAB_ram_42078856;
          }
        }
        else {
          if ((*(char *)(iVar19 + 0x2f) != '\0') && (*(char *)(iVar19 + 0x2f) != -0xb))
          goto LAB_ram_42078856;
          if ((((pbVar18[1] & 0x40) != 0) || (*(char *)(param_5 + 0x334) == '\0')) &&
             (*(int *)(param_5 + 0x150) = _DAT_ram_6004d000,
             100000 < (uint)(iVar9 - *(int *)(param_5 + 0x154)))) {
            FUN_ram_42087078(param_5,param_3,2);
            *(int *)(param_5 + 0x154) = _DAT_ram_6004d000;
          }
          if (((bVar15 & 0xc) != 0) || (bVar2 = true, bVar14 != 0xb0)) {
            *(undefined1 *)(param_5 + 0x136) = 0;
            bVar2 = true;
          }
LAB_ram_42078968:
          *(byte *)(param_5 + 0x2b8) = (byte)((uint)*(undefined4 *)(iVar19 + 0x1c) >> 0x1f);
          if (((((bVar15 & 0xc) != 0) || (bVar14 != 0x40)) &&
              (iVar19 = FUN_ram_4039c0e0(pbVar17,auStack_48,6), iVar19 != 0)) &&
             (iVar19 = FUN_ram_4039c0e0(pbVar17,&DAT_ram_3c0fab70,6), iVar19 != 0))
          goto LAB_ram_42078856;
          *(char *)(param_1 + 0x118) = (char)param_4;
          if (((bVar15 & 4) == 0) && (bVar14 != 0x40)) {
            iVar19 = (*(code *)&SUB_ram_40012008)(pbVar18);
            sVar8 = *(short *)(pbVar18 + 0x16);
            if ((bVar15 & 0xc) == 0) {
              if (bVar14 == 0xd0) {
                pbVar17 = pbVar18 + 0x18;
                if ((pbVar18[1] & 0x40) != 0) {
                  pbVar17 = pbVar18 + *(int *)(gp + 100) + 0x18;
                }
                iVar19 = 0x11;
                if ((byte)(*pbVar17 + 0x82) < 2) {
                  if ((int)uVar13 < (int)(pbVar17 + (8 - (int)pbVar18))) goto LAB_ram_42078856;
                  if ((*pbVar17 == 0x7f) &&
                     (iVar9 = FUN_ram_4039c0e0(pbVar17 + 1,"ime before social plans.",3), iVar9 == 0
                     )) goto LAB_ram_42078ae0;
                }
              }
              else {
                iVar9 = 0x11;
                iVar19 = 0x11;
                if (((bVar14 == 0xb0) && (iVar19 = iVar9, *(int *)(param_1 + 0xec) != param_5)) &&
                   (*(char *)(param_5 + 0x136) == '\0')) {
                  bVar2 = false;
                }
              }
            }
            else if ((bVar3 == 8) && ((bVar15 & 0xc0) == 0xc0)) goto LAB_ram_42078ae0;
            if (*(char *)(param_5 + iVar19 + 0xf6) == '\0') {
              if (((bVar2) && ((pbVar18[1] & 8) != 0)) &&
                 (*(short *)((iVar19 + 0x68) * 2 + param_5 + 2) == sVar8)) goto LAB_ram_42078856;
            }
            else {
              *(undefined1 *)(param_5 + iVar19 + 0xf6) = 0;
            }
            *(short *)((iVar19 + 0x68) * 2 + param_5 + 2) = sVar8;
          }
LAB_ram_42078ae0:
          FUN_ram_4039c11e(param_1 + 0x9c,pbVar18 + 10,6);
          if (bVar3 == 4) {
            _DAT_ram_3fcc29ec = _DAT_ram_3fcc29ec + 1;
            FUN_ram_4207701c(param_5,param_2,bVar14);
            goto LAB_ram_42078856;
          }
          if (bVar3 != 8) {
            if ((bVar15 & 0xc) == 0) {
              sVar8 = 0x18;
              _DAT_ram_3fcc29ee = _DAT_ram_3fcc29ee + 1;
              bVar15 = pbVar18[1];
              if ((bVar15 & 3) == 3) {
                sVar8 = 0x1e;
              }
              if ((*pbVar18 & 0x8c) == 0x88) {
                sVar8 = sVar8 + 2;
              }
              if ((char)bVar15 < '\0') {
                sVar8 = sVar8 + 4;
              }
              *(short *)(param_2 + 0x14) = sVar8;
              *(short *)(param_2 + 0x16) = ((short)uVar13 + -4) - sVar8;
              if ((((bVar4 & 3) == 0) && (0x17 < uVar13)) && ((pbVar18[10] & 1) == 0)) {
                if (((*(char *)(param_5 + 0x2f9) == '\0') && ((bVar15 & 0x40) != 0)) &&
                   (bVar14 != 0xd0)) {
                  if (((bVar14 != 0xb0) || ((*(uint *)(param_1 + 0xa4) & 0x10) == 0)) ||
                     (iVar19 = FUN_ram_4208c5f6(param_5,param_2), iVar19 == 0))
                  goto LAB_ram_42078856;
                  iVar19 = *(int *)(*(int *)(param_2 + 4) + 4);
                  *(byte *)(iVar19 + 1) = *(byte *)(iVar19 + 1) & 0xbf;
                }
                FUN_ram_42077946(param_5,param_2,bVar14,param_3,param_4);
                bVar3 = 0;
              }
            }
            goto LAB_ram_42078856;
          }
          uVar16 = 0x18;
          _DAT_ram_3fcc29e8 = _DAT_ram_3fcc29e8 + 1;
          uVar6 = (uint)pbVar18[1];
          if ((uVar6 & 3) == 3) {
            uVar16 = 0x1e;
          }
          if ((*pbVar18 & 0x8c) == 0x88) {
            uVar16 = uVar16 + 2;
          }
          if ((char)pbVar18[1] < '\0') {
            uVar16 = uVar16 + 4;
          }
          *(short *)(param_2 + 0x14) = (short)uVar16;
          *(ushort *)(param_2 + 0x16) = ((ushort)((uVar12 << 0x14) >> 0x14) - 4) - (short)uVar16;
          if ((uVar16 <= uVar13) && ((bVar4 & 3) == 1)) {
            if (*(short *)(param_5 + 0x26) != 0) {
              if (((*(uint *)(param_5 + 0xc) ^ uVar6) & 0x10) != 0) {
                FUN_ram_42079d68(param_5,uVar6 & 0x10);
              }
              iVar19 = FUN_ram_4039b794(param_5,param_2);
              bVar15 = 1;
              if (iVar19 != 0) {
                return 8;
              }
              goto LAB_ram_420787d2;
            }
            uVar7 = 7;
            if (*(int *)(param_1 + 0xec) == param_5) goto LAB_ram_420788ca;
            iVar19 = FUN_ram_42075b46(param_5,0xa0,7);
            if (iVar19 != 0) {
              FUN_ram_42087eec(param_5);
              goto LAB_ram_42078856;
            }
          }
        }
        goto LAB_ram_4207889a;
      }
    }
LAB_ram_42078dd2:
    bVar3 = 0xff;
    goto LAB_ram_42078856;
  }
  uVar16 = 0x18;
  pbVar18 = *(byte **)(*(int *)(param_2 + 4) + 4);
  bVar15 = pbVar18[1] & 3;
  if (bVar15 == 3) {
    uVar16 = 0x1e;
  }
  if ((*pbVar18 & 0x8c) == 0x88) {
    uVar16 = uVar16 + 2;
  }
  bVar14 = 0x80;
  if ((char)pbVar18[1] < '\0') {
    uVar16 = uVar16 + 4;
  }
LAB_ram_420787d2:
  if ((pbVar18[1] & 0x40) == 0) {
    iVar19 = 0;
    *(uint *)(*(int *)(param_2 + 4) + 4) =
         *(int *)(*(int *)(param_2 + 4) + 4) + (uint)*(ushort *)(param_2 + 0x14);
LAB_ram_42078ca0:
    bVar4 = 0;
    if (bVar14 == 0x80) {
      if (bVar15 == 3) {
        bVar4 = pbVar18[0x1e];
      }
      else {
        bVar4 = pbVar18[0x18];
      }
    }
    param_2 = (*(code *)&SUB_ram_40011ffc)(param_2,pbVar18,uVar13,uVar16);
    if (param_2 == 0) {
      return 8;
    }
    iVar9 = *(int *)(*(int *)(param_2 + 4) + 4);
    if ((*(uint *)(param_5 + 0xc) & 1) == 0) {
      if (*(char *)(param_5 + 0x24) != '\x01') {
LAB_ram_42078d64:
        if ((iVar19 != 0) || (*(char *)(*(int *)(gp + -0xb4) + 0x3f4) == '\0')) {
          if ((char)bVar4 < '\0') {
            _DAT_ram_3fcc29f6 = _DAT_ram_3fcc29f6 + 1;
            param_2 = FUN_ram_4207d788(param_1,param_2);
            if (param_2 == 0) {
              return 8;
            }
          }
          FUN_ram_420769e8(param_1,param_2);
          return 8;
        }
        goto LAB_ram_4207889a;
      }
      bVar3 = 8;
      if ((*(short *)(iVar9 + 0xc) != -0x7178) || (bVar3 = 8, _DAT_ram_3fcc4178 == 0))
      goto LAB_ram_42078856;
      uVar1 = *(ushort *)(param_2 + 0x16);
      pcVar11 = *(code **)(_DAT_ram_3fcc4178 + 0x30);
      uVar7 = *(undefined4 *)(param_5 + 0x130);
      iVar5 = *(int *)(param_1 + 0x124);
    }
    else {
      if ((*(short *)(iVar9 + 0xc) != -0x7178) || (iVar5 = *(int *)(param_1 + 0x124), iVar5 == 0))
      goto LAB_ram_42078d64;
      bVar3 = 8;
      if (_DAT_ram_3fcc4178 == 0) goto LAB_ram_42078856;
      uVar1 = *(ushort *)(param_2 + 0x16);
      pcVar11 = *(code **)(_DAT_ram_3fcc4178 + 0x30);
      uVar7 = *(undefined4 *)(param_5 + 0x130);
    }
    bVar3 = 8;
    (*pcVar11)(iVar5,uVar7,iVar9 + 0xe,uVar1 - 0xe,pcVar11);
  }
  else {
    if ((*(uint *)(param_1 + 0xa4) & 0x10) != 0) {
      if (param_5 == 0) {
        FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe540,"e yourself an exit time before social plans.",
                         0x54c);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar19 = FUN_ram_4208c5f6(param_5,param_2,uVar16);
      if (iVar19 != 0) {
        pbVar18[1] = pbVar18[1] & 0xbf;
        goto LAB_ram_42078ca0;
      }
    }
LAB_ram_4207889a:
    bVar3 = 8;
  }
LAB_ram_42078856:
  (*(code *)&SUB_ram_40011fa0)(param_2);
  return bVar3;
}

