
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42059a18(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int unaff_s0;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *unaff_s3;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iStack00000008;
  uint in_stack_0000002c;
  
  if ((((unaff_s3 != (int *)0x0) && ((char)unaff_s3[1] != '\0')) &&
      (0x2b < *(ushort *)((int)param_3 + 10))) && (pcVar8 = (char *)param_3[1], *pcVar8 == '\x02'))
  {
    uVar17 = 0;
    do {
      if (((uint)*(byte *)(unaff_s0 + 0x38) <= (uVar17 & 0xff)) || (uVar17 == 6)) {
        iVar3 = FUN_ram_420523b8(*(undefined4 *)(pcVar8 + 4));
        if (iVar3 == *unaff_s3) {
          _DAT_ram_3fcc2540 = 0;
          _DAT_ram_3fcc2544 = 0;
          _DAT_ram_3fcc2548 = 0;
          DAT_ram_3fcc254a = 0;
          if (0x2b < *(ushort *)((int)param_3 + 10)) {
            uVar17 = (uint)*(ushort *)(param_3 + 2);
            bVar2 = false;
            uVar13 = 0xf0;
            piVar16 = param_3;
            uVar14 = uVar13;
            goto LAB_ram_42059ab4;
          }
        }
        break;
      }
      iVar12 = unaff_s0 + uVar17;
      iVar3 = uVar17 + 0x1c;
      uVar17 = uVar17 + 1;
    } while (pcVar8[iVar3] == *(char *)(iVar12 + 0x32));
  }
LAB_ram_42059b58:
  FUN_ram_42053ac4(param_3);
  return;
LAB_ram_42059ab4:
  if (piVar16 != (int *)0x0) {
    uVar9 = (uint)*(ushort *)((int)piVar16 + 10);
    if (uVar13 < uVar9) {
      iStack00000008 = piVar16[1];
LAB_ram_42059acc:
      uVar5 = _DAT_ram_3fcc2554;
      if (uVar17 <= uVar13) goto LAB_ram_42059ae2;
      bVar1 = *(byte *)(iStack00000008 + uVar13);
      if (bVar1 == 0xff) goto LAB_ram_42059ae2;
      uVar9 = uVar13 + 2 & 0xffff;
      if (uVar9 < uVar13) goto LAB_ram_42059b58;
      uVar10 = uVar13 + 1;
      if (uVar10 < *(ushort *)((int)piVar16 + 10)) {
        bVar7 = ((byte *)(iStack00000008 + uVar13))[1];
LAB_ram_42059bb4:
        uVar15 = (uint)bVar7;
        uVar11 = uVar15;
        if (bVar1 == 0x33) {
          if (uVar15 != 4) goto LAB_ram_42059b58;
          uVar10 = 3;
        }
        else if (bVar1 < 0x34) {
          if (bVar1 == 1) {
            if (uVar15 == 4) {
              uVar10 = 6;
              goto LAB_ram_42059c8e;
            }
            goto LAB_ram_42059b58;
          }
          if (bVar1 < 2) goto LAB_ram_42059c44;
          if (bVar1 != 3) {
            if (bVar1 != 6) goto LAB_ram_42059bd6;
            if ((bVar7 & 3) == 0) goto LAB_ram_42059cba;
            goto LAB_ram_42059b58;
          }
          if (uVar15 < 4) goto LAB_ram_42059b58;
          uVar11 = 4;
          uVar10 = 7;
        }
        else if (bVar1 == 0x36) {
          if (uVar15 != 4) goto LAB_ram_42059b58;
          uVar10 = 2;
        }
        else if (bVar1 < 0x37) {
          uVar6 = 1;
          if (bVar1 == 0x34) {
            if ((uVar15 != 1) || (uVar14 != 0xf0)) goto LAB_ram_42059b58;
            uVar10 = 0;
          }
          else {
LAB_ram_42059cea:
            uVar10 = uVar15;
            if (uVar15 != uVar6) goto LAB_ram_42059b58;
          }
        }
        else {
          if (bVar1 == 0x3a) {
            uVar6 = 4;
            goto LAB_ram_42059cea;
          }
          if (bVar1 != 0x3b) goto LAB_ram_42059bd6;
          if (uVar15 != 4) goto LAB_ram_42059b58;
          uVar10 = 5;
        }
      }
      else {
        if (*piVar16 != 0) {
          bVar7 = **(byte **)(*piVar16 + 4);
          goto LAB_ram_42059bb4;
        }
        if (bVar1 == 0x34) goto LAB_ram_42059b58;
        if (bVar1 < 0x35) {
          if (bVar1 == 3) goto LAB_ram_42059b58;
          if (3 < bVar1) {
            if (bVar1 != 6) {
              bVar7 = 0x33;
              goto LAB_ram_42059e9a;
            }
            uVar15 = 0;
LAB_ram_42059cba:
            uVar11 = uVar15;
            if (0xc < uVar15) {
              uVar11 = 0xc;
            }
            uVar10 = 8;
            goto LAB_ram_42059c8e;
          }
          if (bVar1 != 0) {
            bVar7 = 1;
            goto LAB_ram_42059e9a;
          }
          goto LAB_ram_42059c44;
        }
        if (bVar1 == 0x3a) goto LAB_ram_42059b58;
        if (bVar1 < 0x3b) {
          if (bVar1 == 0x35) goto LAB_ram_42059b58;
          bVar7 = 0x36;
        }
        else {
          bVar7 = 0x3b;
        }
LAB_ram_42059e9a:
        if (bVar1 == bVar7) goto LAB_ram_42059b58;
        uVar15 = 0;
LAB_ram_42059bd6:
        FUN_ram_4205c504();
        uVar11 = 0;
        uVar10 = 0xffffffff;
      }
LAB_ram_42059c8e:
      if (0xfffd < uVar13 + uVar15) goto LAB_ram_42059b58;
      if (uVar11 != 0) {
        in_stack_0000002c = 0;
        pcVar8 = &DAT_ram_3fcc2540 + uVar10;
        uVar13 = uVar9;
        while( true ) {
          if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4039bf1e();
          }
          if (*pcVar8 != '\0') goto LAB_ram_42059d8c;
          uVar6 = uVar11;
          if (4 < uVar11) {
            uVar6 = 4;
          }
          uVar4 = FUN_ram_42053f22(piVar16,&stack0x0000002c);
          if (uVar6 != uVar4) goto LAB_ram_42059b58;
          if (uVar11 < 5) break;
          if ((uVar11 & 3) != 0) goto LAB_ram_42059b58;
          *pcVar8 = '\x01';
          uVar5 = FUN_ram_420523b8(in_stack_0000002c);
          *(undefined4 *)(&DAT_ram_3fcc254c + uVar10 * 4) = uVar5;
          uVar6 = uVar13 + 4 & 0xffff;
          uVar11 = uVar11 - 4 & 0xff;
          pcVar8 = pcVar8 + 1;
          if (uVar6 < uVar13) goto LAB_ram_42059b58;
          uVar10 = uVar10 + 1;
          uVar13 = uVar6;
        }
        if (uVar11 == 4) {
          uVar13 = FUN_ram_420523b8(in_stack_0000002c);
        }
        else {
          uVar13 = in_stack_0000002c & 0xff;
        }
        (&DAT_ram_3fcc2540)[uVar10] = 1;
        *(uint *)(&DAT_ram_3fcc254c + uVar10 * 4) = uVar13;
      }
LAB_ram_42059d8c:
      uVar10 = uVar15 + uVar9;
LAB_ram_42059c44:
      uVar9 = (uint)*(ushort *)((int)piVar16 + 10);
      uVar13 = uVar10 & 0xffff;
      if (uVar9 <= uVar13) {
        uVar13 = uVar13 - uVar9 & 0xffff;
        uVar17 = uVar17 - uVar9 & 0xffff;
        if ((uVar17 <= uVar13) || (piVar16 = (int *)*piVar16, piVar16 == (int *)0x0))
        goto LAB_ram_42059b58;
        iStack00000008 = piVar16[1];
      }
      goto LAB_ram_42059acc;
    }
    uVar13 = uVar13 - uVar9 & 0xffff;
    uVar17 = uVar17 - uVar9 & 0xffff;
    piVar16 = (int *)*piVar16;
    goto LAB_ram_42059ab4;
  }
  goto LAB_ram_42059b58;
