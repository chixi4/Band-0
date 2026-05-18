
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_42034980(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  ushort *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  undefined1 uStack_31;
  
  iVar15 = *(int *)(param_1 + 0x3c);
  uStack_31 = 0;
  if (iVar15 == 0) {
    return '\0';
  }
  DAT_ram_3fcb5130 = '\x03';
  DAT_ram_3fcb512e = '\x03';
  DAT_ram_3fcb512c = 3;
  DAT_ram_3fcb512d = 4;
  DAT_ram_3fcb5136 = 9;
  cVar1 = *(char *)(*(int *)(gp + -0x2b8) + 0x360);
  cVar12 = '\x01';
  if (*(char *)(*(int *)(gp + -0x2b8) + 0x361) == '\0') {
    cVar12 = DAT_ram_3fcb51c3;
  }
  uVar13 = (uint)*(byte *)(iVar15 + 1);
  if (uVar13 == 1) {
    uVar9 = 0x3c0732b0;
    uVar8 = 0x3c07ac00;
    goto LAB_ram_42034a18;
  }
  if (*(short *)(iVar15 + 2) != 1) {
    uVar8 = 0x3c07ac14;
LAB_ram_42034a3e:
    uVar7 = 4;
    uVar9 = 8;
LAB_ram_42034d1c:
    FUN_ram_42033fd8(1,uVar9,uVar7,uVar8);
    return '\0';
  }
  if (uVar13 == 2) {
    uVar8 = 0x3c07ac2c;
LAB_ram_42034a52:
    FUN_ram_42033fd8(1,8,4,uVar8);
    uVar13 = 0;
    iVar16 = 1;
    iVar15 = 1;
LAB_ram_42034a62:
    if ((cVar1 == '\0') || (cVar12 == '\0')) {
      uVar14 = 0;
LAB_ram_42034d3c:
      if ((uVar14 & 0x400) != 0) {
        *(undefined1 *)(param_1 + 0x61) = 1;
      }
      if ((uVar14 >> 0xb & 1) != 0) {
        *(undefined1 *)(param_1 + 0x62) = 1;
      }
      iVar6 = FUN_ram_42040e42();
      if ((((iVar6 == 0) || ((uVar13 & 0x2000) == 0)) || (_DAT_ram_3fcb50ec == 0)) ||
         ((_DAT_ram_3fcb5134 == 0 || ((uVar14 & 0x40) == 0)))) {
        if ((uVar13 & 0x10200) == 0) {
          if (((uVar13 & 0x8000) != 0) && (cVar1 != '\0')) {
            if ((uVar14 & 0x40) == 0) {
              uVar8 = 0x3c07ae64;
              goto LAB_ram_42034e28;
            }
            DAT_ram_3fcb512c = 9;
            DAT_ram_3fcb512d = 0xf;
            uVar10 = 9;
            goto LAB_ram_42034dd8;
          }
          iVar6 = FUN_ram_42040e42();
          if (((iVar6 != 0) && (_DAT_ram_3fcb50ec != 0)) && ((uVar13 & 0x410) != 0)) {
            if ((_DAT_ram_3fcb5134 == 0) || (DAT_ram_3fcb5130 == '\x01')) {
              DAT_ram_3fcb512d = 10;
              if ((uVar13 & 0x400) == 0) goto LAB_ram_42034f26;
LAB_ram_42034f28:
              uVar10 = 5;
              goto LAB_ram_42034d7c;
            }
            if ((uVar13 & 0x400) == 0) {
LAB_ram_42034f26:
              DAT_ram_3fcb512d = 4;
              goto LAB_ram_42034f28;
            }
            DAT_ram_3fcb512d = 10;
            if (*(int *)(param_1 + 0x34) != 0) goto LAB_ram_42034f28;
            if (((uVar13 != 0x400) || (uVar10 = 0xe, (uVar14 & 0x40) == 0)) &&
               (uVar10 = 0xf, (uVar14 & 0x80) == 0)) {
              uVar10 = 5;
            }
            *(undefined1 *)(param_1 + 0x60) = uVar10;
            DAT_ram_3fcb512d = 10;
            goto LAB_ram_42034efc;
          }
          if ((uVar13 & 0x100) != 0) goto LAB_ram_42034e52;
          if ((((uVar13 & 0x4000) != 0) && (*(char *)(*(int *)(gp + -0x2b8) + 0x414) != '\0')) &&
             (iVar6 = FUN_ram_42040e32(), iVar6 != 0)) {
            DAT_ram_3fcb512c = 8;
            DAT_ram_3fcb512d = 0xe;
            goto LAB_ram_42034f56;
          }
          if ((uVar13 & 0x20) != 0) goto LAB_ram_42034e72;
          if (((uVar13 & 0x20000) != 0) && (cVar1 != '\0')) {
            DAT_ram_3fcb512d = 0x11;
            uVar10 = 0xd;
            goto LAB_ram_42034dd8;
          }
        }
        else {
          iVar6 = FUN_ram_42040e12();
          if (((iVar6 == 0) || (_DAT_ram_3fcb5134 == 0)) || (DAT_ram_3fcb5130 == '\x01')) {
            if ((uVar13 & 0x100) == 0) {
              if ((uVar13 & 0x20) == 0) {
                uVar8 = 0x3c07ae24;
                goto LAB_ram_42034e28;
              }
              FUN_ram_42033fd8(1,4,4,0x3c07ade4);
LAB_ram_42034e72:
              DAT_ram_3fcb512d = 5;
            }
            else {
              FUN_ram_42033fd8(1,4,4,0x3c07ad9c);
LAB_ram_42034e52:
              DAT_ram_3fcb512d = 8;
            }
LAB_ram_42034f56:
            uVar10 = 3;
          }
          else if (((uVar14 & 0x80) == 0) || ((uVar13 & 0x120) == 0)) {
            if ((uVar14 & 0x40) == 0) {
              uVar8 = 0x3c07ad64;
LAB_ram_42034e28:
              FUN_ram_42033fd8(1,4,4,uVar8);
              _DAT_ram_3fcb512c = CONCAT11(0x12,DAT_ram_3fcb512c);
              return '\0';
            }
            DAT_ram_3fcb512d = 9;
            if ((uVar13 & 0x10000) != 0) {
              DAT_ram_3fcb512d = 0x10;
            }
            uVar10 = 6;
            DAT_ram_3fcb512c = 6;
          }
          else {
            DAT_ram_3fcb512d = 9;
            if ((uVar13 & 0x10000) != 0) {
              DAT_ram_3fcb512d = 0x10;
            }
            DAT_ram_3fcb512c = 6;
            uVar10 = 7;
          }
LAB_ram_42034dd8:
          *(undefined1 *)(param_1 + 0x60) = uVar10;
        }
        if (_DAT_ram_3fcb50ec != 0) goto LAB_ram_42034efc;
        if (DAT_ram_3fcb512d == 0x12) {
          if ((uVar13 & 0x2410) == 0) {
            uVar8 = 0x3c07aef0;
          }
          else {
            uVar8 = 0x3c07aed0;
          }
          goto LAB_ram_42035104;
        }
      }
      else {
        DAT_ram_3fcb512d = 0xd;
        uVar10 = 10;
LAB_ram_42034d7c:
        *(undefined1 *)(param_1 + 0x60) = uVar10;
LAB_ram_42034efc:
        if ((9 < (DAT_ram_3fcb512d - 4 & 0xff)) ||
           ((-0x242 >> (DAT_ram_3fcb512d - 4 & 0x1f) & 1U) != 0)) {
          uVar8 = 0x3c07aeac;
          goto LAB_ram_42035104;
        }
      }
      if (DAT_ram_3fcb512d != 0xf) {
        if (DAT_ram_3fcb512d == 0x12) {
          return '\0';
        }
LAB_ram_42034fac:
        if ((iVar16 != 0) || (uVar10 = 1, iVar15 != 0)) {
          FUN_ram_42033fd8(1,8,4,0x3c07af28,iVar16,iVar15);
          uVar10 = 0;
        }
        if (DAT_ram_3fcb51c3 == '\0') {
          DAT_ram_3fcb5133 = uVar10;
          return '\x01';
        }
        DAT_ram_3fcb5133 = uVar10;
        if ((_DAT_ram_3fcb50ec != 0) && ((uVar13 == 0x10 || ((uVar14 & 0x40) == 0)))) {
          FUN_ram_42033fd8(1,4,4,0x3c07af50);
          DAT_ram_3fcb3fe1 = 1;
          return '\0';
        }
        if ((byte)(*(char *)(param_1 + 0x60) - 6U) < 2) {
          return DAT_ram_3fcb51c3;
        }
        FUN_ram_42033fd8(1,4,4,0x3c07afa8);
        DAT_ram_3fcb3fe1 = 1;
        return '\0';
      }
      if (*(char *)(*(int *)(gp + -0x2b8) + 0x415) != '\0') goto LAB_ram_42034fac;
      *(undefined1 *)(param_1 + 0x6c) = 1;
      uVar8 = 0x3c07aefc;
      goto LAB_ram_42034a3e;
    }
LAB_ram_42034cb2:
    uVar8 = 0x3c07dfdc;
    uVar9 = 3;
    uVar7 = 0x20;
  }
  else {
    if (uVar13 - 3 < 3) {
      uVar9 = 0x3c072674;
      uVar8 = 0x3c07ac40;
      goto LAB_ram_42034a18;
    }
    uVar14 = FUN_ram_42034106(iVar15 + 4,&uStack_31);
    if ((uVar14 & 0xffffffdf) == 0) goto LAB_ram_42034a96;
    DAT_ram_3fcb5130 = (char)uVar14;
    if (uVar13 == 6) {
      uVar8 = 0x3c07ac54;
      goto LAB_ram_42034a52;
    }
    if (uVar13 == 7) {
      uVar9 = 0x3c072688;
      uVar8 = 0x3c07ac68;
      goto LAB_ram_42034a18;
    }
    uVar2 = *(ushort *)(iVar15 + 8);
    iVar16 = uVar13 - 8;
    puVar17 = (ushort *)(iVar15 + 10);
    if (uVar2 == 0) {
      iVar15 = 1;
      if (iVar16 != 0) goto LAB_ram_420350f0;
      uVar8 = 0x3c07ac7c;
LAB_ram_42034aec:
      FUN_ram_42033fd8(1,8,4,uVar8);
      uVar13 = 0;
      iVar16 = 1;
      goto LAB_ram_42034a62;
    }
    if ((0 < iVar16) && (iVar16 < 4)) {
      uVar9 = 0x3c0726a4;
      uVar8 = 0x3c07ac98;
      goto LAB_ram_42034a18;
    }
    DAT_ram_3fcb512e = ' ';
    uVar13 = 0;
    do {
      if (iVar16 < 1) break;
      iVar15 = FUN_ram_42034106(puVar17,&uStack_31);
      if ((iVar15 != 0x20) && (iVar6 = FUN_ram_420348b6(), iVar6 != 0)) {
        DAT_ram_3fcb512e = (char)iVar15;
      }
      uVar13 = uVar13 + 1;
      iVar16 = iVar16 + -4;
      puVar17 = puVar17 + 2;
    } while (uVar13 < uVar2);
    iVar15 = 0;
LAB_ram_420350f0:
    if (DAT_ram_3fcb512e != ' ') {
      if (iVar16 == 0) {
        uVar8 = 0x3c07acbc;
        goto LAB_ram_42034aec;
      }
      if (iVar16 == 1) {
        uVar9 = 0x3c0726bc;
        uVar8 = 0x3c07acd0;
        goto LAB_ram_42034a18;
      }
      iVar6 = iVar16 + -2;
      puVar11 = puVar17 + 1;
      if (*puVar17 == 0) {
        if (iVar6 == 0) {
          uVar8 = 0x3c07ace4;
          goto LAB_ram_42034aec;
        }
        uVar13 = 0;
        iVar16 = 1;
      }
      else {
        if ((0 < iVar6) && (iVar6 < 4)) {
          uVar9 = 0x3c0726cc;
          uVar8 = 0x3c07ad00;
          goto LAB_ram_42034a18;
        }
        DAT_ram_3fcb512d = 0x12;
        uVar13 = 0;
        for (uVar14 = 0;
            (puVar11 = (ushort *)((int)puVar17 + (iVar16 - iVar6)), 0 < iVar6 && (uVar14 < *puVar17)
            ); uVar14 = uVar14 + 1) {
          iVar3 = *(int *)puVar11;
          uVar5 = 0x20000;
          if (iVar3 != 0x29a6f50) {
            iVar4 = 6;
            if (iVar3 != 0x6ac0f00) {
              if (iVar3 < 0x6ac0f01) {
                iVar4 = 4;
                if (iVar3 != 0x4ac0f00) {
                  if (iVar3 < 0x4ac0f01) {
                    iVar4 = 1;
                    if (iVar3 != 0x1ac0f00) {
                      iVar4 = (uint)(iVar3 == 0x2ac0f00) << 1;
                    }
                  }
                  else {
                    iVar4 = 0;
                    if (iVar3 == 0x5ac0f00) {
                      iVar4 = 5;
                    }
                  }
                }
              }
              else {
                iVar4 = 0x12;
                if ((iVar3 != 0x12ac0f00) && (iVar4 = 0x18, iVar3 != 0x18ac0f00)) {
                  iVar4 = (uint)(iVar3 == 0x8ac0f00) << 3;
                }
              }
            }
            uVar5 = 0;
            if (iVar4 - 1U < 0x18) {
              uVar5 = *(uint *)((iVar4 - 1U) * 4 + 0x3c078c9c);
            }
          }
          uVar13 = uVar13 | uVar5;
          iVar6 = iVar6 + -4;
        }
        iVar16 = 0;
      }
      *(uint *)(param_1 + 0x70) = uVar13;
      if (iVar6 == 0) goto LAB_ram_42034a62;
      if (iVar6 == 1) {
        uVar9 = 0x3c0726d8;
        uVar8 = 0x3c07ad14;
        goto LAB_ram_42034a18;
      }
      uVar2 = *puVar11;
      uVar14 = (uint)uVar2;
      if (iVar6 != 2) {
        if (iVar6 == 3) {
          uVar9 = 0x3c0726dc;
          uVar8 = 0x3c07ad28;
LAB_ram_42034a18:
          FUN_ram_42033fd8(1,8,4,uVar8,uVar9);
          return '\0';
        }
        iVar6 = iVar6 + -4;
        uVar5 = (uint)puVar11[1];
        if ((0 < iVar6) && (iVar6 < (int)(uVar5 * 0x10))) {
          uVar9 = 0x3c0726e8;
          uVar8 = 0x3c07ad3c;
          goto LAB_ram_42034a18;
        }
        if (iVar6 != uVar5 * 0x10) {
          if ((iVar6 + uVar5 * -0x10) - 1 < 3) {
            uVar9 = 0x3c0726f4;
            uVar8 = 0x3c07ad50;
            goto LAB_ram_42034a18;
          }
          iVar6 = FUN_ram_42034106(puVar11 + uVar5 * 8 + 2,&uStack_31);
          if ((iVar6 != 9) && (1 < iVar6 - 0xdU)) {
            FUN_ram_42033fd8(1,0x20,2,0x3c07f6c8);
            *(undefined1 *)(param_1 + 0x6c) = 1;
            return '\0';
          }
          DAT_ram_3fcb5136 = (undefined1)iVar6;
        }
      }
      if (cVar1 == '\0') {
        if ((uVar2 & 0x40) != 0) goto LAB_ram_42034a96;
      }
      else if (cVar12 == '\0') {
        if ((uVar2 & 0x80) != 0) goto LAB_ram_42034cca;
      }
      else {
        if ((uVar2 & 0x80) == 0) goto LAB_ram_42034cb2;
LAB_ram_42034cca:
        if ((DAT_ram_3fcb512e == '\x03') || ((byte)(DAT_ram_3fcb512e - 0xbU) < 2)) {
          _DAT_ram_3fcb5134 = 1;
        }
        else {
          if (((DAT_ram_3fcb5130 != '\x03') && (1 < (byte)(DAT_ram_3fcb5130 - 0xbU))) &&
             (((uVar13 - 0x8000 & 0xffff7fff) == 0 || ((uVar13 & 0xfffeffff) == 0x200)))) {
            uVar8 = 0x3c07f6ec;
            uVar7 = 2;
            uVar9 = 0x20;
            goto LAB_ram_42034d1c;
          }
          FUN_ram_42033fd8(1,0x20,2,0x3c07f734);
          _DAT_ram_3fcb5134 = 0;
        }
      }
      goto LAB_ram_42034d3c;
    }
    uVar8 = 0x3c07acac;
LAB_ram_42035104:
    uVar9 = 4;
    uVar7 = 8;
  }
  FUN_ram_42033fd8(1,uVar7,uVar9,uVar8);
LAB_ram_42034a96:
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return '\0';
}

