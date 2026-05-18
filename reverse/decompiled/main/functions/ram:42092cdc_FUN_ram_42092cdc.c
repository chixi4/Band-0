
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42092cdc(void)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  cVar2 = '\0';
  while ((iVar4 = FUN_ram_42093cda(cVar2), iVar4 == 0 || (iVar4 = FUN_ram_42092c8e(), iVar4 == 0)))
  {
    puVar1 = _DAT_ram_3fcdfdec;
    cVar2 = cVar2 + '\x01';
    if (cVar2 == '\x05') {
      uVar3 = *_DAT_ram_3fcdfdec;
      while( true ) {
        if (uVar3 == 0) {
          for (uVar3 = puVar1[0xcd]; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x20)) {
            iVar4 = FUN_ram_42092c8e(uVar3);
            if (iVar4 != 0) {
              return 1;
            }
          }
          uVar3 = puVar1[0xcf];
          while( true ) {
            if (uVar3 == 0) {
              puVar6 = puVar1 + 8;
              do {
                for (uVar3 = *puVar6; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x20)) {
                  iVar4 = FUN_ram_42092c8e(uVar3);
                  if (iVar4 != 0) {
                    return 1;
                  }
                }
                puVar6 = puVar6 + 0xc;
              } while (puVar6 != puVar1 + 0x2c);
              return 0;
            }
            iVar4 = FUN_ram_42092c8e(uVar3);
            if (iVar4 != 0) break;
            uVar3 = *(uint *)(uVar3 + 0x20);
          }
          return 1;
        }
        uVar5 = (*(code *)&SUB_ram_400108ec)(uVar3);
        for (uVar7 = puVar1[uVar5 * 0xc + 8]; uVar7 != 0; uVar7 = *(uint *)(uVar7 + 0x20)) {
          iVar4 = FUN_ram_42092c8e(uVar7);
          if (iVar4 != 0) {
            return 1;
          }
        }
        if ((puVar1[(uVar5 + 1) * 0xc + 1] != 0) && (iVar4 = FUN_ram_42092c8e(), iVar4 != 0)) break;
        uVar3 = uVar3 & ~(1 << (uVar5 & 0x1f));
      }
      return 1;
    }
  }
  return 1;
}

