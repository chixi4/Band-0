
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205282e(void)

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
  int iVar10;
  int iVar11;
  code *pcVar12;
  undefined4 uVar13;
  
  _DAT_ram_3fcb67cc = _DAT_ram_3fcb67cc + 1;
  DAT_ram_3fcb67b8 = DAT_ram_3fcb67b8 + '\x01';
LAB_ram_4205286c:
  do {
    iVar10 = 0;
    iVar11 = _DAT_ram_3fcb67c0;
LAB_ram_4205287a:
    while( true ) {
      iVar6 = iVar11;
      if (iVar6 == 0) {
        iVar10 = _DAT_ram_3fcb67bc;
        iVar11 = 0;
        while (iVar6 = iVar10, iVar6 != 0) {
          if ((uint)(_DAT_ram_3fcb67cc - *(int *)(iVar6 + 0x24)) < 0xf1) {
            iVar10 = *(int *)(iVar6 + 0xc);
            iVar11 = iVar6;
          }
          else {
            FUN_ram_420527de();
            iVar10 = *(int *)(iVar6 + 0xc);
            if (iVar11 != 0) {
              *(int *)(iVar11 + 0xc) = *(int *)(iVar6 + 0xc);
              iVar10 = _DAT_ram_3fcb67bc;
            }
            _DAT_ram_3fcb67bc = iVar10;
            iVar10 = *(int *)(iVar6 + 0xc);
            FUN_ram_42052626();
          }
        }
        return;
      }
      if (*(char *)(iVar6 + 0x22) != DAT_ram_3fcb67b8) break;
      iVar10 = iVar6;
      iVar11 = *(int *)(iVar6 + 0xc);
    }
    *(char *)(iVar6 + 0x22) = DAT_ram_3fcb67b8;
    iVar11 = 1;
    if (*(byte *)(iVar6 + 0x46) < 0xc) {
      if (*(byte *)(iVar6 + 0xa1) == 0) {
        uVar4 = *(ushort *)(iVar6 + 0x34);
        iVar11 = (int)(short)uVar4;
        if (uVar4 < 0x7fff) {
          iVar9 = (uVar4 + 1) * 0x10000;
          iVar11 = iVar9 >> 0x10;
          *(short *)(iVar6 + 0x34) = (short)((uint)iVar9 >> 0x10);
        }
        if ((*(short *)(iVar6 + 0x44) <= iVar11) &&
           ((iVar11 = FUN_ram_42054ff0(iVar6), iVar11 == 0 ||
            ((*(int *)(iVar6 + 0x74) == 0 && (*(int *)(iVar6 + 0x70) != 0)))))) {
          if (1 < *(int *)(iVar6 + 0x14) - 2U) {
            uVar8 = (uint)*(byte *)(iVar6 + 0x46);
            if (0xc < uVar8) {
              uVar8 = 0xc;
            }
            iVar11 = ((int)*(short *)(iVar6 + 0x40) >> 3) + (int)*(short *)(iVar6 + 0x42) <<
                     (*(byte *)(uVar8 + 0x3c0793a8) & 0x1f);
            if (0x7fff < iVar11) {
              iVar11 = 0x7fff;
            }
            *(short *)(iVar6 + 0x44) = (short)iVar11;
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
          FUN_ram_42055750(iVar6);
        }
      }
      else {
        if (0xb < *(byte *)(iVar6 + 0xa2)) goto LAB_ram_4205291e;
        bVar1 = *(byte *)(*(byte *)(iVar6 + 0xa1) + 0x3c07939f);
        bVar2 = *(byte *)(iVar6 + 0xa0);
        if ((bVar1 <= bVar2) || (*(byte *)(iVar6 + 0xa0) = bVar2 + 1, bVar1 <= (byte)(bVar2 + 1))) {
          if (*(short *)(iVar6 + 100) == 0) {
            iVar11 = FUN_ram_420557c2(iVar6);
            if (iVar11 == 0) goto LAB_ram_420529e0;
          }
          else {
            iVar11 = FUN_ram_42054d32(iVar6);
            if ((iVar11 != 0) || (iVar11 = FUN_ram_420552e2(iVar6), iVar11 != 0)) {
LAB_ram_420529e0:
              *(undefined1 *)(iVar6 + 0xa0) = 0;
              if (*(byte *)(iVar6 + 0xa1) < 7) {
                *(byte *)(iVar6 + 0xa1) = *(byte *)(iVar6 + 0xa1) + 1;
              }
            }
          }
        }
      }
      iVar11 = 0;
    }
LAB_ram_4205291e:
    iVar9 = *(int *)(iVar6 + 0x14);
    if (((iVar9 == 6) && ((*(ushort *)(iVar6 + 0x1e) & 0x10) != 0)) &&
       (0x28 < (uint)(_DAT_ram_3fcb67cc - *(int *)(iVar6 + 0x24)))) {
      iVar11 = iVar11 + 1;
    }
    if (((*(byte *)(iVar6 + 9) & 8) == 0) || ((iVar9 != 4 && (iVar9 != 7)))) {
LAB_ram_4205295c:
      bVar5 = false;
    }
    else {
      uVar8 = _DAT_ram_3fcb67cc - *(int *)(iVar6 + 0x24);
      if (uVar8 <= (uint)(*(int *)(iVar6 + 0x98) * *(int *)(iVar6 + 0x9c) + *(int *)(iVar6 + 0x94))
                   / 500) {
        if ((((uint)*(byte *)(iVar6 + 0xa3) * *(int *)(iVar6 + 0x98) + *(int *)(iVar6 + 0x94)) / 500
             < uVar8) && (iVar9 = FUN_ram_42055788(iVar6), iVar9 == 0)) {
          *(char *)(iVar6 + 0xa3) = *(char *)(iVar6 + 0xa3) + '\x01';
        }
        goto LAB_ram_4205295c;
      }
      iVar11 = iVar11 + 1;
      bVar5 = true;
    }
    if (*(int *)(iVar6 + 0x14) == 3) {
      iVar9 = *(int *)(iVar6 + 0x24);
      uVar8 = 0x28;
LAB_ram_42052974:
      if ((uint)(_DAT_ram_3fcb67cc - iVar9) <= uVar8) goto LAB_ram_42052978;
    }
    else {
      if (*(int *)(iVar6 + 0x14) == 9) {
        iVar9 = *(int *)(iVar6 + 0x24);
        uVar8 = 0xf0;
        goto LAB_ram_42052974;
      }
LAB_ram_42052978:
      if (iVar11 == 0) {
        cVar3 = *(char *)(iVar6 + 0x20);
        iVar11 = *(int *)(iVar6 + 0xc);
        *(char *)(iVar6 + 0x20) = cVar3 + '\x01';
        iVar10 = iVar6;
        if (*(byte *)(iVar6 + 0x21) <= (byte)(cVar3 + 1U)) {
          *(undefined1 *)(iVar6 + 0x20) = 0;
          DAT_ram_3fcb67ba = '\0';
          if (*(code **)(iVar6 + 0x8c) != (code *)0x0) {
            iVar9 = (**(code **)(iVar6 + 0x8c))(*(undefined4 *)(iVar6 + 0x10),iVar6);
            if (DAT_ram_3fcb67ba != '\0') goto LAB_ram_4205286c;
            if (iVar9 != 0) goto LAB_ram_4205287a;
          }
          FUN_ram_420552e2(iVar6);
        }
        goto LAB_ram_4205287a;
      }
    }
    pcVar12 = *(code **)(iVar6 + 0x90);
    FUN_ram_420527de(iVar6);
    iVar11 = *(int *)(iVar6 + 0xc);
    if (iVar10 != 0) {
      *(int *)(iVar10 + 0xc) = *(int *)(iVar6 + 0xc);
      iVar11 = _DAT_ram_3fcb67c0;
    }
    _DAT_ram_3fcb67c0 = iVar11;
    if (bVar5) {
      FUN_ram_420551d8(iVar6,*(undefined4 *)(iVar6 + 0x54),*(undefined4 *)(iVar6 + 0x28),iVar6,
                       iVar6 + 4,*(undefined2 *)(iVar6 + 0x1a),*(undefined2 *)(iVar6 + 0x1c));
    }
    uVar13 = *(undefined4 *)(iVar6 + 0x10);
    iVar11 = *(int *)(iVar6 + 0xc);
    FUN_ram_42052626(iVar6);
    DAT_ram_3fcb67ba = '\0';
    if ((pcVar12 == (code *)0x0) || ((*pcVar12)(uVar13,0xfffffff3), DAT_ram_3fcb67ba == '\0'))
    goto LAB_ram_4205287a;
  } while( true );
}

