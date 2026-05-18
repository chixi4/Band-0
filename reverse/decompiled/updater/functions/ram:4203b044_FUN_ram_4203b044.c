
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203b044(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  int *piVar11;
  int iVar12;
  
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 8) != '\x01') {
      return 0x102;
    }
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x288) == (code *)0x0) {
      return 0x102;
    }
    iVar3 = (**(code **)(_DAT_ram_3fcdfb24 + 0x288))(param_1 + 0x14,DAT_ram_3fcb5145 == '\0');
    goto LAB_ram_4203b406;
  }
  if ((_DAT_ram_3fcb4f84 != 0) && (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x01')) {
    FUN_ram_42033fd8(1,0xb,1,0x3c07d67c);
    return 0x3006;
  }
  FUN_ram_4203e602();
  bVar1 = **(byte **)(gp + -0x2b8);
  iVar3 = FUN_ram_420384d8();
  if ((bVar1 & 0xfd) != 1) {
    return 0x3005;
  }
  FUN_ram_420384d8();
  iVar4 = FUN_ram_42039d60(*(undefined4 *)(param_1 + 0x9c));
  if (iVar4 == -1) {
    uVar9 = *(uint *)(param_1 + 0x9c);
    uVar8 = 0x3c07d340;
LAB_ram_4203b0f2:
    FUN_ram_42033fd8(1,3,1,uVar8,uVar9);
    return 0x102;
  }
  if (-1 < *(char *)(param_1 + 0x88)) {
    *(undefined1 *)(param_1 + 0x88) = 0x81;
  }
  if (*(short *)(param_1 + 0x80) == 0) {
    *(undefined2 *)(param_1 + 0x80) = 3;
  }
  uVar9 = *(uint *)(param_1 + 0x8c);
  if (0x10 < uVar9) {
    uVar8 = 0x3c07d368;
    goto LAB_ram_4203b0f2;
  }
  iVar4 = param_1 + 0x34;
  uVar5 = (*(code *)&SUB_ram_400104a8)(iVar4);
  if ((7 < uVar5) && (uVar9 == 0)) {
    FUN_ram_42033fd8(1,2,2,0x3c07fb54);
    *(undefined4 *)(param_1 + 0x8c) = 3;
  }
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int *)(param_1 + 0x8c) != 0)) {
    FUN_ram_42033fd8(1,2,2,0x3c07fbac);
  }
  if ((*(ushort *)(param_1 + 0x96) & 0x10) != 0) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      iVar6 = FUN_ram_42045c28(*(uint *)(param_1 + 0x8c) & 0xff);
      iVar7 = FUN_ram_42045c28(9);
      if (iVar6 <= iVar7) goto LAB_ram_4203b1b8;
    }
    uVar8 = (*(code *)&SUB_ram_400104a8)(iVar4);
    FUN_ram_42033fd8(1,2,2,0x3c07fca8,*(undefined4 *)(param_1 + 0x8c),uVar8);
  }
