
/* WARNING: Removing unreachable block (ram,0x420189e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420185f4(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 uStack_84;
  byte local_80 [16];
  undefined1 auStack_70 [68];
  
  FUN_ram_4039c11e(auStack_70,"ure, gather one fact first.",0x18);
  FUN_ram_42048298(auStack_70);
  if (((DAT_ram_3fcc4fd9 == '\0') && (uVar4 = FUN_ram_420b1038(0,3,0), -1 < (int)uVar4)) &&
     (iVar5 = FUN_ram_420b1038(0,4,uVar4 | 0x4000), -1 < iVar5)) {
    DAT_ram_3fcc4fd9 = '\x01';
  }
  FUN_ram_42015f20(0);
  iVar5 = FUN_ram_4202183c();
  if (iVar5 == 0) goto LAB_ram_42018664;
LAB_ram_42018660:
  FUN_ram_42010478();
LAB_ram_42018664:
  iVar5 = FUN_ram_42022260();
  if (iVar5 != 0) {
    iVar5 = FUN_ram_4201605e();
    if (iVar5 == 0) {
      uVar6 = 0x3c0a8e08;
      uVar9 = 0x3c0a8ba8;
    }
    else {
      uVar6 = 0x3c0a8e1c;
      uVar9 = 0x3c0a8bb8;
    }
    FUN_ram_420184fc(uVar6,uVar9);
    iVar7 = FUN_ram_420222d8(12000);
    if (iVar7 != 0) {
      if (iVar5 == 0) {
        uVar6 = 0x3c0a8c38;
        uVar9 = 0x3c0a8e30;
      }
      else {
        uVar6 = 0x3c0a8c4c;
        uVar9 = 0x3c0a8e48;
      }
      goto LAB_ram_42018680;
    }
    uStack_84 = 0;
    iVar7 = FUN_ram_42022174(&uStack_84);
    if (iVar7 == 0) goto LAB_ram_4201873c;
    if (iVar5 != 0) {
      uVar6 = 0x3c0a8e6c;
      goto LAB_ram_42018732;
    }
    uVar6 = 0x3c0a8e5c;
    goto LAB_ram_42018718;
  }
  iVar5 = FUN_ram_4201605e();
  if (iVar5 == 0) {
    uVar6 = 0x3c0a8db0;
    uVar9 = 0x3c0a8dc4;
  }
  else {
    uVar6 = 0x3c0a8de0;
    uVar9 = 0x3c0a8df0;
  }
LAB_ram_42018680:
  FUN_ram_420184fc(uVar6,uVar9);
  uVar6 = 0x78;
  goto LAB_ram_42018688;
LAB_ram_4201873c:
  iVar7 = FUN_ram_42023212();
  if (iVar7 == 0) {
    iVar7 = FUN_ram_42023318();
    if (iVar7 == 0) {
      (*(code *)&SUB_ram_400106ac)
                (auStack_70,0x40,0x3c0a8ef0,uStack_84 & 0xff,uStack_84._1_1_,uStack_84._2_1_,
                 uStack_84._3_1_);
      iVar7 = FUN_ram_4201edd8();
      if (iVar7 == 0) {
        iVar7 = FUN_ram_4201ee6a();
        if (iVar7 != 0) {
          FUN_ram_4201eeb2(1);
          local_80[0] = 0;
          local_80[1] = 0;
          local_80[2] = 0;
          local_80[3] = 0;
          local_80[4] = 0;
          local_80[5] = 0;
          local_80[6] = 0;
          local_80[7] = 0;
          iVar8 = FUN_ram_420210fa(auStack_70,0,local_80);
          iVar3 = 0x9a;
          if (iVar8 != 0) {
            iVar8 = FUN_ram_42021324(local_80,3);
            uVar6 = 3;
            if (0x76 < iVar8) {
              iVar8 = FUN_ram_42021324(local_80,2);
              uVar6 = 2;
            }
            iVar13 = (200 - iVar8) / 2;
            iVar3 = iVar8 + 0x1c;
            FUN_ram_420183e0(iVar7,iVar13 + -5,9,iVar8 + 10,iVar8 + 10,6);
            FUN_ram_4202120e(local_80,iVar7,iVar13,0xe,uVar6);
            FUN_ram_420211a6(local_80);
          }
          iVar7 = FUN_ram_4201605e();
          if (iVar7 == 0) {
            uVar6 = 0x3c0a8e9c;
            uVar9 = 0x3c0a8eb4;
          }
          else {
            uVar6 = 0x3c0a8ec8;
            uVar9 = 0x3c0a8ee0;
          }
          FUN_ram_4201f3fe((int)(short)iVar3,uVar6,0);
          FUN_ram_4201f3fe((iVar3 + 0x16) * 0x10000 >> 0x10,uVar9,0);
          FUN_ram_4201eee8();
          FUN_ram_4201f096();
        }
      }
      if (iVar5 == 0) {
        uVar6 = 0x3c0a8f04;
        uVar9 = 0x3c0a8f34;
      }
      else {
        uVar6 = 0x3c0a8f1c;
        uVar9 = 0x3c0a8f48;
      }
LAB_ram_4201885e:
      if (DAT_ram_3fcc4fe8 == '\0') {
        iVar5 = FUN_ram_42023362();
        if (iVar5 != 0) {
          FUN_ram_4202336c();
          FUN_ram_420184fc(uVar9,uVar6);
          DAT_ram_3fcc4fe8 = '\x01';
          lVar14 = FUN_ram_403919ae();
          _DAT_ram_3fcc4fe0 = lVar14 + 1200000;
        }
      }
      iVar5 = FUN_ram_42048196(8);
      uVar15 = FUN_ram_403919ae();
      cVar2 = DAT_ram_3fcc4fd9;
      if (iVar5 == 0) {
        if (DAT_ram_3fcc4fe9 == '\0') {
          DAT_ram_3fcc4fe9 = '\x01';
          _DAT_ram_3fcc4ff0 = uVar15;
        }
        else {
          uVar12 = (uint)uVar15 - _DAT_ram_3fcc4ff0;
          uVar4 = (uint)((uint)uVar15 < uVar12);
          uVar10 = (int)((ulonglong)uVar15 >> 0x20) - _DAT_ram_3fcc4ff4;
          if ((0 < (int)(uVar10 - uVar4)) || ((uVar10 == uVar4 && (799999 < uVar12))))
          goto LAB_ram_42018660;
        }
      }
      else {
        DAT_ram_3fcc4fe9 = '\0';
        _DAT_ram_3fcc4ff0 = 0;
      }
      if (DAT_ram_3fcc4fd9 != '\0') {
        iVar5 = FUN_ram_420b10ba(0,local_80,0x10);
        if (0 < iVar5) {
          iVar3 = 0;
          cVar11 = '\0';
          iVar7 = _DAT_ram_3fcc4fdc;
LAB_ram_42018974:
          bVar1 = local_80[iVar3];
          if (iVar7 == 1) {
            iVar7 = (uint)(bVar1 == 0x5b) << 1;
            cVar11 = cVar2;
          }
          else {
            if (iVar7 == 2) {
              if (bVar1 == 0x44) {
LAB_ram_42018996:
                _DAT_ram_3fcc4fdc = 0;
                goto LAB_ram_42018660;
              }
            }
            else if (iVar7 == 0) {
              if (bVar1 != 0x1b) {
                if ((bVar1 & 0xdf) != 0x51) goto LAB_ram_420189aa;
                if (cVar11 != '\0') goto LAB_ram_42018996;
                goto LAB_ram_42018660;
              }
              iVar7 = 1;
              cVar11 = cVar2;
              goto LAB_ram_420189aa;
            }
            iVar7 = 0;
            cVar11 = cVar2;
          }
LAB_ram_420189aa:
          iVar3 = iVar3 + 1;
          if (iVar5 == iVar3) goto code_r0x420189b0;
          goto LAB_ram_42018974;
        }
      }
      goto LAB_ram_420188d4;
    }
  }
  if (iVar5 == 0) {
    uVar6 = 0x3c0a8e74;
LAB_ram_42018718:
    uVar9 = 0x3c0a8e30;
  }
  else {
    uVar6 = 0x3c0a8e88;
LAB_ram_42018732:
    uVar9 = 0x3c0a8e48;
  }
  FUN_ram_420184fc(uVar6,uVar9);
  uVar6 = 100;
LAB_ram_42018688:
  FUN_ram_40398498(uVar6);
  goto LAB_ram_42018660;
code_r0x420189b0:
  if (cVar11 != '\0') {
    _DAT_ram_3fcc4fdc = iVar7;
  }
LAB_ram_420188d4:
  if (DAT_ram_3fcc4fe8 != '\0') {
    lVar14 = FUN_ram_403919ae();
    if (_DAT_ram_3fcc4fe0 <= lVar14) goto LAB_ram_42018660;
  }
  FUN_ram_40398498(8);
  goto LAB_ram_4201885e;
}

