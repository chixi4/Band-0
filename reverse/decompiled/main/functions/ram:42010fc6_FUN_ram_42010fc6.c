
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010fc6(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_40 [3];
  
  FUN_ram_4039af8a();
  iVar3 = FUN_ram_420111bc();
  iVar3 = -(iVar3 * 0x14 + 0xfU & 0xfffffff0);
  piVar9 = (int *)((int)aiStack_40 + iVar3);
  piVar2 = (int *)((int)aiStack_40 + iVar3);
  uVar4 = FUN_ram_420111de((int)aiStack_40 + iVar3);
  uVar10 = uVar4;
  for (uVar7 = 1; uVar7 < uVar4; uVar7 = uVar7 + 1) {
    if (((piVar9[5] == *piVar9 + piVar9[1]) && (piVar9[7] == piVar9[2])) &&
       ((char)piVar9[9] == (char)piVar9[4])) {
      piVar9[5] = *piVar9;
      piVar9[2] = -1;
      piVar9[6] = piVar9[6] + piVar9[1];
      uVar10 = uVar10 - 1;
    }
    piVar9 = piVar9 + 5;
  }
  iVar12 = uVar10 * 0x24;
  iVar1 = -(iVar12 + 0xfU & 0xfffffff0);
  puVar11 = (undefined1 *)((int)aiStack_40 + iVar1 + iVar3);
  uVar7 = 0;
  for (uVar13 = 0; uVar13 != uVar4; uVar13 = uVar13 + 1) {
    iVar5 = (int)aiStack_40 + uVar7 * 0x24 + iVar1 + iVar3;
    if (piVar2[2] == -1) {
      (*(code *)&SUB_ram_40010488)(iVar5,0,0x24);
      uVar14 = uVar7;
    }
    else {
      uVar14 = uVar7 + 1;
      if (uVar10 < uVar14) goto LAB_ram_420110ba;
      iVar5 = FUN_ram_4039c11e(iVar5,&UNK_ram_3c0c5714 + piVar2[2] * 0x10,0xc);
      iVar6 = *piVar2;
      iVar8 = piVar2[1];
      *(int *)(iVar5 + 0xc) = iVar6;
      *(int *)(iVar5 + 0x10) = iVar8 + iVar6;
      if ((char)piVar2[4] == '\0') {
        FUN_ram_42010f5a();
      }
      else {
        *(undefined4 *)(iVar5 + 0x1c) = 0;
      }
      *(undefined4 *)(&stack0xffffffe0 + uVar7 * 0x24 + iVar1 + iVar3) = 0;
    }
    piVar2 = piVar2 + 5;
    uVar7 = uVar14;
  }
  if ((uVar10 == uVar7) && (_DAT_ram_3fcc4e20 == 0)) {
    for (uVar4 = 0; uVar4 != uVar10; uVar4 = uVar4 + 1) {
      iVar5 = FUN_ram_42010dee(puVar11,0x804);
      if ((iVar5 != 0) &&
         (iVar5 = (*(code *)&SUB_ram_40010358)(*(undefined4 *)(puVar11 + 0x1c),iVar12), iVar5 != 0))
      {
        FUN_ram_4039c11e(iVar5,(int)aiStack_40 + iVar1 + iVar3,iVar12);
        uVar4 = 0;
        do {
          if (uVar4 == uVar10) {
            return;
          }
          if (*(int *)(iVar5 + 0x1c) != 0) {
            (*(code *)&SUB_ram_4001033c)(*(int *)(iVar5 + 0x1c),iVar5 + 0x14);
          }
          if (_DAT_ram_3fcc4e20 == 0) {
            *(undefined4 *)(iVar5 + 0x20) = 0;
            _DAT_ram_3fcc4e20 = iVar5;
          }
          else {
            iVar3 = 0;
            iVar1 = _DAT_ram_3fcc4e20;
            do {
              iVar12 = iVar1;
              if ((uint)(*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc)) <=
                  (uint)(*(int *)(iVar12 + 0x10) - *(int *)(iVar12 + 0xc))) {
                if (iVar3 == 0) {
                  *(int *)(iVar5 + 0x20) = _DAT_ram_3fcc4e20;
                  _DAT_ram_3fcc4e20 = iVar5;
                }
                else {
                  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
                  *(int *)(iVar3 + 0x20) = iVar5;
                }
                goto LAB_ram_42011164;
              }
              iVar3 = iVar12;
              iVar1 = *(int *)(iVar12 + 0x20);
            } while (*(int *)(iVar12 + 0x20) != 0);
            *(undefined4 *)(iVar5 + 0x20) = 0;
            *(int *)(iVar12 + 0x20) = iVar5;
          }
LAB_ram_42011164:
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0x24;
        } while( true );
      }
      puVar11 = puVar11 + 0x24;
    }
  }
LAB_ram_420110ba:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

