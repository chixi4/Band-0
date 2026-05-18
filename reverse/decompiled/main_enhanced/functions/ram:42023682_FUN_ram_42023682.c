
int FUN_ram_42023682(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_1a8 [6];
  undefined1 *puStack_190;
  undefined1 *puStack_18c;
  undefined1 auStack_188 [12];
  undefined1 auStack_17c [12];
  undefined1 auStack_170 [332];
  
  if (DAT_ram_3fcc1aec != '\0') {
    if (DAT_ram_3fcc1aec == '/') {
      puVar6 = &DAT_ram_3c0c39bc;
    }
    else {
      puVar6 = (undefined *)0x3c0a85ec;
    }
    iVar4 = (*(code *)&SUB_ram_400106ac)
                      (auStack_170,0x140,&DAT_ram_3c0c2418,"ot sampling.",puVar6,&DAT_ram_3fcc1aec);
    iVar5 = 0x104;
    if (iVar4 - 1U < 0x13f) {
      local_1a8[0] = 0;
      local_1a8[1] = 0;
      local_1a8[2] = 0;
      local_1a8[3] = 0;
      local_1a8[4] = 0;
      local_1a8[5] = 0;
      pcVar3 = &DAT_ram_3fcc19f4;
      pcVar2 = &DAT_ram_3fcc1930;
      puVar10 = local_1a8 + 3;
      puVar9 = local_1a8;
      cVar7 = '\0';
      cVar8 = '\0';
      do {
        *pcVar3 = '\0';
        *pcVar2 = '\0';
        iVar4 = FUN_ram_420221ba(cVar7,pcVar3,pcVar2);
        if ((iVar4 == 0) && (*pcVar3 != '\0')) {
          cVar1 = *pcVar2;
          cVar8 = cVar8 + '\x01';
          *puVar9 = (uint)pcVar3;
          *puVar10 = -(uint)(cVar1 != '\0') & (uint)pcVar2;
        }
        cVar7 = cVar7 + '\x01';
        pcVar3 = pcVar3 + 0x21;
        pcVar2 = pcVar2 + 0x41;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (cVar7 != '\x03');
      iVar5 = 0x105;
      if (cVar8 != '\0') {
        puStack_18c = &DAT_ram_3fcc1acc;
        puStack_190 = auStack_170;
        FUN_ram_4039c11e(auStack_188,local_1a8,0xc);
        FUN_ram_4039c11e(auStack_17c,local_1a8 + 3,0xc);
        iVar5 = FUN_ram_42017792(&puStack_190);
        if (iVar5 == 0) {
          FUN_ram_42023376(5);
          FUN_ram_40398498(0x32);
          iVar5 = FUN_ram_4201797a();
        }
      }
    }
    return iVar5;
  }
  return 0x103;
}

