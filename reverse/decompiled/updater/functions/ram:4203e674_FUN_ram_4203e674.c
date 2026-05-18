
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203e674(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int *piVar10;
  
  pcVar4 = (char *)FUN_ram_420390a6();
  if (((*pcVar4 == '\0') && (iVar5 = FUN_ram_4203b4dc(), iVar5 == 0)) &&
     (iVar5 = FUN_ram_4203b4d2(), bVar1 = DAT_ram_3fcb4ee6, iVar5 == 0)) {
    iVar5 = *(int *)(gp + -0x2b8);
    piVar10 = (int *)&DAT_ram_3fcb4ed0;
    iVar2 = 0;
    for (bVar8 = 0; bVar1 != bVar8; bVar8 = bVar8 + 1) {
      iVar3 = *piVar10;
      if ((*(byte *)(iVar3 + 0x28b) == 0) || ((*(byte *)(iVar3 + 0x28b) & 0xfb) == 9)) {
        if ((*(char *)(iVar5 + 0x92) != '\0') &&
           (iVar6 = FUN_ram_40399d6c(iVar5 + 0x93,iVar3 + 4,6), iVar6 == 0)) {
          return iVar3;
        }
        if (iVar2 == 0) {
LAB_ram_4203e740:
          iVar2 = iVar3;
        }
        else if (iVar3 != iVar2) {
          iVar6 = FUN_ram_4203d5a2(iVar3);
          iVar7 = FUN_ram_4203d5a2(iVar2);
          if (iVar7 < iVar6) goto LAB_ram_4203e740;
        }
      }
      piVar10 = piVar10 + 1;
    }
  }
  else {
    bVar1 = DAT_ram_3fcb4ee6;
    iVar5 = *(int *)(gp + -0x2b8);
    if (*(char *)(iVar5 + 0x35d) == '\0') {
      piVar10 = (int *)&DAT_ram_3fcb4ed0;
      iVar2 = 0;
      iVar3 = -0x780;
      for (bVar8 = 0; bVar8 != bVar1; bVar8 = bVar8 + 1) {
        iVar6 = *piVar10;
        if ((*(char *)(iVar5 + 0x92) != '\0') &&
           (iVar7 = FUN_ram_40399d6c(iVar5 + 0x93,iVar6 + 4,6), iVar7 == 0)) {
          return iVar6;
        }
        iVar7 = FUN_ram_4203d5a2(iVar6);
        if (iVar3 < iVar7) {
          iVar2 = iVar6;
          iVar3 = iVar7;
        }
        piVar10 = piVar10 + 1;
      }
    }
    else {
      iVar2 = _DAT_ram_3fcb4ed0;
      for (uVar9 = 0; uVar9 < DAT_ram_3fcb4ee6; uVar9 = uVar9 + 1 & 0xff) {
        iVar5 = *(int *)((uVar9 + 0x3b8) * 4 + 0x3fcb3ff0);
        if ((*(char *)(*(int *)(gp + -0x2b8) + 0x92) != '\0') &&
           (iVar3 = FUN_ram_40399d6c(*(int *)(gp + -0x2b8) + 0x93,iVar5 + 4,6), iVar3 == 0)) {
          return iVar5;
        }
        iVar3 = FUN_ram_42045c28(*(undefined1 *)(iVar2 + 0x28b));
        iVar6 = FUN_ram_42045c28(*(undefined1 *)(iVar5 + 0x28b));
        if (iVar3 < iVar6) {
LAB_ram_4203e81a:
          iVar2 = iVar5;
        }
        else {
          iVar3 = FUN_ram_42045c28(*(undefined1 *)(iVar2 + 0x28b));
          iVar6 = FUN_ram_42045c28(*(undefined1 *)(iVar5 + 0x28b));
          if (iVar3 == iVar6) {
            iVar3 = FUN_ram_4203d5a2(iVar5);
            iVar6 = FUN_ram_4203d5a2(iVar2);
            if (iVar6 < iVar3) goto LAB_ram_4203e81a;
          }
        }
      }
    }
  }
  if (iVar2 == 0) {
    if (DAT_ram_3fcb4ee4 == '\x01') {
      FUN_ram_42033fd8(1,4,5,0x3c07f024);
      FUN_ram_4203e602();
      return 0;
    }
  }
  else {
    FUN_ram_42033fd8(1,4,5,0x3c07f058);
    iVar5 = FUN_ram_4203e270(iVar2);
    if (iVar5 != 0) {
      return iVar2;
    }
  }
  return 0;
}

