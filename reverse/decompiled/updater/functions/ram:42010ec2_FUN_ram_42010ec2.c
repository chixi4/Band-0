
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010ec2(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int aiStack_40 [3];
  
  FUN_ram_40398bd0();
  iVar4 = FUN_ram_420110ac();
  iVar4 = -(iVar4 * 0x14 + 0xfU & 0xfffffff0);
  piVar9 = (int *)((int)aiStack_40 + iVar4);
  piVar2 = (int *)((int)aiStack_40 + iVar4);
  uVar5 = FUN_ram_420110ce((int)aiStack_40 + iVar4);
  uVar13 = uVar5;
  for (uVar8 = 1; uVar8 < uVar5; uVar8 = uVar8 + 1) {
    if (((piVar9[5] == *piVar9 + piVar9[1]) && (piVar9[7] == piVar9[2])) &&
       ((char)piVar9[9] == (char)piVar9[4])) {
      piVar9[5] = *piVar9;
      piVar9[2] = -1;
      piVar9[6] = piVar9[6] + piVar9[1];
      uVar13 = uVar13 - 1;
    }
    piVar9 = piVar9 + 5;
  }
  iVar14 = uVar13 * 0x24;
  iVar1 = -(iVar14 + 0xfU & 0xfffffff0);
  puVar12 = (undefined1 *)((int)aiStack_40 + iVar1 + iVar4);
  iVar3 = 0;
  for (uVar8 = 0; uVar8 != uVar5; uVar8 = uVar8 + 1) {
    iVar10 = (int)aiStack_40 + iVar3 * 0x24 + iVar1 + iVar4;
    if (piVar2[2] == -1) {
      (*(code *)&SUB_ram_40010488)(iVar10,0,0x24);
      iVar15 = iVar3;
    }
    else {
      iVar6 = FUN_ram_40399daa(iVar10,piVar2[2] * 0x10 + 0x3c0747ac,0xc);
      iVar7 = *piVar2;
      iVar15 = iVar3 + 1;
      *(int *)(iVar6 + 0x10) = iVar7 + piVar2[1];
      iVar10 = piVar2[4];
      *(int *)(iVar6 + 0xc) = iVar7;
      uVar11 = 0;
      if ((char)iVar10 == '\0') {
        uVar11 = (*(code *)&SUB_ram_40010338)();
      }
      iVar3 = iVar3 * 0x24 + iVar1 + iVar4 + -0x40;
      *(undefined4 *)(&stack0xffffffdc + iVar3 + 0x40) = uVar11;
      *(undefined4 *)(&stack0xffffffe0 + iVar3 + 0x40) = 0;
    }
    piVar2 = piVar2 + 5;
    iVar3 = iVar15;
  }
  for (uVar5 = 0; uVar5 != uVar13; uVar5 = uVar5 + 1) {
    iVar3 = FUN_ram_42010d56(puVar12,0x804);
    if ((iVar3 != 0) &&
       (iVar3 = (*(code *)&SUB_ram_40010358)(*(undefined4 *)(puVar12 + 0x1c),iVar14), iVar3 != 0))
    goto LAB_ram_42011002;
    puVar12 = puVar12 + 0x24;
  }
  iVar3 = 0;
LAB_ram_42011002:
  FUN_ram_40399daa(iVar3,(int)aiStack_40 + iVar1 + iVar4,iVar14);
  uVar5 = 0;
  do {
    if (uVar5 == uVar13) {
      return;
    }
    if (*(int *)(iVar3 + 0x1c) != 0) {
      (*(code *)&SUB_ram_4001033c)(*(int *)(iVar3 + 0x1c),iVar3 + 0x14);
    }
    if (_DAT_ram_3fcb6598 == 0) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      _DAT_ram_3fcb6598 = iVar3;
    }
    else {
      iVar4 = 0;
      iVar1 = _DAT_ram_3fcb6598;
      do {
        iVar14 = iVar1;
        if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) <=
            (uint)(*(int *)(iVar14 + 0x10) - *(int *)(iVar14 + 0xc))) {
          if (iVar4 == 0) {
            *(int *)(iVar3 + 0x20) = _DAT_ram_3fcb6598;
            _DAT_ram_3fcb6598 = iVar3;
          }
          else {
            *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
            *(int *)(iVar4 + 0x20) = iVar3;
          }
          goto LAB_ram_42011078;
        }
        iVar4 = iVar14;
        iVar1 = *(int *)(iVar14 + 0x20);
      } while (*(int *)(iVar14 + 0x20) != 0);
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(int *)(iVar14 + 0x20) = iVar3;
    }
LAB_ram_42011078:
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 0x24;
  } while( true );
}

