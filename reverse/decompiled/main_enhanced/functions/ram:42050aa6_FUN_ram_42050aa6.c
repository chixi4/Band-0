
void FUN_ram_42050aa6(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (param_1 == (undefined4 *)0x0) {
LAB_ram_42050aba:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar10 = *param_1;
  iVar9 = param_1[1];
  iVar1 = param_1[2];
  piVar7 = (int *)param_1[3];
  uVar8 = param_1[4];
  uStack_2c = 0;
  piVar2 = (int *)FUN_ram_4205030e(uVar10);
  if (piVar2 == (int *)0x0) {
    uVar10 = 9;
    goto LAB_ram_42050c00;
  }
  iVar3 = FUN_ram_4205c5e2(piVar2,iVar9,iVar1,piVar7,uVar8,&uStack_2c);
  if (iVar3 != 0) goto LAB_ram_42050af4;
  if (iVar9 == 6) {
    if (((3 < uVar8) && (puVar6 = (uint *)*piVar2, puVar6 != (uint *)0x0)) &&
       (uVar8 = puVar6[2], uVar8 != 0)) {
      if ((*puVar6 & 0xf0) != 0x10) goto LAB_ram_42050bf6;
      if (*(int *)(uVar8 + 0x14) != 1) {
        if (iVar1 == 3) {
          iVar1 = *piVar7 * 1000;
LAB_ram_42050eb4:
          *(int *)(uVar8 + 0x98) = iVar1;
        }
        else if (iVar1 < 4) {
          if (iVar1 != 1) {
            if (iVar1 != 2) goto LAB_ram_42050b72;
            iVar1 = *piVar7;
            goto LAB_ram_42050eb4;
          }
          if (*piVar7 == 0) {
            uVar4 = *(ushort *)(uVar8 + 0x1e) & 0xffbf;
          }
          else {
            uVar4 = *(ushort *)(uVar8 + 0x1e) | 0x40;
          }
          *(ushort *)(uVar8 + 0x1e) = uVar4;
        }
        else if (iVar1 == 4) {
          *(int *)(uVar8 + 0x9c) = *piVar7 * 1000;
        }
        else {
          if (iVar1 != 5) goto LAB_ram_42050b72;
          *(int *)(uVar8 + 0xa0) = *piVar7;
        }
LAB_ram_42050af4:
        FUN_ram_4205027e(piVar2);
        uVar10 = uStack_2c;
        goto LAB_ram_42050c00;
      }
    }
  }
  else if (iVar9 == 0xfff) {
    if (iVar1 == 0x1006) {
      if (((0xf < uVar8) && (*piVar2 != 0)) &&
         (iVar1 = *piVar7 * 1000 + piVar7[2] / 1000, -1 < iVar1)) {
        *(int *)(*piVar2 + 0x24) = iVar1;
        goto LAB_ram_42050af4;
      }
    }
    else if (iVar1 < 0x1007) {
      if (iVar1 < 0x21) {
        if ((iVar1 < 4) || ((0x10000011U >> (iVar1 - 4U & 0x1f) & 1) == 0)) {
LAB_ram_42050b72:
          uVar10 = 0x6d;
LAB_ram_42050b76:
          uStack_2c = uVar10;
          goto LAB_ram_42050af4;
        }
        if (iVar1 == 0x20) {
          if ((*(uint *)*piVar2 & 0xf0) != 0x20) goto LAB_ram_42050bf6;
        }
        else if ((iVar1 != 4) && (iVar1 != 8)) goto LAB_ram_42050aba;
        if (((3 < uVar8) && (*piVar2 != 0)) && (iVar9 = *(int *)(*piVar2 + 8), iVar9 != 0)) {
          if (*piVar7 == 0) {
            bVar5 = *(byte *)(iVar9 + 9) & ~(byte)iVar1;
          }
          else {
            bVar5 = *(byte *)(iVar9 + 9) | (byte)iVar1;
          }
          *(byte *)(iVar9 + 9) = bVar5;
          goto LAB_ram_42050af4;
        }
      }
      else {
        if (iVar1 != 0x1005) goto LAB_ram_42050b72;
        if (((0xf < uVar8) && (*piVar2 != 0)) &&
           (iVar1 = *piVar7 * 1000 + piVar7[2] / 1000, -1 < iVar1)) {
          *(int *)(*piVar2 + 0x20) = iVar1;
          goto LAB_ram_42050af4;
        }
      }
    }
    else if (iVar1 == 0x100a) {
      if (((3 < uVar8) && (puVar6 = (uint *)*piVar2, puVar6 != (uint *)0x0)) &&
         (uVar8 = puVar6[2], uVar8 != 0)) {
        if ((*puVar6 & 0xf0) != 0x20) goto LAB_ram_42050bf6;
        if (*piVar7 == 0) {
          bVar5 = *(byte *)(uVar8 + 0x10) & 0xfe;
        }
        else {
          bVar5 = *(byte *)(uVar8 + 0x10) | 1;
        }
LAB_ram_42050cae:
        *(byte *)(uVar8 + 0x10) = bVar5;
        goto LAB_ram_42050af4;
      }
    }
    else {
      if (iVar1 != 0x100b) goto LAB_ram_42050b72;
      if ((5 < uVar8) && (*piVar2 != 0)) {
        iVar1 = 0;
        if (((char)*piVar7 != '\0') && (iVar1 = FUN_ram_4205344c(piVar7,0), iVar1 == 0)) {
          FUN_ram_4205027e(piVar2);
          uVar10 = 0x13;
          goto LAB_ram_42050c00;
        }
        puVar6 = (uint *)*piVar2;
        uVar8 = *puVar6 & 0xf0;
        if (uVar8 == 0x20) {
          FUN_ram_42058cd2(puVar6[2],iVar1);
        }
        else if (uVar8 == 0x40) {
          FUN_ram_42054222(puVar6[2]);
        }
        else {
          if (uVar8 != 0x10) goto LAB_ram_42050aba;
          FUN_ram_420546a4(puVar6[2]);
        }
        goto LAB_ram_42050af4;
      }
    }
  }
  else {
    if (iVar9 != 0) goto LAB_ram_42050b72;
    if (iVar1 == 5) {
      if (((uVar8 != 0) && (puVar6 = (uint *)*piVar2, puVar6 != (uint *)0x0)) && (puVar6[2] != 0)) {
        if ((*puVar6 & 0xf0) != 0x20) goto LAB_ram_42050bf6;
        *(char *)(puVar6[2] + 0x1d) = (char)*piVar7;
        goto LAB_ram_42050af4;
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 2) {
        if (((3 < uVar8) && (*piVar2 != 0)) && (iVar1 = *(int *)(*piVar2 + 8), iVar1 != 0)) {
          *(char *)(iVar1 + 0xb) = (char)*piVar7;
          goto LAB_ram_42050af4;
        }
      }
      else if (iVar1 < 3) {
        if (iVar1 != 1) goto LAB_ram_42050b72;
        if (((3 < uVar8) && (*piVar2 != 0)) && (iVar1 = *(int *)(*piVar2 + 8), iVar1 != 0)) {
          *(char *)(iVar1 + 10) = (char)*piVar7;
          goto LAB_ram_42050af4;
        }
      }
      else if (((7 < uVar8) && (puVar6 = (uint *)*piVar2, puVar6 != (uint *)0x0)) &&
              (puVar6[2] != 0)) {
        if ((*puVar6 & 0xf0) != 0x20) goto LAB_ram_42050bf6;
        iStack_28 = piVar7[1];
        iStack_24 = *piVar7;
        if (iVar1 == 3) {
          iVar1 = FUN_ram_4205032e(uVar10);
          if (iVar1 != 0) {
            piVar7 = (int *)&DAT_ram_3fcc1fa4;
            iVar9 = 0;
            do {
              if (*piVar7 == 0) {
                iVar9 = iVar9 * 0xc;
                *(int *)(&DAT_ram_3fcc1fa4 + iVar9) = iVar1;
                *(int *)(&DAT_ram_3fcc1fa8 + iVar9) = iStack_28;
                *(int *)(&DAT_ram_3fcc1fac + iVar9) = iStack_24;
                FUN_ram_4205027e();
                iVar1 = FUN_ram_4205b614(&iStack_28,&iStack_24);
                goto LAB_ram_42050d54;
              }
              iVar9 = iVar9 + 1;
              piVar7 = piVar7 + 3;
            } while (iVar9 != 0xc);
            FUN_ram_4205027e();
          }
          uVar10 = 0xc;
        }
        else {
          iVar1 = FUN_ram_4205b718(&iStack_28,&iStack_24);
          iVar9 = FUN_ram_4205032e(uVar10);
          if (iVar9 != 0) {
            piVar7 = (int *)&DAT_ram_3fcc1fa4;
            iVar3 = 0;
            do {
              if (((iVar9 == *piVar7) && (piVar7[1] == iStack_28)) && (piVar7[2] == iStack_24)) {
                iVar3 = iVar3 * 0xc;
                *(undefined4 *)(&DAT_ram_3fcc1fa4 + iVar3) = 0;
                *(undefined4 *)(&DAT_ram_3fcc1fa8 + iVar3) = 0;
                *(undefined4 *)(&DAT_ram_3fcc1fac + iVar3) = 0;
                break;
              }
              iVar3 = iVar3 + 1;
              piVar7 = piVar7 + 3;
            } while (iVar3 != 0xc);
            FUN_ram_4205027e();
          }
LAB_ram_42050d54:
          uVar10 = 0x7d;
          if (iVar1 == 0) goto LAB_ram_42050af4;
        }
        goto LAB_ram_42050b76;
      }
    }
    else if (iVar1 == 6) {
      if (((3 < uVar8) && (puVar6 = (uint *)*piVar2, puVar6 != (uint *)0x0)) && (puVar6[2] != 0)) {
        if ((*puVar6 & 0xf0) == 0x20) {
          *(int *)(puVar6[2] + 0x18) = *piVar7;
          goto LAB_ram_42050af4;
        }
LAB_ram_42050bf6:
        FUN_ram_4205027e(piVar2);
        uVar10 = 0x6d;
        goto LAB_ram_42050c00;
      }
    }
    else {
      if (iVar1 != 7) goto LAB_ram_42050b72;
      if (((uVar8 != 0) && (puVar6 = (uint *)*piVar2, puVar6 != (uint *)0x0)) &&
         (uVar8 = puVar6[2], uVar8 != 0)) {
        if ((*puVar6 & 0xf0) == 0x20) {
          if ((char)*piVar7 == '\0') {
            bVar5 = *(byte *)(uVar8 + 0x10) & 0xf7;
          }
          else {
            bVar5 = *(byte *)(uVar8 + 0x10) | 8;
          }
          goto LAB_ram_42050cae;
        }
        goto LAB_ram_42050bf6;
      }
    }
  }
  FUN_ram_4205027e(piVar2);
  uVar10 = 0x16;
LAB_ram_42050c00:
  param_1[5] = uVar10;
  FUN_ram_4205c6fa(param_1[6]);
  return;
}

