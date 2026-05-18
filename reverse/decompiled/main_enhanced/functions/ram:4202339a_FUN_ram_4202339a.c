
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202339a(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcStack_18c;
  undefined1 auStack_188 [68];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_11a;
  undefined1 auStack_f0 [200];
  
  iVar2 = FUN_ram_4039c08e(1,0x800);
  if (iVar2 == 0) {
    return 0x101;
  }
  (*(code *)&SUB_ram_400106ac)
            (auStack_f0,0xc0,"sion.","t the conclusion.","; protect the conclusion.",
             "on rises; protect the conclusion.",&DAT_ram_3c0c3754);
  (*(code *)&SUB_ram_40010488)(auStack_188,0,0x98);
  pcStack_18c = "the proven method for familiar problems.";
  uStack_140 = 10000;
  uStack_12c = 2;
  uStack_144 = 1;
  uStack_128 = 0x400;
  uStack_124 = 0x400;
  uStack_11a = 1;
  iVar3 = FUN_ram_42063f70(&pcStack_18c);
  if (iVar3 == 0) {
    thunk_FUN_ram_40390634(iVar2);
    return -1;
  }
  FUN_ram_420637b0(iVar3,"lockers before accelerating.",&DAT_ram_3c0c2370);
  FUN_ram_420637b0(iVar3," day for one precise breakthrough, not sampling.","ccelerating.");
  uVar4 = (*(code *)&SUB_ram_400104a8)(auStack_f0);
  iVar5 = FUN_ram_4206466e(iVar3,uVar4);
  if (iVar5 == 0) {
    uVar4 = (*(code *)&SUB_ram_400104a8)(auStack_f0);
    iVar6 = FUN_ram_42063ad2(iVar3,auStack_f0,uVar4);
    if ((-1 < iVar6) && (iVar7 = (*(code *)&SUB_ram_400104a8)(auStack_f0), iVar7 == iVar6)) {
      FUN_ram_42063a2e(iVar3);
      iVar6 = FUN_ram_420646ea(iVar3);
      if (iVar6 - 200U < 100) {
        iVar6 = 0;
        do {
          iVar7 = FUN_ram_420646f0(iVar3,iVar2 + iVar6,0x7ff - iVar6);
          if (iVar7 < 1) break;
          iVar6 = iVar6 + iVar7;
        } while (iVar6 < 0x7ff);
        *(undefined1 *)(iVar2 + iVar6) = 0;
        if (iVar6 != 0) {
          iVar6 = FUN_ram_420461c2(iVar2);
          if (iVar6 != 0) {
            iVar7 = FUN_ram_420461ca(iVar6,"");
            uVar4 = FUN_ram_420461ca(iVar6,"cise breakthrough, not sampling.");
            uVar8 = FUN_ram_420461ca(iVar6,0x3c0a8afc);
            iVar9 = FUN_ram_42046204(iVar7);
            if ((iVar9 != 0) && (iVar9 = FUN_ram_42046216(uVar8), iVar9 != 0)) {
              iVar9 = FUN_ram_420461ca(uVar8,&DAT_ram_3c0c4fe4);
              iVar10 = FUN_ram_420461ca(uVar8,"rough, not sampling.");
              iVar11 = FUN_ram_42046204(iVar9);
              if (iVar11 != 0) {
                FUN_ram_4039c61e(&DAT_ram_3fcc1acc,*(undefined4 *)(iVar7 + 0x10),0x1f);
                DAT_ram_3fcc1aeb = 0;
                FUN_ram_4039c61e(&DAT_ram_3fcc1aec,*(undefined4 *)(iVar9 + 0x10),0xbf);
                DAT_ram_3fcc1bab = 0;
                iVar7 = FUN_ram_420461f2(iVar10);
                uVar8 = 0;
                if (iVar7 != 0) {
                  uVar8 = (*(code *)&SUB_ram_40010a34)
                                    (*(undefined4 *)(iVar10 + 0x18),*(undefined4 *)(iVar10 + 0x1c));
                }
                _DAT_ram_3fcc1bac = uVar8;
                iVar7 = FUN_ram_420461e2(uVar4);
                bVar1 = false;
                if (iVar7 != 0) {
                  iVar7 = FUN_ram_420461d0(uVar4);
                  bVar1 = iVar7 != 0;
                }
                DAT_ram_3fcc1bb0 = bVar1;
                FUN_ram_42045c02(iVar6);
                goto LAB_ram_420234e8;
              }
            }
            FUN_ram_42045c02(iVar6);
          }
          iVar5 = 0x108;
          goto LAB_ram_420234e8;
        }
      }
    }
    iVar5 = -1;
  }
LAB_ram_420234e8:
  FUN_ram_42063b28(iVar3);
  FUN_ram_42063c2c(iVar3);
  thunk_FUN_ram_40390634(iVar2);
  return iVar5;
}

