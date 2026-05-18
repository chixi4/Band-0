
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208656a(void)

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
  
  pcVar4 = (char *)FUN_ram_4207f212();
  if (((*pcVar4 == '\0') && (iVar5 = FUN_ram_4208264a(), iVar5 == 0)) &&
     (iVar5 = FUN_ram_42082640(), bVar1 = DAT_ram_3fcc3f76, iVar5 == 0)) {
    iVar5 = *(int *)(gp + -0xb4);
    piVar10 = (int *)&DAT_ram_3fcc3f60;
    iVar2 = 0;
    for (bVar8 = 0; bVar1 != bVar8; bVar8 = bVar8 + 1) {
      iVar3 = *piVar10;
      if ((*(byte *)(iVar3 + 0x28b) == 0) || ((*(byte *)(iVar3 + 0x28b) & 0xfb) == 9)) {
        if ((*(char *)(iVar5 + 0x92) != '\0') &&
           (iVar6 = FUN_ram_4039c0e0(iVar5 + 0x93,iVar3 + 4,6), iVar6 == 0)) {
          return iVar3;
        }
        if (iVar2 == 0) {
LAB_ram_42086636:
          iVar2 = iVar3;
        }
        else if (iVar3 != iVar2) {
          iVar6 = FUN_ram_420851a8(iVar3);
          iVar7 = FUN_ram_420851a8(iVar2);
          if (iVar7 < iVar6) goto LAB_ram_42086636;
        }
      }
      piVar10 = piVar10 + 1;
    }
  }
  else {
    bVar1 = DAT_ram_3fcc3f76;
    iVar5 = *(int *)(gp + -0xb4);
    if (*(char *)(iVar5 + 0x35d) == '\0') {
      piVar10 = (int *)&DAT_ram_3fcc3f60;
      iVar2 = 0;
      iVar3 = -0x780;
      for (bVar8 = 0; bVar8 != bVar1; bVar8 = bVar8 + 1) {
        iVar6 = *piVar10;
        if ((*(char *)(iVar5 + 0x92) != '\0') &&
           (iVar7 = FUN_ram_4039c0e0(iVar5 + 0x93,iVar6 + 4,6), iVar7 == 0)) {
          return iVar6;
        }
        iVar7 = FUN_ram_420851a8(iVar6);
        if (iVar3 < iVar7) {
          iVar2 = iVar6;
          iVar3 = iVar7;
        }
        piVar10 = piVar10 + 1;
      }
    }
    else {
      iVar2 = _DAT_ram_3fcc3f60;
      for (uVar9 = 0; uVar9 < DAT_ram_3fcc3f76; uVar9 = uVar9 + 1 & 0xff) {
        iVar5 = *(int *)((uVar9 + 0x3b8) * 4 + 0x3fcc3080);
        if ((*(char *)(*(int *)(gp + -0xb4) + 0x92) != '\0') &&
           (iVar3 = FUN_ram_4039c0e0(*(int *)(gp + -0xb4) + 0x93,iVar5 + 4,6), iVar3 == 0)) {
          return iVar5;
        }
        iVar3 = FUN_ram_4208e578(*(undefined1 *)(iVar2 + 0x28b));
        iVar6 = FUN_ram_4208e578(*(undefined1 *)(iVar5 + 0x28b));
        if (iVar3 < iVar6) {
LAB_ram_42086710:
          iVar2 = iVar5;
        }
        else {
          iVar3 = FUN_ram_4208e578(*(undefined1 *)(iVar2 + 0x28b));
          iVar6 = FUN_ram_4208e578(*(undefined1 *)(iVar5 + 0x28b));
          if (iVar3 == iVar6) {
            iVar3 = FUN_ram_420851a8(iVar5);
            iVar6 = FUN_ram_420851a8(iVar2);
            if (iVar6 < iVar3) goto LAB_ram_42086710;
          }
        }
      }
    }
  }
  if (iVar2 == 0) {
    if (DAT_ram_3fcc3f74 == '\x01') {
      FUN_ram_4207a038(1,4,5,
                       "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..." /* TRUNCATED STRING LITERAL */
                      );
      FUN_ram_420864f8();
      return 0;
    }
  }
  else {
    FUN_ram_4207a038(1,4,5,
                     "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..." /* TRUNCATED STRING LITERAL */
                    );
    iVar5 = FUN_ram_42086166(iVar2);
    if (iVar5 != 0) {
      return iVar2;
    }
  }
  return 0;
}

