
int FUN_ram_4204d0ee(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_68 [24];
  undefined4 uStack_50;
  
  uVar7 = *(int *)(param_1 + 0xc) + 8;
  iVar9 = param_1 + 0x18;
  if (((uVar7 < 7) && ((0x51U >> (uVar7 & 0x1f) & 1) != 0)) &&
     (pcVar8 = *(code **)(**(int **)(param_1 + 0x50) + 0xc),
     iVar2 = (*pcVar8)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x20,iVar9,0x20,uVar7,
                       pcVar8), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar2 = 0;
  do {
    iVar3 = FUN_ram_4204c62a(iVar9,iVar2,&uStack_78);
    if (iVar3 != 0) {
      return -1;
    }
    if (uStack_78 == 2) {
      if (*(int *)(param_1 + 0x3c) == -1) {
        *(int *)(param_1 + 0x3c) = iVar2;
      }
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
    }
    else if (uStack_78 == 0) {
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x7e);
  iVar2 = 0;
  if (*(uint *)(param_1 + 0xc) == 0xfffffffe) {
    iVar3 = 0;
    do {
      iVar4 = FUN_ram_4204c62a(iVar9,iVar3,&uStack_78);
      uVar7 = uStack_78;
      if (iVar4 != 0) {
        return -1;
      }
      if (uStack_78 == 3) {
        *(int *)(param_1 + 0x38) = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x7e);
    do {
      if (0x7d < *(uint *)(param_1 + 0x38)) goto LAB_ram_4204d1cc;
      pcVar8 = *(code **)(**(int **)(param_1 + 0x50) + 0xc);
      iVar3 = (*pcVar8)(*(int **)(param_1 + 0x50),
                        *(int *)(param_1 + 8) + 0x40 + *(uint *)(param_1 + 0x38) * 0x20,&uStack_70,4
                        ,pcVar8);
      if (iVar3 != 0) goto LAB_ram_4204d246;
      uVar6 = *(undefined4 *)(param_1 + 0x38);
      if (uStack_70 == 0xffffffff) goto LAB_ram_4204d1cc;
      uStack_50 = uVar7;
      iVar3 = FUN_ram_4204c62a(iVar9,uVar6,&uStack_50);
      if (iVar3 != 0) {
        return -1;
      }
      iVar3 = FUN_ram_4204c6ea(param_1,uVar6,0);
      if (iVar3 != 0) goto LAB_ram_4204d246;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      if (uStack_50 == 2) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      }
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
    } while( true );
  }
  if ((*(uint *)(param_1 + 0xc) & 0xfffffffb) != 0xfffffff8) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + 0x3c);
  do {
    if (0x7d < uVar7) {
      return 0;
    }
    iVar2 = FUN_ram_4204c62a(iVar9,uVar7,&uStack_78);
    if (iVar2 != 0) {
      return -1;
    }
    if (uStack_78 == 2) {
      iVar3 = FUN_ram_4204c52c(param_1,uVar7,&uStack_50);
      if (iVar3 != 0) goto LAB_ram_4204d246;
      iVar2 = FUN_ram_4204ede6(&uStack_50,uVar7 & 0xff);
      if (iVar2 == 0) {
        iVar3 = FUN_ram_4204cb60(param_1,uVar7);
        if (iVar3 != 0) goto LAB_ram_4204d246;
      }
      else {
        if (uStack_50._2_1_ == '\0') {
          return -1;
        }
        iVar3 = FUN_ram_4204ef2e(param_1 + 0x44,&uStack_50,uVar7);
        if (iVar3 != 0) goto LAB_ram_4204d246;
        uVar10 = uStack_50 >> 0x10 & 0xff;
        iVar2 = FUN_ram_4204c426(uStack_50._1_1_);
        if (iVar2 != 0) {
          uVar1 = uVar7;
          do {
            uVar1 = uVar1 + 1;
            if (uVar7 + uVar10 <= uVar1) goto LAB_ram_4204d3e2;
            iVar2 = FUN_ram_4204c62a(iVar9,uVar1,&uStack_78);
            if (iVar2 != 0) {
              return -1;
            }
          } while (uStack_78 == 2);
          FUN_ram_4204cb60(param_1,uVar7);
        }
LAB_ram_4204d3e2:
        uVar7 = uVar7 + (uVar10 - 1);
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
LAB_ram_4204d1cc:
  uVar7 = *(uint *)(param_1 + 0x38);
  if (0x7e < uVar7) {
    uVar7 = 0x7e;
  }
  uVar10 = 0xffffffff;
  for (uVar1 = 0; uVar1 < uVar7; uVar1 = uVar1 + uVar11) {
    iVar3 = FUN_ram_4204c62a(iVar9,uVar1,&uStack_78);
    if (iVar3 != 0) {
      return -1;
    }
    if (uStack_78 == 0) {
LAB_ram_4204d2a6:
      uVar11 = 1;
LAB_ram_4204d2a8:
      uVar10 = 0xffffffff;
    }
    else {
      if (uStack_78 == 1) {
        iVar3 = FUN_ram_4204cb60(param_1,uVar1);
        if (iVar3 == 0) goto LAB_ram_4204d2a6;
        goto LAB_ram_4204d246;
      }
      iVar3 = FUN_ram_4204c52c(param_1,uVar1,&uStack_70);
      if (iVar3 != 0) goto LAB_ram_4204d246;
      iVar3 = FUN_ram_4204ede6(&uStack_70,uVar1 & 0xff);
      uVar10 = uVar1;
      if (iVar3 == 0) {
        iVar3 = FUN_ram_4204cb60(param_1,uVar1);
        if (iVar3 != 0) goto LAB_ram_4204d246;
        uVar11 = 1;
      }
      else {
        iVar3 = FUN_ram_4204ef2e(param_1 + 0x44,&uStack_70,uVar1);
        if (iVar3 != 0) goto LAB_ram_4204d246;
        uVar5 = FUN_ram_4204efce(param_1 + 0x44,0,&uStack_70);
        uVar11 = 1;
        iVar3 = FUN_ram_4204c426(uStack_70._1_1_);
        if (iVar3 != 0) {
          uVar11 = uStack_70 >> 0x10 & 0xff;
          for (uVar12 = uVar1; uVar12 < uVar1 + uVar11; uVar12 = uVar12 + 1) {
            iVar3 = FUN_ram_4204c62a(iVar9,uVar12,&uStack_78);
            if (iVar3 != 0) {
              return -1;
            }
            if (uStack_78 != 2) {
              FUN_ram_4204cb60(param_1,uVar1);
              goto LAB_ram_4204d2a8;
            }
          }
        }
        if (uVar5 < uVar1) {
          FUN_ram_4204cb60(param_1,uVar5);
        }
      }
    }
  }
  if (uVar10 != 0xffffffff) {
    uStack_74 = 0;
    iVar9 = FUN_ram_4204cd30(param_1,uStack_70 & 0xff,uStack_70._1_1_,auStack_68,&uStack_74,
                             &uStack_50,0xff);
    if (((iVar9 == 0) && (uStack_74 < uVar10)) && (iVar3 = FUN_ram_4204cb60(param_1), iVar3 != 0)) {
LAB_ram_4204d246:
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar2 = iVar3;
    }
  }
  return iVar2;
}