LAB_ram_4203b1b8:
  if ((*(ushort *)(param_1 + 0x96) & 4) != 0) {
    *(byte *)(param_1 + 0x96) = *(byte *)(param_1 + 0x96) & 0xfc | 3;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  iVar6 = FUN_ram_420384d8();
  iVar12 = param_1 + 0x14;
  cVar10 = '\x01';
  cVar2 = FUN_ram_42039d60(*(undefined4 *)(param_1 + 0x9c));
  iVar7 = FUN_ram_40399d6c(iVar6 + 8,iVar12,0x20);
  if (((iVar7 == 0) && (iVar7 = FUN_ram_40399d6c(iVar6 + 0x2f,iVar4,0x40), iVar7 == 0)) &&
     ((cVar10 = *(char *)(param_1 + 0x78), cVar10 == '\0' ||
      (iVar7 = FUN_ram_40399d6c(iVar6 + 0x93,param_1 + 0x79,6), iVar7 == 0)))) {
    if (*(char *)(iVar6 + 0x92) == cVar10) {
      if ((((((*(char *)(param_1 + 0x7f) == '\0') ||
             (cVar10 = '\x01', *(char *)(iVar6 + 0x90) == *(char *)(param_1 + 0x7f))) &&
            (cVar10 = '\x01', (uint)*(byte *)(iVar6 + 0x35c) == *(uint *)(param_1 + 0x74))) &&
           (((uint)*(byte *)(iVar6 + 0x35d) == *(uint *)(param_1 + 0x84) &&
            ((uint)*(byte *)(iVar6 + 0x35f) == *(uint *)(param_1 + 0x8c))))) &&
          ((*(char *)(iVar6 + 0x35e) == *(char *)(param_1 + 0x88) &&
           ((*(short *)(iVar6 + 0x9a) == *(short *)(param_1 + 0x80) &&
            (*(char *)(iVar6 + 0x360) == *(char *)(param_1 + 0x94))))))) &&
         (((*(char *)(iVar6 + 0x361) == *(char *)(param_1 + 0x95) &&
           ((((uVar9 = *(uint *)(param_1 + 0x94),
              (uint)*(byte *)(iVar6 + 0x362) == (uVar9 >> 0x10 & 1) &&
              ((uint)*(byte *)(iVar6 + 0x364) == (uVar9 >> 0x12 & 1))) &&
             ((uint)*(byte *)(iVar6 + 0x414) == (uVar9 >> 0x13 & 1))) &&
            (((uint)*(byte *)(iVar6 + 0x415) == (uVar9 >> 0x14 & 1) &&
             ((uint)*(byte *)(iVar6 + 0x416) == (uVar9 >> 0x15 & 1))))))) &&
          (((*(char *)(iVar6 + 0x448) == *(char *)(param_1 + 0xa4) &&
            ((*(char *)(iVar6 + 0x417) == cVar2 &&
             ((uint)*(byte *)(iVar6 + 0x418) == *(uint *)(param_1 + 0xa0))))) &&
           (iVar7 = FUN_ram_40399d6c(iVar6 + 0x451,param_1 + 0xab,0x20), iVar7 == 0)))))) {
        cVar10 = (uint)*(byte *)(iVar6 + 0x363) != (uVar9 >> 0x11 & 1);
      }
    }
    else {
      cVar10 = '\x01';
    }
  }
  iVar6 = FUN_ram_40399d6c(iVar3 + 8,iVar12,0x20);
  if ((iVar6 != 0) || ((*(ushort *)(param_1 + 0x96) & 0x20) == 0)) {
    DAT_ram_3fcb51c9 = 0;
    _DAT_ram_3fcb51c2 = 0;
  }
  iVar6 = iVar3 + 0xa4;
  uVar9 = 0;
  do {
    uVar5 = uVar9 & 0xff;
    iVar7 = FUN_ram_40399d6c(iVar6,iVar12,0x20);
    if (iVar7 == 0) {
      iVar4 = FUN_ram_40399d6c(uVar9 * 0x8c + 0xc4 + iVar3,iVar4,0x40);
      if (iVar4 == 0) {
        DAT_ram_3fcb5190 = 0;
        iVar3 = FUN_ram_4203990e(uVar9 * 0x8c + 0x10b + iVar3);
        if (iVar3 == 0) {
          DAT_ram_3fcb5132 = 1;
        }
        else {
          DAT_ram_3fcb5132 = 0;
        }
      }
      else {
        if (*(code **)(_DAT_ram_3fcb50e8 + 0x68) != (code *)0x0) {
          (**(code **)(_DAT_ram_3fcb50e8 + 0x68))();
        }
        DAT_ram_3fcb5132 = 1;
        DAT_ram_3fcb5190 = 1;
      }
      if (cVar10 == '\0') goto LAB_ram_4203b3ba;
      goto LAB_ram_4203b400;
    }
    uVar9 = uVar9 + 1;
    iVar6 = iVar6 + 0x8c;
  } while (uVar9 != 5);
  DAT_ram_3fcb5190 = 1;
  DAT_ram_3fcb5132 = 1;
  piVar11 = (int *)(iVar3 + 0xa0);
  uVar5 = 0;
  do {
    if (*piVar11 + 1U < 2) goto LAB_ram_4203b400;
    uVar5 = uVar5 + 1 & 0xff;
    piVar11 = piVar11 + 0x23;
  } while (uVar5 != 5);
  if (DAT_ram_3fcb3fbd == '\x05') {
    DAT_ram_3fcb3fbd = '\0';
  }
  iVar3 = FUN_ram_42039d7a(iVar12,DAT_ram_3fcb3fbd);
  DAT_ram_3fcb3fbd = DAT_ram_3fcb3fbd + '\x01';
LAB_ram_4203b406:
  if (iVar3 == 0) {
LAB_ram_4203b3ba:
    if (_DAT_ram_3fcb50e8 != 0) {
      (**(code **)(_DAT_ram_3fcb50e8 + 0x58))();
    }
    iVar3 = 0;
  }
  return iVar3;
LAB_ram_4203b400:
  iVar3 = FUN_ram_42039d7a(iVar12,uVar5);
  goto LAB_ram_4203b406;
}

