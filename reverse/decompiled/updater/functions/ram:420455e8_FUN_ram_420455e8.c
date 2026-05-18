
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420455e8(int param_1,int param_2,int param_3,undefined1 param_4,undefined2 param_5,
                     undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 uVar13;
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
  FUN_ram_40399daa(param_1 + 4,param_2 + 10,6);
  (*(code *)&SUB_ram_40010488)(param_1 + 10,0,0x20);
  iVar12 = *(int *)(param_3 + 0x24);
  iVar2 = FUN_ram_420455c4(iVar12);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x2f) = 0;
    FUN_ram_4039a252(param_1 + 10,iVar12 + 2,*(undefined1 *)(iVar12 + 1));
    uVar6 = *(undefined1 *)(*(int *)(param_3 + 0x24) + 1);
  }
  else {
    *(undefined1 *)(param_1 + 0x2f) = 1;
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x2a) = uVar6;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  pcVar8 = *(char **)(param_3 + 0x48);
  if (pcVar8 != (char *)0x0) {
    if (*pcVar8 == -0x23) {
      pcVar8 = pcVar8 + 4;
    }
    if ((pcVar8[3] & 4U) != 0) {
      bVar4 = pcVar8[3] & 3;
      if (bVar4 == 1) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      else if (bVar4 == 3) {
        *(undefined1 *)(param_1 + 0x2c) = 2;
      }
    }
  }
  uVar6 = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 0x2d) = param_4;
  *(undefined2 *)(param_1 + 0x30) = param_5;
  *(undefined1 *)(param_1 + 0x2b) = uVar6;
  iVar2 = *(int *)(param_3 + 0x34);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_3 + 0x56);
  if (iVar2 == 0) {
    uVar1 = 0;
    uVar11 = 0;
  }
  else {
    if ((_DAT_ram_3fcb50e8 == 0) || (*(code **)(_DAT_ram_3fcb50e8 + 0x3c) == (code *)0x0)) {
      FUN_ram_42033fd8(1,8,1,0x3c07dd8c);
    }
    else {
      (**(code **)(_DAT_ram_3fcb50e8 + 0x3c))(iVar2,*(byte *)(iVar2 + 1) + 2,&uStack_54);
    }
    *(undefined4 *)(param_1 + 0x38) = uStack_50;
    *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
    uVar1 = uStack_48;
    uVar11 = uStack_54;
  }
  iVar2 = *(int *)(param_3 + 0x3c);
  if (iVar2 != 0) {
    if ((_DAT_ram_3fcb50e8 == 0) || (*(code **)(_DAT_ram_3fcb50e8 + 0x3c) == (code *)0x0)) {
      FUN_ram_42033fd8(1,8,1,0x3c07dda4);
    }
    else {
      (**(code **)(_DAT_ram_3fcb50e8 + 0x3c))(iVar2,*(byte *)(iVar2 + 1) + 2,&uStack_78);
    }
    uVar11 = uVar11 | uStack_78;
    uVar1 = uVar1 | uStack_6c;
    *(undefined4 *)(param_1 + 0x38) = uStack_74;
    *(undefined4 *)(param_1 + 0x3c) = uStack_70;
  }
  iVar2 = *(int *)(param_3 + 0x38);
  if ((((iVar2 != 0) && (_DAT_ram_3fcb51a4 != 0)) &&
      (*(code **)(_DAT_ram_3fcb51a4 + 4) != (code *)0x0)) &&
     (iVar2 = (**(code **)(_DAT_ram_3fcb51a4 + 4))(iVar2,*(char *)(iVar2 + 1) + '\x02',&uStack_54),
     iVar2 == 0)) {
    uVar11 = uVar11 | uStack_54;
    uVar1 = uVar1 | uStack_48;
  }
  if (((uVar1 & 0xffffff9f) == 0) || ((uVar1 & 0x4000502) != 0)) {
    uVar6 = 2;
    if (uVar11 == 2) {
      if ((uVar1 & 0x4000400) == 0) {
        if ((uVar1 & 0x102) == 0) {
          uVar13 = *(undefined1 *)(param_1 + 9);
          uVar10 = *(undefined1 *)(param_1 + 7);
          uVar6 = *(undefined1 *)(param_1 + 8);
          uVar9 = *(undefined1 *)(param_1 + 6);
          uVar5 = *(undefined1 *)(param_1 + 4);
          uVar3 = 0x3c07ccc8;
          uVar7 = *(undefined1 *)(param_1 + 5);
LAB_ram_420458ee:
          FUN_ram_42033fd8(1,8,4,uVar3,uVar5,uVar7,uVar9,uVar10,uVar6,uVar13);
          goto LAB_ram_420457c2;
        }
LAB_ram_420458e2:
        uVar6 = 3;
      }
      else if (((((uStack_68 & 0x80) == 0) || (*(int *)(param_1 + 0x38) == 3)) ||
               (*(int *)(param_1 + 0x3c) == 3)) || ((uVar1 & 0x102) == 0)) {
        if ((((uStack_68 & 0x40) == 0) || (*(int *)(param_1 + 0x38) == 3)) ||
           (*(int *)(param_1 + 0x3c) == 3)) {
          uVar6 = *(undefined1 *)(param_1 + 8);
          uVar13 = *(undefined1 *)(param_1 + 9);
          uVar5 = *(undefined1 *)(param_1 + 4);
          uVar7 = *(undefined1 *)(param_1 + 5);
          uVar9 = *(undefined1 *)(param_1 + 6);
          uVar10 = *(undefined1 *)(param_1 + 7);
          if ((uVar1 & 0x102) != 0) {
            FUN_ram_42033fd8(1,8,4,0x3c07cbe8,uVar5,uVar7,uVar9,uVar10,uVar6,uVar13);
            goto LAB_ram_420458e2;
          }
          uVar3 = 0x3c07cc58;
          goto LAB_ram_420458ee;
        }
LAB_ram_420458aa:
        uVar6 = 6;
      }
      else {
LAB_ram_42045892:
        uVar6 = 7;
      }
    }
    else if (uVar11 < 3) {
      if (uVar11 == 0) {
        if ((*(ushort *)(param_3 + 6) & 0x10) == 0) {
          *(undefined1 *)(param_1 + 0x2e) = 0;
          goto LAB_ram_420457c2;
        }
        uVar6 = 1;
      }
    }
    else {
      if (uVar11 != 3) goto LAB_ram_420457c2;
      if ((uVar1 & 0x4000400) == 0) {
        if ((uVar1 & 0x102) == 0) {
          uVar13 = *(undefined1 *)(param_1 + 9);
          uVar10 = *(undefined1 *)(param_1 + 7);
          uVar6 = *(undefined1 *)(param_1 + 8);
          uVar9 = *(undefined1 *)(param_1 + 6);
          uVar5 = *(undefined1 *)(param_1 + 4);
          uVar3 = 0x3c07ce00;
          uVar7 = *(undefined1 *)(param_1 + 5);
          goto LAB_ram_420458ee;
        }
      }
      else {
        if ((((uStack_68 & 0x80) != 0) && (*(int *)(param_1 + 0x38) != 3)) &&
           ((*(int *)(param_1 + 0x3c) != 3 && ((uVar1 & 0x102) != 0)))) goto LAB_ram_42045892;
        if ((((uStack_68 & 0x40) != 0) && (*(int *)(param_1 + 0x38) != 3)) &&
           (*(int *)(param_1 + 0x3c) != 3)) goto LAB_ram_420458aa;
        uVar6 = *(undefined1 *)(param_1 + 8);
        uVar13 = *(undefined1 *)(param_1 + 9);
        uVar5 = *(undefined1 *)(param_1 + 4);
        uVar7 = *(undefined1 *)(param_1 + 5);
        uVar9 = *(undefined1 *)(param_1 + 6);
        uVar10 = *(undefined1 *)(param_1 + 7);
        if ((uVar1 & 0x102) == 0) {
          uVar3 = 0x3c07cd90;
          goto LAB_ram_420458ee;
        }
        FUN_ram_42033fd8(1,8,4,0x3c07cd1c,uVar5,uVar7,uVar9,uVar10,uVar6,uVar13);
      }
      uVar6 = 4;
    }
  }
  else if ((uVar1 & 0x1000) == 0) {
    if (((uVar1 & 0x20000) == 0) || ((uVar11 & 2) == 0)) {
      if (((uVar1 & 0x81) == 0) || ((uVar11 & 3) == 0)) {
        if ((((uVar1 & 0x400000) == 0) || ((uStack_68 & 0x40) == 0)) || ((uVar11 & 2) == 0)) {
          if ((((uVar1 & 0x800000) == 0) || ((uStack_68 & 0x40) == 0)) ||
             (uVar6 = 0xd, (uVar11 & 2) == 0)) {
            uVar13 = *(undefined1 *)(param_1 + 9);
            uVar10 = *(undefined1 *)(param_1 + 7);
            uVar6 = *(undefined1 *)(param_1 + 8);
            uVar9 = *(undefined1 *)(param_1 + 6);
            uVar5 = *(undefined1 *)(param_1 + 4);
            uVar3 = 0x3c07ce4c;
            uVar7 = *(undefined1 *)(param_1 + 5);
            goto LAB_ram_420458ee;
          }
        }
        else {
          uVar6 = 9;
        }
      }
      else if (uVar11 == 2) {
        if (((uVar1 & 0x80) == 0) || (*(int *)(param_1 + 0x38) == 3)) {
LAB_ram_42045a32:
          uVar6 = 5;
        }
        else if (((uVar1 & 0xffffff9f) == 0x80) && ((uStack_68 & 0x40) != 0)) {
          uVar6 = 0xe;
        }
        else {
          if ((uStack_68 & 0x80) == 0) goto LAB_ram_42045a32;
          uVar6 = 0xf;
        }
      }
      else {
        uVar6 = 0x10;
        if ((uVar11 & 2) != 0) goto LAB_ram_42045a32;
      }
    }
    else {
      uVar6 = 10;
    }
  }
  else {
    uVar6 = 8;
  }
  *(undefined1 *)(param_1 + 0x2e) = uVar6;
LAB_ram_420457c2:
  if (*(int *)(param_3 + 0x50) != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  iVar2 = *(int *)(param_3 + 0x28);
  uVar1 = 8;
  if (*(char *)(param_3 + 0x78) == '\0') {
    uVar1 = 0;
    if (iVar2 != 0) {
      for (iVar12 = 0; iVar12 < (int)(uint)*(byte *)(iVar2 + 1); iVar12 = iVar12 + 1) {
        bVar4 = *(byte *)(iVar2 + iVar12 + 2);
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
  FUN_ram_4204339a(param_1,uVar3);
  *(undefined1 *)(param_1 + 0x54) = param_6;
  if ((*(code **)(_DAT_ram_3fcb50e8 + 0x54) != (code *)0x0) &&
     (*(char *)(_DAT_ram_3fcb4f84 + 0x128) != '\x05')) {
    (**(code **)(_DAT_ram_3fcb50e8 + 0x54))
              (5,param_2 + 0x18,*(int *)(param_3 + 0x14) + 0xc,param_2 + 10,
               (int)*(char *)(param_1 + 0x2d),*(undefined1 *)(param_1 + 0x2b),0,0);
  }
  return;
}

