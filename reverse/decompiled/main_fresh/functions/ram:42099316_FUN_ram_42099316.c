
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42099316(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  uint local_40;
  uint uStack_3c;
  int iStack_38;
  
  fence();
  fence();
  if (DAT_ram_3fcc48ac == '\0') {
    return;
  }
  fence();
  DAT_ram_3fcc48ad = 1;
  fence();
  do {
    do {
      if (_DAT_ram_3fcc4890 == (int *)&DAT_ram_3fcc4890) {
LAB_ram_420993f4:
        fence();
        DAT_ram_3fcc48ad = 0;
        fence();
        return;
      }
      (**(code **)(_DAT_ram_3fcc53c4 + 0x54))(_DAT_ram_3fcc53d4);
      piVar1 = _DAT_ram_3fcc4890;
      if (_DAT_ram_3fcc4890 == (int *)&DAT_ram_3fcc4890) {
        piVar1 = (int *)0x0;
      }
      (**(code **)(_DAT_ram_3fcc53c4 + 0x58))(_DAT_ram_3fcc53d4);
    } while (piVar1 == (int *)0x0);
    FUN_ram_4206031c(&local_40);
    uVar2 = piVar1[3];
    uVar6 = piVar1[2];
    if ((uStack_3c < uVar2) || ((uVar2 == uStack_3c && (local_40 < uVar6)))) {
LAB_ram_420993aa:
      iVar7 = uVar6 - local_40;
      iVar3 = piVar1[4] - iStack_38;
      if (iVar3 < 0) {
        iVar7 = iVar7 + -1;
        iVar3 = iVar3 + 1000000;
      }
      (**(code **)(_DAT_ram_3fcc53c4 + 0x54))(_DAT_ram_3fcc53d4);
      FUN_ram_42099030();
      FUN_ram_42099016(iVar7 * 1000 + iVar3 / 1000);
      (**(code **)(_DAT_ram_3fcc53c4 + 0x58))(_DAT_ram_3fcc53d4);
      goto LAB_ram_420993f4;
    }
    if ((local_40 == uVar6) && (uStack_3c == uVar2)) {
      if (iStack_38 < piVar1[4]) goto LAB_ram_420993aa;
    }
    iVar11 = piVar1[9];
    iVar3 = piVar1[6];
    iVar7 = piVar1[7];
    if (iVar11 == 0) {
      pcVar10 = (code *)piVar1[8];
      FUN_ram_42099046(piVar1);
      (*pcVar10)(iVar3,iVar7);
    }
    else {
      (**(code **)(_DAT_ram_3fcc53c4 + 0x54))(_DAT_ram_3fcc53d4);
      piVar9 = (int *)*_DAT_ram_3fcc4890;
      piVar8 = _DAT_ram_3fcc4890;
      while (piVar4 = piVar9, piVar8 != (int *)&DAT_ram_3fcc4890) {
        if (piVar1 == piVar8) {
          iVar5 = *piVar1;
          piVar9 = (int *)piVar1[1];
          *(int **)(iVar5 + 4) = piVar9;
          *piVar9 = iVar5;
          *piVar1 = 0;
          piVar1[1] = 0;
          break;
        }
        piVar9 = (int *)*piVar4;
        piVar8 = piVar4;
      }
      (**(code **)(_DAT_ram_3fcc53c4 + 0x58))(_DAT_ram_3fcc53d4);
      iVar7 = (*(code *)piVar1[0xb])(iVar3,iVar7);
      iVar3 = _DAT_ram_3fcc53c4;
      piVar1[10] = iVar7;
      (**(code **)(iVar3 + 0x40))(iVar11);
    }
  } while( true );
}

