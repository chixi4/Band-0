
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42021b72(void)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  short sStack_72;
  int iStack_70;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  cVar11 = DAT_ram_3fcc516c;
  if (DAT_ram_3fcc516c == '\0') {
LAB_ram_42021b9a:
    iVar7 = 0x103;
  }
  else {
    iStack_70 = 0;
    FUN_ram_420838d4(&iStack_70);
    if (iStack_70 == 0) {
      iVar7 = FUN_ram_42084528(1);
      if ((iVar7 != 0) || (iVar7 = FUN_ram_42084578(), iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
    else {
      if (iStack_70 == 2) goto LAB_ram_42021b9a;
      cVar11 = '\0';
    }
    (*(code *)&SUB_ram_40010488)(auStack_6c,0,0x2c);
    uStack_5c = 100;
    uStack_58 = 300;
    iVar7 = FUN_ram_42084910(auStack_6c,1);
    iVar8 = thunk_FUN_ram_403904a6(0x398);
    if (iVar8 == 0) {
      if (cVar11 != '\0') {
        FUN_ram_420845bc();
      }
      iVar7 = 0x101;
    }
    else {
      if (iVar7 == 0) {
        sStack_72 = 10;
        FUN_ram_42084ac2(&sStack_72,iVar8);
        sVar5 = sStack_72;
        _DAT_ram_3fcc5150 = 0;
        iVar12 = iVar8;
        for (sVar10 = 0; uVar4 = _DAT_ram_3fcc5150, sVar5 != sVar10; sVar10 = sVar10 + 1) {
          if (9 < _DAT_ram_3fcc5150) break;
          if (*(char *)(iVar12 + 6) != '\0') {
            iVar13 = 0x3fcc1704;
            for (uVar6 = 0; uVar6 != uVar4; uVar6 = uVar6 + 1) {
              iVar9 = FUN_ram_4039c438(iVar13);
              iVar13 = iVar13 + 0x29;
              if (iVar9 == 0) goto LAB_ram_42021ca2;
            }
            uVar6 = 0xffffffff;
LAB_ram_42021ca2:
            bVar3 = *(int *)(iVar12 + 0x30) != 0;
            if (uVar6 == 0xffffffff) {
              iVar13 = uVar4 * 0x29;
              FUN_ram_4039c61e(iVar13 + 0x3fcc1704,iVar12 + 6,0x20);
              *(undefined1 *)(iVar13 + 0x3fcc1724) = 0;
              FUN_ram_4039c11e(iVar13 + 0x3fcc1725,iVar12,6);
              uVar2 = *(undefined1 *)(iVar12 + 0x2c);
              _DAT_ram_3fcc5150 = uVar4 + 1;
              *(bool *)(iVar13 + 0x3fcc172c) = bVar3;
              *(undefined1 *)(iVar13 + 0x3fcc172b) = uVar2;
            }
            else {
              iVar13 = uVar6 * 0x29;
              cVar1 = *(char *)(iVar12 + 0x2c);
              if (*(char *)(iVar13 + 0x3fcc172b) < cVar1) {
                FUN_ram_4039c11e(iVar13 + 0x3fcc1725,iVar12,6);
                *(bool *)(iVar13 + 0x3fcc172c) = bVar3;
                *(char *)(iVar13 + 0x3fcc172b) = cVar1;
              }
            }
          }
          iVar12 = iVar12 + 0x5c;
        }
      }
      else {
        _DAT_ram_3fcc5150 = 0;
      }
      thunk_FUN_ram_40390634(iVar8);
      if (cVar11 != '\0') {
        FUN_ram_420845bc();
      }
      FUN_ram_42021358(4,0);
    }
  }
  return iVar7;
}

