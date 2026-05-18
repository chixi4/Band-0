
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205538a(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  
  _DAT_ram_3fcc52fc = _DAT_ram_3fcc52fc + 1;
  DAT_ram_3fcc52e8 = DAT_ram_3fcc52e8 + '\x01';
LAB_ram_420553ca:
  do {
    iVar11 = 0;
    iVar12 = _DAT_ram_3fcc52f0;
LAB_ram_420553d8:
    while( true ) {
      iVar6 = iVar12;
      if (iVar6 == 0) {
        iVar11 = _DAT_ram_3fcc52ec;
        iVar12 = 0;
        goto LAB_ram_420553ea;
      }
      if ((*(uint *)(iVar6 + 0x14) < 2) || (*(uint *)(iVar6 + 0x14) == 10)) goto LAB_ram_42055416;
      if (*(char *)(iVar6 + 0x22) != DAT_ram_3fcc52e8) break;
      iVar11 = iVar6;
      iVar12 = *(int *)(iVar6 + 0xc);
    }
    *(char *)(iVar6 + 0x22) = DAT_ram_3fcc52e8;
    iVar12 = 1;
    if (*(byte *)(iVar6 + 0x46) < 0xc) {
      if (*(byte *)(iVar6 + 0xa5) == 0) {
        uVar4 = *(ushort *)(iVar6 + 0x34);
        iVar12 = (int)(short)uVar4;
        if (uVar4 < 0x7fff) {
          iVar9 = (uVar4 + 1) * 0x10000;
          iVar12 = iVar9 >> 0x10;
          *(short *)(iVar6 + 0x34) = (short)((uint)iVar9 >> 0x10);
        }
        if ((*(short *)(iVar6 + 0x44) <= iVar12) &&
           ((iVar12 = FUN_ram_42057b6a(iVar6), iVar12 == 0 ||
            ((*(int *)(iVar6 + 0x74) == 0 && (*(int *)(iVar6 + 0x70) != 0)))))) {
          if (1 < *(int *)(iVar6 + 0x14) - 2U) {
            uVar8 = (uint)*(byte *)(iVar6 + 0x46);
            if (0xc < uVar8) {
              uVar8 = 0xc;
            }
            iVar12 = ((int)*(short *)(iVar6 + 0x40) >> 3) + (int)*(short *)(iVar6 + 0x42) <<
                     ((byte)(&DAT_ram_3c0f7560)[uVar8] & 0x1f);
            if (0x7fff < iVar12) {
              iVar12 = 0x7fff;
            }
            *(short *)(iVar6 + 0x44) = (short)iVar12;
          }
          *(undefined2 *)(iVar6 + 0x34) = 0;
          uVar4 = *(ushort *)(iVar6 + 0x36);
          uVar8 = (uint)*(ushort *)(iVar6 + 100);
          if ((uint)*(ushort *)(iVar6 + 0x4c) < (uint)*(ushort *)(iVar6 + 100)) {
            uVar8 = (uint)*(ushort *)(iVar6 + 0x4c);
          }
          sVar7 = (short)(uVar8 >> 1);
          if (uVar8 >> 1 < (uVar4 & 0x7fff) << 1) {
            sVar7 = uVar4 << 1;
          }
          *(short *)(iVar6 + 0x4e) = sVar7;
          *(ushort *)(iVar6 + 0x4c) = uVar4;
          *(undefined2 *)(iVar6 + 0x6e) = 0;
          FUN_ram_42058342(iVar6);
        }
      }
      else {
        if ((*(int *)(iVar6 + 0x74) != 0) || (*(int *)(iVar6 + 0x70) == 0)) goto LAB_ram_42055416;
        if (0xb < *(byte *)(iVar6 + 0xa6)) goto LAB_ram_420554a4;
        bVar1 = (&DAT_ram_3c0f7557)[*(byte *)(iVar6 + 0xa5)];
        bVar2 = *(byte *)(iVar6 + 0xa4);
        if ((bVar1 <= bVar2) || (*(byte *)(iVar6 + 0xa4) = bVar2 + 1, bVar1 <= (byte)(bVar2 + 1))) {
          if (*(short *)(iVar6 + 100) == 0) {
            iVar12 = FUN_ram_420583d6(iVar6);
            if (iVar12 == 0) goto LAB_ram_42055590;
          }
          else {
            iVar12 = FUN_ram_42057858(iVar6);
            if ((iVar12 != 0) || (iVar12 = FUN_ram_42057e96(iVar6), iVar12 != 0)) {
LAB_ram_42055590:
              *(undefined1 *)(iVar6 + 0xa4) = 0;
              if (*(byte *)(iVar6 + 0xa5) < 7) {
                *(byte *)(iVar6 + 0xa5) = *(byte *)(iVar6 + 0xa5) + 1;
              }
            }
          }
        }
      }
      iVar12 = 0;
    }
LAB_ram_420554a4:
    iVar9 = *(int *)(iVar6 + 0x14);
    if (((iVar9 == 6) && ((*(ushort *)(iVar6 + 0x1e) & 0x10) != 0)) &&
       (0x28 < (uint)(_DAT_ram_3fcc52fc - *(int *)(iVar6 + 0x24)))) {
      iVar12 = iVar12 + 1;
    }
    if (((*(byte *)(iVar6 + 9) & 8) == 0) || ((iVar9 != 4 && (iVar9 != 7)))) {
LAB_ram_420554e0:
      bVar5 = false;
    }
    else {
      uVar8 = _DAT_ram_3fcc52fc - *(int *)(iVar6 + 0x24);
      if (uVar8 <= (uint)(*(int *)(iVar6 + 0x9c) * *(int *)(iVar6 + 0xa0) + *(int *)(iVar6 + 0x98))
                   / 500) {
        if ((((uint)*(byte *)(iVar6 + 0xa7) * *(int *)(iVar6 + 0x9c) + *(int *)(iVar6 + 0x98)) / 500
             < uVar8) && (iVar9 = FUN_ram_42058392(iVar6), iVar9 == 0)) {
          *(char *)(iVar6 + 0xa7) = *(char *)(iVar6 + 0xa7) + '\x01';
        }
        goto LAB_ram_420554e0;
      }
      iVar12 = iVar12 + 1;
      bVar5 = true;
    }
    if ((*(int *)(iVar6 + 0x78) != 0) &&
       ((uint)(*(short *)(iVar6 + 0x44) * 6) <= (uint)(_DAT_ram_3fcc52fc - *(int *)(iVar6 + 0x24))))
    {
      FUN_ram_42054b8a(iVar6);
    }
    if (*(int *)(iVar6 + 0x14) == 3) {
      iVar9 = *(int *)(iVar6 + 0x24);
      uVar8 = 0x28;
LAB_ram_4205551a:
      if ((uint)(_DAT_ram_3fcc52fc - iVar9) <= uVar8) goto LAB_ram_4205551e;
    }
    else {
      if (*(int *)(iVar6 + 0x14) == 9) {
        iVar9 = *(int *)(iVar6 + 0x24);
        uVar8 = 0xf0;
        goto LAB_ram_4205551a;
      }
LAB_ram_4205551e:
      if (iVar12 == 0) {
        cVar3 = *(char *)(iVar6 + 0x20);
        iVar12 = *(int *)(iVar6 + 0xc);
        *(char *)(iVar6 + 0x20) = cVar3 + '\x01';
        iVar11 = iVar6;
        if (*(byte *)(iVar6 + 0x21) <= (byte)(cVar3 + 1U)) {
          *(undefined1 *)(iVar6 + 0x20) = 0;
          DAT_ram_3fcc52ea = '\0';
          if (*(code **)(iVar6 + 0x90) != (code *)0x0) {
            iVar9 = (**(code **)(iVar6 + 0x90))(*(undefined4 *)(iVar6 + 0x10),iVar6);
            if (DAT_ram_3fcc52ea != '\0') goto LAB_ram_420553ca;
            if (iVar9 != 0) goto LAB_ram_420553d8;
          }
          FUN_ram_42057e96(iVar6);
        }
        goto LAB_ram_420553d8;
      }
    }
    pcVar13 = *(code **)(iVar6 + 0x94);
    FUN_ram_42054ba6(iVar6);
    if (iVar11 == 0) {
      if (iVar6 != _DAT_ram_3fcc52f0) goto LAB_ram_42055416;
      _DAT_ram_3fcc52f0 = *(int *)(iVar6 + 0xc);
    }
    else {
      if (iVar6 == _DAT_ram_3fcc52f0) goto LAB_ram_42055416;
      *(undefined4 *)(iVar11 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
    }
    if (bVar5) {
      FUN_ram_42057d6a(iVar6,*(undefined4 *)(iVar6 + 0x54),*(undefined4 *)(iVar6 + 0x28),iVar6,
                       iVar6 + 4,*(undefined2 *)(iVar6 + 0x1a),*(undefined2 *)(iVar6 + 0x1c));
    }
    uVar10 = *(undefined4 *)(iVar6 + 0x10);
    iVar12 = *(int *)(iVar6 + 0xc);
    FUN_ram_42054506(iVar6);
    DAT_ram_3fcc52ea = '\0';
    if ((pcVar13 == (code *)0x0) || ((*pcVar13)(uVar10,0xfffffff3), DAT_ram_3fcc52ea == '\0'))
    goto LAB_ram_420553d8;
  } while( true );
LAB_ram_420553ea:
  iVar6 = iVar11;
  if (iVar6 == 0) {
    return;
  }
  if (*(int *)(iVar6 + 0x14) != 10) {
LAB_ram_42055416:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if ((uint)(_DAT_ram_3fcc52fc - *(int *)(iVar6 + 0x24)) < 0xf1) {
    iVar11 = *(int *)(iVar6 + 0xc);
    iVar12 = iVar6;
  }
  else {
    FUN_ram_42054ba6();
    if (iVar12 == 0) {
      if (iVar6 != _DAT_ram_3fcc52ec) goto LAB_ram_42055416;
      _DAT_ram_3fcc52ec = *(int *)(iVar6 + 0xc);
    }
    else {
      if (iVar6 == _DAT_ram_3fcc52ec) goto LAB_ram_42055416;
      *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
    }
    iVar11 = *(int *)(iVar6 + 0xc);
    FUN_ram_42054506();
  }
  goto LAB_ram_420553ea;
}

