
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208df38(int param_1,int param_2,int param_3,undefined1 param_4,undefined2 param_5,
                     undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  undefined1 uVar14;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  
  (*(code *)&SUB_ram_40010488)(&uStack_78,0,0x24);
  FUN_ram_4039c11e(param_1 + 4,param_2 + 10,6);
  (*(code *)&SUB_ram_40010488)(param_1 + 10,0,0x20);
  iVar13 = *(int *)(param_3 + 0x24);
  iVar2 = FUN_ram_4208df14(iVar13);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x2f) = 0;
    FUN_ram_4039c61e(param_1 + 10,iVar13 + 2,*(undefined1 *)(iVar13 + 1));
    uVar7 = *(undefined1 *)(*(int *)(param_3 + 0x24) + 1);
  }
  else {
    *(undefined1 *)(param_1 + 0x2f) = 1;
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0x2a) = uVar7;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  pcVar9 = *(char **)(param_3 + 0x48);
  if (pcVar9 != (char *)0x0) {
    if (*pcVar9 == -0x23) {
      pcVar9 = pcVar9 + 4;
    }
    if ((pcVar9[3] & 4U) != 0) {
      bVar4 = pcVar9[3] & 3;
      if (bVar4 == 1) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      else if (bVar4 == 3) {
        *(undefined1 *)(param_1 + 0x2c) = 2;
      }
    }
  }
  uVar7 = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 0x2d) = param_4;
  *(undefined2 *)(param_1 + 0x30) = param_5;
  *(undefined1 *)(param_1 + 0x2b) = uVar7;
  iVar2 = *(int *)(param_3 + 0x34);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_3 + 0x56);
  if (iVar2 == 0) {
    uVar1 = 0;
    uVar12 = 0;
  }
  else {
    if ((_DAT_ram_3fcc4178 == 0) || (*(code **)(_DAT_ram_3fcc4178 + 0x3c) == (code *)0x0)) {
      FUN_ram_4207a038(1,8,1,&DAT_ram_3c0ff5a4);
    }
    else {
      (**(code **)(_DAT_ram_3fcc4178 + 0x3c))(iVar2,*(byte *)(iVar2 + 1) + 2,&uStack_54);
    }
    *(undefined4 *)(param_1 + 0x38) = uStack_50;
    *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
    uVar1 = uStack_48;
    uVar12 = uStack_54;
  }
  iVar2 = *(int *)(param_3 + 0x3c);
  if (iVar2 != 0) {
    if ((_DAT_ram_3fcc4178 == 0) || (*(code **)(_DAT_ram_3fcc4178 + 0x3c) == (code *)0x0)) {
      FUN_ram_4207a038(1,8,1,&DAT_ram_3c0ff5bc);
    }
    else {
      (**(code **)(_DAT_ram_3fcc4178 + 0x3c))(iVar2,*(byte *)(iVar2 + 1) + 2,&uStack_78);
    }
    uVar12 = uVar12 | uStack_78;
    uVar1 = uVar1 | uStack_6c;
    *(undefined4 *)(param_1 + 0x38) = uStack_74;
    *(undefined4 *)(param_1 + 0x3c) = uStack_70;
  }
  iVar2 = *(int *)(param_3 + 0x38);
  if ((((iVar2 != 0) && (_DAT_ram_3fcc4234 != 0)) &&
      (*(code **)(_DAT_ram_3fcc4234 + 4) != (code *)0x0)) &&
     (iVar2 = (**(code **)(_DAT_ram_3fcc4234 + 4))(iVar2,*(char *)(iVar2 + 1) + '\x02',&uStack_54),
     iVar2 == 0)) {
    uVar12 = uVar12 | uStack_54;
    uVar1 = uVar1 | uStack_48;
  }
  if (((uVar1 & 0xffffff9f) == 0) || ((uVar1 & 0x4000502) != 0)) {
    uVar7 = 2;
    if (uVar12 == 2) {
      if ((uVar1 & 0x4000400) == 0) {
        if ((uVar1 & 0x102) == 0) {
          uVar14 = *(undefined1 *)(param_1 + 9);
          uVar11 = *(undefined1 *)(param_1 + 7);
          uVar7 = *(undefined1 *)(param_1 + 8);
          uVar10 = *(undefined1 *)(param_1 + 6);
          uVar6 = *(undefined1 *)(param_1 + 4);
          puVar5 = &DAT_ram_3c0fe178;
          uVar8 = *(undefined1 *)(param_1 + 5);
LAB_ram_4208e23e:
          FUN_ram_4207a038(1,8,4,puVar5,uVar6,uVar8,uVar10,uVar11,uVar7,uVar14);
          goto LAB_ram_4208e112;
        }
LAB_ram_4208e232:
        uVar7 = 3;
      }
      else if (((((uStack_68 & 0x80) == 0) || (*(int *)(param_1 + 0x38) == 3)) ||
               (*(int *)(param_1 + 0x3c) == 3)) || ((uVar1 & 0x102) == 0)) {
        if ((((uStack_68 & 0x40) == 0) || (*(int *)(param_1 + 0x38) == 3)) ||
           (*(int *)(param_1 + 0x3c) == 3)) {
          uVar7 = *(undefined1 *)(param_1 + 8);
          uVar14 = *(undefined1 *)(param_1 + 9);
          uVar6 = *(undefined1 *)(param_1 + 4);
          uVar8 = *(undefined1 *)(param_1 + 5);
          uVar10 = *(undefined1 *)(param_1 + 6);
          uVar11 = *(undefined1 *)(param_1 + 7);
          if ((uVar1 & 0x102) != 0) {
            FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fe098,uVar6,uVar8,uVar10,uVar11,uVar7,uVar14);
            goto LAB_ram_4208e232;
          }
          puVar5 = &DAT_ram_3c0fe108;
          goto LAB_ram_4208e23e;
        }
LAB_ram_4208e1fa:
        uVar7 = 6;
      }
      else {
LAB_ram_4208e1e2:
        uVar7 = 7;
      }
    }
    else if (uVar12 < 3) {
      if (uVar12 == 0) {
        if ((*(ushort *)(param_3 + 6) & 0x10) == 0) {
          *(undefined1 *)(param_1 + 0x2e) = 0;
          goto LAB_ram_4208e112;
        }
        uVar7 = 1;
      }
    }
    else {
      if (uVar12 != 3) goto LAB_ram_4208e112;
      if ((uVar1 & 0x4000400) == 0) {
        if ((uVar1 & 0x102) == 0) {
          uVar14 = *(undefined1 *)(param_1 + 9);
          uVar11 = *(undefined1 *)(param_1 + 7);
          uVar7 = *(undefined1 *)(param_1 + 8);
          uVar10 = *(undefined1 *)(param_1 + 6);
          uVar6 = *(undefined1 *)(param_1 + 4);
          puVar5 = &DAT_ram_3c0fe2b0;
          uVar8 = *(undefined1 *)(param_1 + 5);
          goto LAB_ram_4208e23e;
        }
      }
      else {
        if ((((uStack_68 & 0x80) != 0) && (*(int *)(param_1 + 0x38) != 3)) &&
           ((*(int *)(param_1 + 0x3c) != 3 && ((uVar1 & 0x102) != 0)))) goto LAB_ram_4208e1e2;
        if ((((uStack_68 & 0x40) != 0) && (*(int *)(param_1 + 0x38) != 3)) &&
           (*(int *)(param_1 + 0x3c) != 3)) goto LAB_ram_4208e1fa;
        uVar7 = *(undefined1 *)(param_1 + 8);
        uVar14 = *(undefined1 *)(param_1 + 9);
        uVar6 = *(undefined1 *)(param_1 + 4);
        uVar8 = *(undefined1 *)(param_1 + 5);
        uVar10 = *(undefined1 *)(param_1 + 6);
        uVar11 = *(undefined1 *)(param_1 + 7);
        if ((uVar1 & 0x102) == 0) {
          puVar5 = &DAT_ram_3c0fe240;
          goto LAB_ram_4208e23e;
        }
        FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fe1cc,uVar6,uVar8,uVar10,uVar11,uVar7,uVar14);
      }
      uVar7 = 4;
    }
  }
  else if ((uVar1 & 0x1000) == 0) {
    if (((uVar1 & 0x20000) == 0) || ((uVar12 & 2) == 0)) {
      if (((uVar1 & 0x81) == 0) || ((uVar12 & 3) == 0)) {
        if ((((uVar1 & 0x400000) == 0) || ((uStack_68 & 0x40) == 0)) || ((uVar12 & 2) == 0)) {
          if ((((uVar1 & 0x800000) == 0) || ((uStack_68 & 0x40) == 0)) ||
             (uVar7 = 0xd, (uVar12 & 2) == 0)) {
            uVar14 = *(undefined1 *)(param_1 + 9);
            uVar11 = *(undefined1 *)(param_1 + 7);
            uVar7 = *(undefined1 *)(param_1 + 8);
            uVar10 = *(undefined1 *)(param_1 + 6);
            uVar6 = *(undefined1 *)(param_1 + 4);
            puVar5 = &DAT_ram_3c0fe2fc;
            uVar8 = *(undefined1 *)(param_1 + 5);
            goto LAB_ram_4208e23e;
          }
        }
        else {
          uVar7 = 9;
        }
      }
      else if (uVar12 == 2) {
        if (((uVar1 & 0x80) == 0) || (*(int *)(param_1 + 0x38) == 3)) {
LAB_ram_4208e382:
          uVar7 = 5;
        }
        else if (((uVar1 & 0xffffff9f) == 0x80) && ((uStack_68 & 0x40) != 0)) {
          uVar7 = 0xe;
        }
        else {
          if ((uStack_68 & 0x80) == 0) goto LAB_ram_4208e382;
          uVar7 = 0xf;
        }
      }
      else {
        uVar7 = 0x10;
        if ((uVar12 & 2) != 0) goto LAB_ram_4208e382;
      }
    }
    else {
      uVar7 = 10;
    }
  }
  else {
    uVar7 = 8;
  }
  *(undefined1 *)(param_1 + 0x2e) = uVar7;
