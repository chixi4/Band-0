
void FUN_ram_4204f540(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar11 = *param_1;
  iVar1 = param_1[2];
  piVar8 = (int *)param_1[3];
  uVar9 = param_1[4];
  iVar10 = param_1[1];
  uStack_2c = 0;
  piVar2 = (int *)FUN_ram_4204ed40(uVar11);
  uVar6 = 9;
  if (piVar2 == (int *)0x0) goto LAB_ram_4204f692;
  iVar3 = FUN_ram_420596da(piVar2,iVar10,iVar1,piVar8,uVar9,&uStack_2c);
  if (iVar3 != 0) goto LAB_ram_4204f586;
  if (iVar10 == 6) {
    if (((3 < uVar9) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
       (uVar9 = puVar7[2], uVar9 != 0)) {
      if ((*puVar7 & 0xf0) != 0x10) goto LAB_ram_4204f688;
      if (*(int *)(uVar9 + 0x14) != 1) {
        if (iVar1 == 3) {
          iVar1 = *piVar8 * 1000;
LAB_ram_4204f946:
          *(int *)(uVar9 + 0x94) = iVar1;
        }
        else if (iVar1 < 4) {
          if (iVar1 != 1) {
            if (iVar1 != 2) goto LAB_ram_4204f604;
            iVar1 = *piVar8;
            goto LAB_ram_4204f946;
          }
          if (*piVar8 == 0) {
            uVar4 = *(ushort *)(uVar9 + 0x1e) & 0xffbf;
          }
          else {
            uVar4 = *(ushort *)(uVar9 + 0x1e) | 0x40;
          }
          *(ushort *)(uVar9 + 0x1e) = uVar4;
        }
        else if (iVar1 == 4) {
          *(int *)(uVar9 + 0x98) = *piVar8 * 1000;
        }
        else {
          if (iVar1 != 5) goto LAB_ram_4204f604;
          *(int *)(uVar9 + 0x9c) = *piVar8;
        }
LAB_ram_4204f586:
        FUN_ram_4204ecbc(piVar2);
        uVar6 = uStack_2c;
        goto LAB_ram_4204f692;
      }
    }
  }
  else if (iVar10 == 0xfff) {
    if (iVar1 == 0x1006) {
      if (((0xf < uVar9) && (*piVar2 != 0)) &&
         (iVar1 = *piVar8 * 1000 + piVar8[2] / 1000, -1 < iVar1)) {
        *(int *)(*piVar2 + 0x24) = iVar1;
        goto LAB_ram_4204f586;
      }
    }
    else if (iVar1 < 0x1007) {
      if (iVar1 < 0x21) {
        if ((iVar1 < 4) || ((0x10000011U >> (iVar1 - 4U & 0x1f) & 1) == 0)) {
LAB_ram_4204f604:
          uVar6 = 0x6d;
LAB_ram_4204f608:
          uStack_2c = uVar6;
          goto LAB_ram_4204f586;
        }
        if (iVar1 == 0x20) {
          if ((*(uint *)*piVar2 & 0xf0) != 0x20) goto LAB_ram_4204f688;
        }
        else if (iVar1 != 4) {
          iVar1 = (uint)(iVar1 == 8) << 3;
        }
        if (((3 < uVar9) && (*piVar2 != 0)) && (iVar10 = *(int *)(*piVar2 + 8), iVar10 != 0)) {
          if (*piVar8 == 0) {
            bVar5 = *(byte *)(iVar10 + 9) & ~(byte)iVar1;
          }
          else {
            bVar5 = *(byte *)(iVar10 + 9) | (byte)iVar1;
          }
          *(byte *)(iVar10 + 9) = bVar5;
          goto LAB_ram_4204f586;
        }
      }
      else {
        if (iVar1 != 0x1005) goto LAB_ram_4204f604;
        if (((0xf < uVar9) && (*piVar2 != 0)) &&
           (iVar1 = *piVar8 * 1000 + piVar8[2] / 1000, -1 < iVar1)) {
          *(int *)(*piVar2 + 0x20) = iVar1;
          goto LAB_ram_4204f586;
        }
      }
    }
    else if (iVar1 == 0x100a) {
      if (((3 < uVar9) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
         (uVar9 = puVar7[2], uVar9 != 0)) {
        if ((*puVar7 & 0xf0) != 0x20) goto LAB_ram_4204f688;
        if (*piVar8 == 0) {
          bVar5 = *(byte *)(uVar9 + 0x10) & 0xfe;
        }
        else {
          bVar5 = *(byte *)(uVar9 + 0x10) | 1;
        }
LAB_ram_4204f742:
        *(byte *)(uVar9 + 0x10) = bVar5;
        goto LAB_ram_4204f586;
      }
    }
    else {
      if (iVar1 != 0x100b) goto LAB_ram_4204f604;
      if ((5 < uVar9) && (*piVar2 != 0)) {
        iVar1 = 0;
        if (((char)*piVar8 != '\0') && (iVar1 = FUN_ram_4205172a(piVar8,0), iVar1 == 0)) {
          FUN_ram_4204ecbc(piVar2);
          uVar6 = 0x13;
          goto LAB_ram_4204f692;
        }
        puVar7 = (uint *)*piVar2;
        uVar9 = *puVar7 & 0xf0;
        if (uVar9 == 0x20) {
          FUN_ram_42056074(puVar7[2],iVar1);
        }
        else if (uVar9 == 0x40) {
          FUN_ram_42052348(puVar7[2]);
        }
        else if (uVar9 == 0x10) {
          FUN_ram_420526b0(puVar7[2]);
        }
        goto LAB_ram_4204f586;
      }
    }
  }
  else {
    if (iVar10 != 0) goto LAB_ram_4204f604;
    if (iVar1 == 5) {
      if (((uVar9 != 0) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) && (puVar7[2] != 0)) {
        if ((*puVar7 & 0xf0) != 0x20) goto LAB_ram_4204f688;
        *(char *)(puVar7[2] + 0x1d) = (char)*piVar8;
        goto LAB_ram_4204f586;
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 2) {
        if (((3 < uVar9) && (*piVar2 != 0)) && (iVar1 = *(int *)(*piVar2 + 8), iVar1 != 0)) {
          *(char *)(iVar1 + 0xb) = (char)*piVar8;
          goto LAB_ram_4204f586;
        }
      }
      else if (iVar1 < 3) {
        if (iVar1 != 1) goto LAB_ram_4204f604;
        if (((3 < uVar9) && (*piVar2 != 0)) && (iVar1 = *(int *)(*piVar2 + 8), iVar1 != 0)) {
          *(char *)(iVar1 + 10) = (char)*piVar8;
          goto LAB_ram_4204f586;
        }
      }
      else if (((7 < uVar9) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
              (puVar7[2] != 0)) {
        if ((*puVar7 & 0xf0) != 0x20) goto LAB_ram_4204f688;
        iStack_28 = piVar8[1];
        iStack_24 = *piVar8;
        if (iVar1 == 3) {
          iVar1 = FUN_ram_4204ed60(uVar11);
          if (iVar1 != 0) {
            piVar8 = (int *)&DAT_ram_3fcb57bc;
            iVar10 = 0;
            do {
              if (*piVar8 == 0) {
                iVar10 = iVar10 * 0xc;
                *(int *)(&DAT_ram_3fcb57bc + iVar10) = iVar1;
                *(int *)(&DAT_ram_3fcb57c0 + iVar10) = iStack_28;
                *(int *)(&DAT_ram_3fcb57c4 + iVar10) = iStack_24;
                FUN_ram_4204ecbc();
                iVar1 = FUN_ram_420587f0(&iStack_28,&iStack_24);
                goto LAB_ram_4204f7ec;
              }
              iVar10 = iVar10 + 1;
              piVar8 = piVar8 + 3;
            } while (iVar10 != 4);
            FUN_ram_4204ecbc();
          }
          uVar6 = 0xc;
        }
        else {
          iVar1 = FUN_ram_420588f4(&iStack_28,&iStack_24);
          iVar10 = FUN_ram_4204ed60(uVar11);
          if (iVar10 != 0) {
            piVar8 = (int *)&DAT_ram_3fcb57bc;
            iVar3 = 0;
            do {
              if (((iVar10 == *piVar8) && (piVar8[1] == iStack_28)) && (piVar8[2] == iStack_24)) {
                iVar3 = iVar3 * 0xc;
                *(undefined4 *)(&DAT_ram_3fcb57bc + iVar3) = 0;
                *(undefined4 *)(&DAT_ram_3fcb57c0 + iVar3) = 0;
                *(undefined4 *)(&DAT_ram_3fcb57c4 + iVar3) = 0;
                break;
              }
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 3;
            } while (iVar3 != 4);
            FUN_ram_4204ecbc();
          }
LAB_ram_4204f7ec:
          uVar6 = 0x7d;
          if (iVar1 == 0) goto LAB_ram_4204f586;
        }
        goto LAB_ram_4204f608;
      }
    }
    else if (iVar1 == 6) {
      if (((3 < uVar9) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) && (puVar7[2] != 0)) {
        if ((*puVar7 & 0xf0) == 0x20) {
          *(int *)(puVar7[2] + 0x18) = *piVar8;
          goto LAB_ram_4204f586;
        }
LAB_ram_4204f688:
        FUN_ram_4204ecbc(piVar2);
        uVar6 = 0x6d;
        goto LAB_ram_4204f692;
      }
    }
    else {
      if (iVar1 != 7) goto LAB_ram_4204f604;
      if (((uVar9 != 0) && (puVar7 = (uint *)*piVar2, puVar7 != (uint *)0x0)) &&
         (uVar9 = puVar7[2], uVar9 != 0)) {
        if ((*puVar7 & 0xf0) == 0x20) {
          if ((char)*piVar8 == '\0') {
            bVar5 = *(byte *)(uVar9 + 0x10) & 0xf7;
          }
          else {
            bVar5 = *(byte *)(uVar9 + 0x10) | 8;
          }
          goto LAB_ram_4204f742;
        }
        goto LAB_ram_4204f688;
      }
    }
  }
  FUN_ram_4204ecbc(piVar2);
  uVar6 = 0x16;
LAB_ram_4204f692:
  param_1[5] = uVar6;
  thunk_FUN_ram_4205973a(param_1[6]);
  return;
}

