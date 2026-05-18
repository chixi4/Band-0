
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039c99c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined1 *puVar16;
  undefined1 auStack_68 [32];
  int iStack_48;
  
  if ((**(uint **)(param_1 + 0x24) & 0x4000) == 0) {
    (*(code *)&SUB_ram_40011c64)(*(undefined4 *)(param_1 + 0x1c));
  }
  iVar13 = *(int *)(param_1 + 0x1c);
  bVar12 = false;
  uVar11 = *(uint *)(*(int *)(param_1 + 0x24) + 0x10) >> 0x14 & 0xf;
  if (iVar13 != 0) {
    bVar12 = *(byte *)(iVar13 + 0x82) - 4 < 2;
  }
  iStack_48 = param_1;
  bVar15 = true;
  iVar2 = 0;
  iVar10 = _DAT_ram_3fcdfdec + uVar11 * 0x30;
  *(undefined1 *)(iVar10 + 0x4c) = 0;
  *(undefined **)(iVar10 + 0x40) = &sedeleg;
  *(undefined4 *)(iVar10 + 0x44) = 0;
  *(undefined1 *)(iVar10 + 0x2f) = *(undefined1 *)(param_1 + 0x1b);
  uVar1 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 2);
  puVar14 = auStack_68;
  while( true ) {
    puVar16 = *(undefined1 **)(puVar14 + 0x20);
    if (puVar16 == (undefined1 *)0x0) goto LAB_ram_4039cae8;
    **(uint **)(puVar16 + 8) = **(uint **)(puVar16 + 8) & 0xbfffffff;
    iVar3 = (*(code *)&SUB_ram_40011bdc)(iVar13,iVar2,uVar1,puVar16,bVar12);
    iVar10 = _DAT_ram_3fcdfdec;
    iVar6 = _DAT_ram_3fcdfdec + uVar11 * 0x30;
    if ((((*(char *)(iVar6 + 0x4c) != '\0') && (bVar15)) && (bVar12 == true)) &&
       (puVar14 != auStack_68)) {
      bVar15 = false;
      **(uint **)(puVar14 + 8) = **(uint **)(puVar14 + 8) | 0x40000000;
      *(undefined1 *)(iVar6 + 0x41) = 2;
      iVar4 = (*(code *)&SUB_ram_40011be8)(puVar14);
      *(int *)(iVar6 + 0x44) = iVar2 - iVar4;
    }
    if (iVar3 == 0) break;
    iVar2 = iVar2 + iVar3;
    puVar14 = puVar16;
  }
  *(undefined4 *)(*(int *)(puVar14 + 8) + 8) = 0;
  puVar7 = puVar14;
  while (puVar8 = *(undefined1 **)(puVar7 + 0x20), puVar8 != (undefined1 *)0x0) {
    *(undefined4 *)(*(int *)(puVar8 + 8) + 8) = 0;
    puVar7 = puVar8;
  }
  *(undefined4 *)(puVar14 + 0x20) = 0;
  iVar6 = uVar11 * 0x30 + iVar10;
  iVar3 = *(int *)(iVar6 + 0x20);
  *(int *)(puVar7 + 0x20) = iVar3;
  if (iVar3 == 0) {
    *(undefined1 **)(iVar6 + 0x24) = puVar7 + 0x20;
  }
  *(undefined1 **)(iVar10 + uVar11 * 0x30 + 0x20) = puVar16;
LAB_ram_4039cae8:
  if ((**(uint **)(param_1 + 0x24) & 0x400000) == 0) {
    (*(code *)&SUB_ram_40011bd4)(param_1);
    iVar10 = (*(code *)&SUB_ram_40011bd4)(param_1);
    if (iVar10 != iVar2) {
      FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff63c,&DAT_ram_3c0c4a4c,0xc03);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  iVar10 = uVar11 * 0x30;
  while( true ) {
    puVar16 = *(undefined1 **)(_DAT_ram_3fcdfdec + iVar10 + 0x20);
    if ((puVar16 == (undefined1 *)0x0) || ((**(uint **)(puVar16 + 0x24) & 0x40000) == 0)) break;
    FUN_ram_4039ced6(puVar16);
    **(uint **)(puVar16 + 8) = **(uint **)(puVar16 + 8) & 0xbfffffff;
    iVar6 = (*(code *)&SUB_ram_40011bdc)(iVar13,iVar2,uVar1,puVar16,bVar12);
    iVar3 = _DAT_ram_3fcdfdec;
    iVar4 = _DAT_ram_3fcdfdec + iVar10;
    if ((*(char *)(iVar4 + 0x4c) != '\0') && ((bVar15 && (bVar12 == true)))) {
      bVar15 = false;
      **(uint **)(puVar14 + 8) = **(uint **)(puVar14 + 8) | 0x40000000;
      *(undefined1 *)(iVar4 + 0x41) = 2;
      iVar5 = (*(code *)&SUB_ram_40011be8)(puVar14);
      *(int *)(iVar4 + 0x44) = iVar2 - iVar5;
    }
    if (iVar6 == 0) break;
    iVar5 = iVar3 + iVar10;
    iVar4 = *(int *)(*(int *)(iVar5 + 0x20) + 0x20);
    *(int *)(iVar5 + 0x20) = iVar4;
    if (iVar4 == 0) {
      *(int *)(iVar5 + 0x24) = iVar3 + iVar10 + 0x20;
    }
    uVar9 = *(undefined4 *)(puVar16 + 4);
    *(undefined1 **)(puVar14 + 0x20) = puVar16;
    iVar2 = iVar2 + iVar6;
    *(undefined4 *)(*(int *)(puVar14 + 8) + 8) = uVar9;
    *(undefined4 *)(puVar16 + 0x20) = 0;
    puVar14 = puVar16;
  }
  iVar13 = (*(code *)&SUB_ram_40011be8)(puVar14);
  if (bVar15) {
    *(int *)(_DAT_ram_3fcdfdec + uVar11 * 0x30 + 0x44) = iVar2 - iVar13;
  }
  FUN_ram_420b205c(param_1,puVar14,iVar2 - iVar13 & 0xffff);
  *(int *)(_DAT_ram_3fcdfdec + (uVar11 + 1) * 0x30 + 4) = param_1;
  FUN_ram_420b1da8(uVar11);
  return param_1;
}

