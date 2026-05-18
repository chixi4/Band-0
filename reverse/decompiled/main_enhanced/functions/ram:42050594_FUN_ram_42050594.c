
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42050594(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint unaff_s0;
  uint unaff_s1;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int unaff_s9;
  int *piVar12;
  
  if (unaff_s1 == 2) {
    sVar1 = *(short *)(unaff_s9 + 10);
    *(undefined2 *)(unaff_s9 + 10) = 1;
    bVar4 = sVar1 == 0;
  }
  else {
    if (unaff_s1 < 3) {
      if (unaff_s1 == 0) {
        iVar7 = (*(ushort *)(unaff_s9 + 8) + 1) * 0x10000;
        *(short *)(unaff_s9 + 8) = (short)((uint)iVar7 >> 0x10);
        bVar4 = iVar7 >> 0x10 < 2;
        goto LAB_ram_420505d0;
      }
      *(ushort *)(unaff_s9 + 8) = *(ushort *)(unaff_s9 + 8) - 1;
    }
    else {
      if (unaff_s1 != 3) {
        if (unaff_s1 != 4) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf1e();
        }
        bVar4 = true;
        *(undefined2 *)(unaff_s9 + 0xc) = 1;
        goto LAB_ram_420505d0;
      }
      *(undefined2 *)(unaff_s9 + 10) = 0;
    }
    bVar4 = false;
  }
LAB_ram_420505d0:
  if ((*(char *)(unaff_s9 + 0xe) == '\0') || (!bVar4)) {
    FUN_ram_4205c996();
  }
  else {
    sVar1 = *(short *)(unaff_s9 + 8);
    sVar2 = *(short *)(unaff_s9 + 10);
    sVar3 = *(short *)(unaff_s9 + 0xc);
    FUN_ram_4205c996();
    iVar7 = FUN_ram_420500ca();
    uVar8 = FUN_ram_4205c96c();
    piVar6 = _DAT_ram_3fcc52ac;
    while (piVar12 = piVar6, iVar5 = _DAT_ram_3fcc52b0, piVar12 != (int *)0x0) {
      if (piVar12[7] == 0) {
        puVar9 = (uint *)piVar12[5];
        if (puVar9 == (uint *)0x0) {
          iVar10 = (int)unaff_s0 >> 5;
          uVar11 = 0;
          if (((*(short *)(iVar7 + 8) != 0) && (piVar12[2] != 0)) && ((int)unaff_s0 < 0x40)) {
            uVar11 = (uint)((1 << (unaff_s0 & 0x1f) & *(uint *)(piVar12[2] + iVar10 * 4)) != 0);
          }
          if (((*(short *)(iVar7 + 10) != 0) && (uVar11 == 0)) &&
             ((piVar12[3] != 0 && ((int)unaff_s0 < 0x40)))) {
            uVar11 = (uint)((1 << (unaff_s0 & 0x1f) & *(uint *)(piVar12[3] + iVar10 * 4)) != 0);
          }
          if (*(short *)(iVar7 + 0xc) == 0) {
LAB_ram_4205073c:
            if (uVar11 == 0) goto LAB_ram_4205067a;
          }
          else if (uVar11 == 0) {
            if ((piVar12[4] == 0) || (0x3f < (int)unaff_s0)) goto LAB_ram_4205067a;
            uVar11 = 1 << (unaff_s0 & 0x1f) & *(uint *)(iVar10 * 4 + piVar12[4]);
            goto LAB_ram_4205073c;
          }
LAB_ram_4205073e:
          piVar12[7] = 1;
          FUN_ram_4205c6fa(piVar12[8]);
        }
        else {
          for (iVar10 = 0; iVar10 != piVar12[6]; iVar10 = iVar10 + 1) {
            if ((unaff_s0 == *puVar9) &&
               ((((0 < sVar1 && ((puVar9[1] & 1) != 0)) || ((sVar2 != 0 && ((puVar9[1] & 8) != 0))))
                || (sVar3 != 0)))) goto LAB_ram_4205073e;
            puVar9 = puVar9 + 2;
          }
        }
      }
LAB_ram_4205067a:
      FUN_ram_4205c996(uVar8);
      uVar8 = FUN_ram_4205c96c();
      piVar6 = _DAT_ram_3fcc52ac;
      if (_DAT_ram_3fcc52b0 == iVar5) {
        piVar6 = (int *)*piVar12;
      }
    }
    FUN_ram_4205c996(uVar8);
    FUN_ram_4205027e(iVar7);
  }
  FUN_ram_4205027e();
  return;
}

