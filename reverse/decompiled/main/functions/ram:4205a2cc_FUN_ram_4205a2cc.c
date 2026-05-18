
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205a2cc(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 extraout_a2;
  undefined1 uVar6;
  int iVar7;
  int extraout_a3;
  uint uVar8;
  byte bVar9;
  int iVar10;
  uint extraout_a5;
  uint uVar11;
  uint extraout_a6;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined2 uStack_22;
  
  piVar2 = (int *)_DAT_ram_3fcc52d8;
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = piVar2[8];
    if ((iVar1 != 0) && (uVar8 = (uint)*(byte *)(iVar1 + 5), uVar8 != 0)) {
      if (*(int *)(iVar1 + 0x24) != 0) {
        iVar10 = *(int *)(iVar1 + 0x20) + 1;
        *(int *)(iVar1 + 0x20) = iVar10;
        if (*(int *)(iVar1 + 0x24) == iVar10) {
          FUN_ram_4205a190(piVar2);
          FUN_ram_42059efc(piVar2);
          goto LAB_ram_4205a322;
        }
      }
      iVar10 = *(int *)(iVar1 + 0x1c);
      if (iVar10 != 0) {
        *(int *)(iVar1 + 0x1c) = iVar10 + -1;
        if (iVar10 == 1) {
          if ((10 < uVar8) || ((0x432U >> (uVar8 & 0x1f) & 1) == 0)) goto LAB_ram_4205a322;
          FUN_ram_42058e08(iVar1,4);
          iVar10 = FUN_ram_420591cc(piVar2,iVar1,3,&uStack_22);
          if (iVar10 != 0) {
            iVar13 = *(int *)(iVar10 + 4);
            iVar12 = iVar13 + 0xf0;
            uVar3 = FUN_ram_42058e58(uStack_22,iVar12,0x39,2);
            uStack_22 = (undefined2)uVar3;
            uVar3 = FUN_ram_42058e1e(uVar3,iVar12,*(undefined2 *)(piVar2 + 0xc));
            uStack_22 = (undefined2)uVar3;
            uVar8 = FUN_ram_42058e58(uVar3,iVar12,0x37,4);
            uStack_22 = (undefined2)uVar8;
            iVar14 = 0;
            puVar5 = &DAT_ram_3c0f7000;
            uVar11 = 0x44;
            iVar7 = 4;
            do {
              uVar15 = CONCAT44(puVar5,uVar8) & 0xffffffff0000ffff;
              uVar6 = puVar5[iVar14 + 0x588];
              if (uVar11 < (uVar8 & 0xffff)) {
                uVar15 = FUN_ram_4039bf1e();
                iVar7 = extraout_a3;
                uVar8 = extraout_a5;
                uVar11 = extraout_a6;
                uVar6 = extraout_a2;
              }
              puVar5 = (undefined *)(uVar15 >> 0x20);
              uVar4 = (int)uVar15 + 1;
              *(undefined1 *)(iVar13 + uVar8 + 0xf0) = uVar6;
              uStack_22 = (undefined2)(uVar4 * 0x10000 >> 0x10);
              iVar14 = iVar14 + 1;
              uVar8 = uVar8 + 1;
            } while (iVar14 != iVar7);
            uStack_22 = FUN_ram_42059468(uVar4 & 0xffff,iVar12,piVar2[0xb]);
            FUN_ram_4205c572(piVar2,iVar14,iVar13,&uStack_22);
            FUN_ram_42058eee(uStack_22,iVar12,iVar10);
            FUN_ram_42058bf0(_DAT_ram_3fcc5340,iVar10,&DAT_ram_3c0f758c,0x43,piVar2);
            FUN_ram_42053ac4(iVar10);
          }
          if (*(char *)(iVar1 + 6) == -1) {
LAB_ram_4205a444:
            uVar8 = 10000;
          }
          else {
            bVar9 = *(char *)(iVar1 + 6) + 1;
            *(byte *)(iVar1 + 6) = bVar9;
            if (9 < bVar9) goto LAB_ram_4205a444;
            uVar8 = (uint)bVar9 * 0x3e80000 >> 0x10;
          }
          *(uint *)(iVar1 + 0xc) = (uVar8 + 499 & 0xffff) / 500;
          if (*(char *)(iVar1 + 8) == '\0') {
            FUN_ram_420585b0(500,0x4204a58e,piVar2);
            *(undefined1 *)(iVar1 + 8) = 1;
          }
          uVar8 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
          if (5 < uVar8) {
            *(uint *)(iVar1 + 0x1c) = uVar8 >> 1;
          }
          goto LAB_ram_4205a322;
        }
      }
      iVar10 = *(int *)(iVar1 + 0x18);
      if (iVar10 != 0) {
        *(int *)(iVar1 + 0x18) = iVar10 + -1;
        if (((iVar10 == 1) && (uVar8 < 0xb)) && ((0x422U >> (uVar8 & 0x1f) & 1) != 0)) {
          FUN_ram_42059ff2(piVar2);
          uVar8 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x20);
          if (5 < uVar8) {
            *(uint *)(iVar1 + 0x18) = uVar8 >> 1;
          }
        }
      }
    }
LAB_ram_4205a322:
    piVar2 = (int *)*piVar2;
  } while( true );
}