LAB_ram_4208e112:
  if (*(int *)(param_3 + 0x50) != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  iVar2 = *(int *)(param_3 + 0x28);
  uVar1 = 8;
  if (*(char *)(param_3 + 0x78) == '\0') {
    uVar1 = 0;
    if (iVar2 != 0) {
      for (iVar13 = 0; iVar13 < (int)(uint)*(byte *)(iVar2 + 1); iVar13 = iVar13 + 1) {
        bVar4 = *(byte *)(iVar2 + iVar13 + 2);
        if (bVar4 == 0x82) {
          uVar1 = uVar1 | 1;
        }
        else if ((bVar4 & 0x7f) == 0xc) {
          uVar1 = uVar1 | 2;
        }
      }
    }
    if (*(int *)(param_3 + 0x2c) != 0) {
      uVar1 = uVar1 | 2;
    }
    if (*(int *)(param_3 + 0x44) != 0) {
      uVar1 = uVar1 | 4;
    }
  }
  uVar3 = *(undefined4 *)(param_3 + 0x20);
  *(uint *)(param_1 + 0x44) = uVar1;
  FUN_ram_4208b902(param_1,uVar3);
  *(undefined1 *)(param_1 + 0x54) = param_6;
  if ((*(code **)(_DAT_ram_3fcc4178 + 0x54) != (code *)0x0) &&
     (*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\x05')) {
    (**(code **)(_DAT_ram_3fcc4178 + 0x54))
              (5,param_2 + 0x18,*(int *)(param_3 + 0x14) + 0xc,param_2 + 10,
               (int)*(char *)(param_1 + 0x2d),*(undefined1 *)(param_1 + 0x2b),0,0);
  }
  return;
}

