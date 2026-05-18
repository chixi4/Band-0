
void FUN_ram_42050aa6(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar9 = 0;
  if (param_1 != (undefined4 *)0x0) goto LAB_ram_42050ac2;
LAB_ram_42050aba:
  param_1 = (undefined4 *)FUN_ram_4039bf1e(iVar9,param_2);
LAB_ram_42050ac2:
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
  uVar11 = FUN_ram_4205c5e2(piVar2,iVar9,iVar1,piVar7,uVar8,&uStack_2c);
  if ((int)uVar11 != 0) goto LAB_ram_42050af4;
  if (iVar9 == 6) {
    if (((3 < uVar8) && (puVar6 = (uint *)*piVar2, puVar6 != (uint *)0x0)) &&
       (uVar8 = puVar6[2], uVar8 != 0)) {
      if ((*puVar6 & 0xf0) != 0x10) goto LAB_ram_42050bf6;
      if (*(int *)(uVar8 + 0x14) != 1) {
        if (iVar1 == 3) {
          iVar9 = *piVar7 * 1000;
LAB_ram_42050eb4:
          *(int *)(uVar8 + 0x98) = iVar9;
          goto LAB_ram_42050af4;
        }
        if (3 < iVar1) {
          if (iVar1 == 4) {
            *(int *)(uVar8 + 0x9c) = *piVar7 * 1000;
          }
          else {
            if (iVar1 != 5) goto LAB_ram_42050b72;
            *(int *)(uVar8 + 0xa0) = *piVar7;
          }
          goto LAB_ram_42050af4;
        }
        if (iVar1 == 1) {
          if (*piVar7 == 0) {
            uVar3 = *(ushort *)(uVar8 + 0x1e) & 0xffbf;
          }
          else {
            uVar3 = *(ushort *)(uVar8 + 0x1e) | 0x40;
          }
          *(ushort *)(uVar8 + 0x1e) = uVar3;
          goto LAB_ram_42050af4;
        }
        if (iVar1 == 2) {
          iVar9 = *piVar7;
          goto LAB_ram_42050eb4;
        }
        goto LAB_ram_42050b72;
      }
    }
  }
  else if (iVar9 == 0xfff) {
    if (iVar1 == 0x1006) {
      if (((uVar8 < 0x10) || (*piVar2 == 0)) ||
         (iVar9 = *piVar7 * 1000 + piVar7[2] / 1000, iVar9 < 0)) goto LAB_ram_42050c30;
      *(int *)(*piVar2 + 0x24) = iVar9;
      goto LAB_ram_42050af4;
    }
    iVar9 = 0;
    if (0x1006 < iVar1) {
      if (iVar1 == 0x100a) {
        if (((uVar8 < 4) || (puVar6 = (uint *)*piVar2, puVar6 == (uint *)0x0)) ||
           (uVar8 = puVar6[2], uVar8 == 0)) goto LAB_ram_42050c30;
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
      if (iVar1 != 0x100b) goto LAB_ram_42050b72;
      if ((uVar8 < 6) || (*piVar2 == 0)) goto LAB_ram_42050c30;
      iVar9 = 0;
      if (((char)*piVar7 != '\0') && (iVar9 = FUN_ram_4205344c(piVar7), iVar9 == 0)) {
        FUN_ram_4205027e(piVar2);
        uVar10 = 0x13;
        goto LAB_ram_42050c00;
      }
      puVar6 = (uint *)*piVar2;
      uVar8 = *puVar6 & 0xf0;
      if (uVar8 == 0x20) {
        FUN_ram_42058cd2(puVar6[2]);
        goto LAB_ram_42050af4;
      }
      if (uVar8 == 0x40) {
        FUN_ram_42054222(puVar6[2]);
        goto LAB_ram_42050af4;
      }
      param_2 = iVar9;
      if (uVar8 == 0x10) goto code_r0x42050cd6;
      goto LAB_ram_42050aba;
    }
    if (0x20 < iVar1) {
      if (iVar1 == 0x1005) {
        if (((uVar8 < 0x10) || (*piVar2 == 0)) ||
           (iVar9 = *piVar7 * 1000 + piVar7[2] / 1000, iVar9 < 0)) goto LAB_ram_42050c30;
        *(int *)(*piVar2 + 0x20) = iVar9;
        goto LAB_ram_42050af4;
      }
LAB_ram_42050b72:
      uVar10 = 0x6d;
      goto LAB_ram_42050b76;
    }
    if ((iVar1 < 4) || ((0x10000011U >> (iVar1 - 4U & 0x1f) & 1) == 0)) goto LAB_ram_42050b72;
    if (iVar1 == 0x20) {
      if ((*(uint *)*piVar2 & 0xf0) != 0x20) goto LAB_ram_42050bf6;
    }
    else if ((iVar1 != 4) && (param_2 = (int)((ulonglong)uVar11 >> 0x20), iVar1 != 8))
    goto LAB_ram_42050aba;
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
        if (((3 < uVar8) && (*piVar2 != 0)) && (iVar9 = *(int *)(*piVar2 + 8), iVar9 != 0)) {
          *(char *)(iVar9 + 0xb) = (char)*piVar7;
          goto LAB_ram_42050af4;
        }
      }
      else {
        if (2 < iVar1) {
          if (((uVar8 < 8) || (puVar6 = (uint *)*piVar2, puVar6 == (uint *)0x0)) || (puVar6[2] == 0)
             ) goto LAB_ram_42050c30;
          if ((*puVar6 & 0xf0) != 0x20) goto LAB_ram_42050bf6;
          iStack_28 = piVar7[1];
          iStack_24 = *piVar7;
          if (iVar1 != 3) {
            iVar9 = FUN_ram_4205b718(&iStack_28,&iStack_24);
            iVar1 = FUN_ram_4205032e(uVar10);
            if (iVar1 == 0) goto LAB_ram_42050d54;
            piVar7 = (int *)&DAT_ram_3fcc1fa4;
            iVar4 = 0;
            goto LAB_ram_42050e3a;
          }
          iVar9 = FUN_ram_4205032e(uVar10);
          if (iVar9 == 0) goto LAB_ram_42050e12;
          piVar7 = (int *)&DAT_ram_3fcc1fa4;
          iVar1 = 0;
          goto LAB_ram_42050d32;
        }
        if (iVar1 != 1) goto LAB_ram_42050b72;
        if (((3 < uVar8) && (*piVar2 != 0)) && (iVar9 = *(int *)(*piVar2 + 8), iVar9 != 0)) {
          *(char *)(iVar9 + 10) = (char)*piVar7;
          goto LAB_ram_42050af4;
        }
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
LAB_ram_42050c30:
  FUN_ram_4205027e(piVar2);
  uVar10 = 0x16;
  goto LAB_ram_42050c00;
code_r0x42050cd6:
  FUN_ram_420546a4(puVar6[2]);
  goto LAB_ram_42050af4;
  while( true ) {
    iVar1 = iVar1 + 1;
    piVar7 = piVar7 + 3;
    if (iVar1 == 0xc) break;
LAB_ram_42050d32:
    if (*piVar7 == 0) {
      iVar1 = iVar1 * 0xc;
      *(int *)(&DAT_ram_3fcc1fa4 + iVar1) = iVar9;
      *(int *)(&DAT_ram_3fcc1fa8 + iVar1) = iStack_28;
      *(int *)(&DAT_ram_3fcc1fac + iVar1) = iStack_24;
      FUN_ram_4205027e();
      iVar9 = FUN_ram_4205b614(&iStack_28,&iStack_24);
      goto LAB_ram_42050d54;
    }
  }
  FUN_ram_4205027e();
LAB_ram_42050e12:
  uVar10 = 0xc;
  goto LAB_ram_42050b76;
  while( true ) {
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 3;
    if (iVar4 == 0xc) break;
LAB_ram_42050e3a:
    if (((iVar1 == *piVar7) && (piVar7[1] == iStack_28)) && (piVar7[2] == iStack_24)) {
      iVar4 = iVar4 * 0xc;
      *(undefined4 *)(&DAT_ram_3fcc1fa4 + iVar4) = 0;
      *(undefined4 *)(&DAT_ram_3fcc1fa8 + iVar4) = 0;
      *(undefined4 *)(&DAT_ram_3fcc1fac + iVar4) = 0;
      break;
    }
  }
  FUN_ram_4205027e();
LAB_ram_42050d54:
  uVar10 = 0x7d;
  if (iVar9 == 0) goto LAB_ram_42050af4;
LAB_ram_42050b76:
  uStack_2c = uVar10;
LAB_ram_42050af4:
  FUN_ram_4205027e(piVar2);
  uVar10 = uStack_2c;
LAB_ram_42050c00:
  param_1[5] = uVar10;
  FUN_ram_4205c6fa(param_1[6]);
  return;
}