LAB_ram_42059ae2:
  if (DAT_ram_3fcc2540 != '\0') {
    _DAT_ram_3fcc2540 = _DAT_ram_3fcc2540 & 0xffffff00;
    if (_DAT_ram_3fcc254c == 1) {
LAB_ram_42059dc6:
      uVar17 = 0xec;
      uVar13 = 0x6c;
      piVar16 = param_3;
      uVar14 = uVar13;
      goto LAB_ram_42059ab4;
    }
    if (_DAT_ram_3fcc254c == 2) goto LAB_ram_42059db2;
    if (_DAT_ram_3fcc254c == 3) {
      bVar2 = true;
      goto LAB_ram_42059dc6;
    }
  }
  if (!bVar2) {
    if (DAT_ram_3fcc2541 == '\0') goto LAB_ram_42059b58;
    iVar3 = param_3[1];
    if (DAT_ram_3fcc2550 != '\x05') {
      if (DAT_ram_3fcc2550 == '\x06') {
        if (((byte)(*(char *)((int)unaff_s3 + 5) - 3U) < 3) ||
           (*(char *)((int)unaff_s3 + 5) == '\x01')) {
          FUN_ram_42058e08(*(undefined4 *)(unaff_s0 + 0x20),0xc);
          FUN_ram_42053552();
          FUN_ram_4205968c();
        }
      }
      else if (((DAT_ram_3fcc2550 == '\x02') && (*(char *)((int)unaff_s3 + 5) == '\x06')) &&
              (DAT_ram_3fcc2542 != '\0')) {
        iVar12 = *(int *)(unaff_s0 + 0x20);
        *(undefined4 *)(iVar12 + 0xc) = 0;
        uVar5 = FUN_ram_420523b8(uVar5);
        *(undefined4 *)(iVar12 + 0x28) = uVar5;
        *(undefined4 *)(iVar12 + 0x2c) = *(undefined4 *)(iVar3 + 0x10);
        FUN_ram_42059812();
      }
      goto LAB_ram_42059b58;
    }
    if ((*(byte *)((int)unaff_s3 + 5) & 0xfd) == 1) {
      FUN_ram_420590c8(*(undefined4 *)(unaff_s0 + 0x20));
      if ((*(byte *)(unaff_s0 + 0x39) & 8) != 0) {
        FUN_ram_42058e08(*(undefined4 *)(unaff_s0 + 0x20),8);
        FUN_ram_4205cbea();
        goto LAB_ram_42059b58;
      }
    }
    else {
      if (1 < (byte)(*(byte *)((int)unaff_s3 + 5) - 4)) goto LAB_ram_42059b58;
      FUN_ram_420590c8(*(undefined4 *)(unaff_s0 + 0x20));
    }
    FUN_ram_42058f36();
    goto LAB_ram_42059b58;
  }
LAB_ram_42059db2:
  bVar2 = false;
  uVar17 = 0x6c;
  uVar13 = 0x2c;
  piVar16 = param_3;
  uVar14 = uVar13;
  goto LAB_ram_42059ab4;
}

