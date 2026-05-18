
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42094078(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_24;
  
  uStack_24 = 0;
  (*(code *)&SUB_ram_40011d6c)(param_2,&uStack_24);
  iVar2 = *param_1;
  uVar9 = uStack_24 >> 0x1c;
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x24) + 0x10) >> 0x14 & 0xf;
  if (uVar9 != 0) {
    iVar7 = *(int *)(iVar2 + 0x20);
    *(undefined1 *)(*(int *)(iVar2 + 0x24) + 0xd) = 0x7f;
    (*(code *)&SUB_ram_40011b44)(param_1,iVar2,0);
    for (uVar8 = 1; uVar8 < uVar9; uVar8 = uVar8 + 1 & 0xff) {
      if (iVar7 == 0) {
        FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff718,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac6c,0x22a);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar2 = *(int *)(iVar7 + 0x20);
      *(undefined1 *)(*(int *)(iVar7 + 0x24) + 0xd) = 0x7f;
      (*(code *)&SUB_ram_40011b44)(param_1,iVar7,0);
      iVar7 = iVar2;
    }
    *param_1 = iVar7;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff730,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac6c,0x232);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar3 = *(uint **)(iVar2 + 0x24);
  if ((*puVar3 & 0x80) == 0) {
    if (uVar9 < *(byte *)(param_1 + 7)) {
      iVar4 = *(int *)(iVar2 + 0x20);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      iVar2 = _DAT_ram_3fcdfdec;
      iVar7 = iVar4;
      if (iVar4 == 0) {
        FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff754,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac6c,0x237);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      do {
        iVar5 = iVar7;
        iVar7 = *(int *)(iVar5 + 0x20);
      } while (*(int *)(iVar5 + 0x20) != 0);
      iVar6 = uVar1 * 0x30 + _DAT_ram_3fcdfdec;
      iVar7 = *(int *)(iVar6 + 0x20);
      *(int *)(iVar5 + 0x20) = iVar7;
      if (iVar7 == 0) {
        *(int *)(iVar6 + 0x24) = iVar5 + 0x20;
      }
      *(int *)(iVar2 + uVar1 * 0x30 + 0x20) = iVar4;
    }
    (*(code *)&SUB_ram_40011c14)(puVar3[1] >> 4 & 0xf);
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return uVar9;
}

