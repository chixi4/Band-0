
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4204acb6(void)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  
  cVar3 = '\0';
  do {
    iVar5 = (*(code *)&SUB_ram_40011b20)(cVar3);
    if (iVar5 == 0) goto LAB_ram_4204acd6;
    cVar3 = cVar3 + '\x01';
  } while (cVar3 != '\x05');
  while (piVar2 = _DAT_ram_3fcdfdec, *_DAT_ram_3fcdfdec != 0) {
    uVar6 = (*(code *)&SUB_ram_400108ec)();
    if ((piVar2[uVar6 * 0xc + 8] != 0) || (piVar2[(uVar6 + 1) * 0xc + 1] != 0))
    goto LAB_ram_4204acd6;
    bVar1 = *(byte *)(piVar2 + uVar6 * 0xc + 0xb);
    uVar7 = 4;
    if (((bVar1 < 8) && (uVar7 = 2, bVar1 != 0)) && ((bVar1 != 3 && (uVar7 = 3, 2 < bVar1)))) {
      uVar7 = bVar1 < 6;
    }
    (*(code *)&SUB_ram_40011d30)(uVar6 & 0xff,uVar7);
  }
  if ((((_DAT_ram_3fcdfdec[8] == 0) && (_DAT_ram_3fcdfdec[0x14] == 0)) &&
      (_DAT_ram_3fcdfdec[0x20] == 0)) && (_DAT_ram_3fcdfdec[0xcd] == 0)) {
    bVar4 = _DAT_ram_3fcdfdec[0xcf] != 0;
  }
  else {
LAB_ram_4204acd6:
    bVar4 = true;
  }
  return bVar4;
}

