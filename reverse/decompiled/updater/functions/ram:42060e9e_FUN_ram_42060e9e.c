
undefined4 FUN_ram_42060e9e(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puStack_578;
  undefined4 uStack_574;
  undefined1 auStack_570 [64];
  undefined1 auStack_530 [64];
  undefined1 auStack_4f0 [32];
  undefined1 auStack_4d0 [32];
  undefined1 auStack_4b0 [128];
  undefined1 auStack_430 [512];
  undefined1 auStack_230 [520];
  
  (*(code *)&SUB_ram_40010488)(auStack_430,0,0x200);
  if (*(int *)(param_1 + 0x7c) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(*(int *)(param_1 + 0x7c) + 100) != 0) {
    iVar4 = FUN_ram_4205e486();
    if ((((iVar4 == 0) ||
         (iVar3 = FUN_ram_4205e64c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),
                                   *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x58),
                                   *(undefined4 *)(param_1 + 0x68),iVar4), iVar3 < 0)) ||
        (iVar3 = FUN_ram_4205e5fa(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),iVar4,
                                  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x54),iVar4), iVar3 < 0
        )) || ((iVar3 = FUN_ram_4205e64c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),iVar4,
                                         *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x60),iVar4),
               iVar3 < 0 ||
               (iVar3 = FUN_ram_4205e86a(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),iVar4),
               iVar3 != 0)))) {
      iVar3 = -1;
    }
    else {
      iVar3 = FUN_ram_4205e538(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),iVar4,auStack_430,0);
      iVar3 = iVar3 >> 0x1f;
    }
    FUN_ram_4205e51c(iVar4,1);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x7c) + 0x6c) != 0) {
    iVar4 = FUN_ram_42066304();
    if (((iVar4 == 0) ||
        (iVar3 = FUN_ram_42066472(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x5c),
                                  *(undefined4 *)(param_1 + 0x68),
                                  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),iVar4), iVar3 < 0
        )) || ((iVar3 = FUN_ram_420664f0(iVar4,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x50),
                                         *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),iVar4),
               iVar3 < 0 ||
               ((iVar3 = FUN_ram_42066472(iVar4,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x60),
                                          *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),iVar4),
                iVar3 < 0 || (iVar3 = FUN_ram_420665c4(iVar4), iVar3 != 0)))))) {
      iVar3 = -1;
    }
    else {
      iVar3 = FUN_ram_420663cc(iVar4,auStack_430,0x200,
                               *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68));
      iVar3 = iVar3 >> 0x1f;
    }
    FUN_ram_4206636c(iVar4,1);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68);
  iVar4 = FUN_ram_42066304();
  if (iVar4 == 0) {
LAB_ram_42060f2e:
    uVar10 = 0xffffffff;
    iVar6 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x7a);
    iVar3 = 0x20;
    if ((bVar1 & 1) != 0) {
      if (*(int *)(*(int *)(param_1 + 0x7c) + 0x6c) == 0) {
        iVar3 = FUN_ram_42060286(uVar10);
      }
      else {
        iVar3 = FUN_ram_420602a0();
      }
    }
    iVar9 = 0x20;
    if (*(int *)(param_1 + 0x4c) << 5 < 0) {
      iVar9 = iVar3;
    }
    if ((bVar1 & 1) == 0) {
LAB_ram_420610ce:
      (*(code *)&SUB_ram_40010488)(auStack_570,0,iVar3);
      iVar6 = 0;
      puVar5 = auStack_570;
      iVar7 = iVar3;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0x7c) + 0x8c);
      iVar7 = *(int *)(*(int *)(param_1 + 0x7c) + 0x90);
      if (iVar8 == 0) {
        if (iVar7 == 0) goto LAB_ram_420610ce;
        iVar6 = 0;
LAB_ram_420610ae:
        iVar6 = iVar6 + *(int *)(iVar7 + 4);
      }
      else {
        iVar6 = *(int *)(iVar8 + 4);
        if (iVar7 != 0) goto LAB_ram_420610ae;
      }
      iVar6 = FUN_ram_4206582a(iVar6);
      if (iVar6 == 0) goto LAB_ram_42060f2e;
      if ((*(byte *)(*(int *)(param_1 + 0x7c) + 0x94) & 1) == 0) {
        iVar2 = iVar8;
        if (iVar7 != 0) {
          FUN_ram_4205f5c8(iVar6,iVar7);
        }
      }
      else {
        iVar2 = iVar7;
        if (iVar8 != 0) {
          FUN_ram_4205f5c8(iVar6,iVar8);
        }
      }
      if (iVar2 != 0) {
        FUN_ram_4205f5c8(iVar6,iVar2);
      }
      puVar5 = *(undefined1 **)(iVar6 + 8);
      iVar7 = *(int *)(iVar6 + 4);
    }
    puStack_578 = auStack_430;
    uStack_574 = uVar10;
    if ((((iVar3 == 0x20) &&
         (iVar3 = FUN_ram_42021b5c(puVar5,iVar7,1,&puStack_578,&uStack_574,auStack_530), -1 < iVar3)
         ) && (iVar3 = FUN_ram_42066436(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x44),
                                        *(undefined4 *)(param_1 + 0x68),iVar4), -1 < iVar3)) &&
       ((iVar3 = FUN_ram_42066454(iVar4,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x74),iVar4),
        -1 < iVar3 &&
        (iVar3 = FUN_ram_420663cc(iVar4,auStack_230,0x200,
                                  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x88)), -1 < iVar3))))
    {
      if ((*(byte *)(param_1 + 0x7a) & 2) == 0) {
        iVar3 = iVar9 + 0x20;
        uVar10 = 0x3c07337c;
      }
      else {
        iVar3 = iVar9 + 0x40;
        uVar10 = 0x3c073370;
      }
      iVar3 = FUN_ram_42062a5c(auStack_530,0x20,uVar10,auStack_230,
                               *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x88),auStack_4f0,iVar3);
      if (-1 < iVar3) {
        thunk_FUN_ram_420293a6(auStack_530,0x40);
        FUN_ram_40399daa(*(undefined4 *)(param_1 + 0x7c),auStack_4f0,0x20);
        *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x40) = 0x20;
        FUN_ram_40399daa(param_1 + 6,auStack_4d0,iVar9);
        *(int *)(param_1 + 0x48) = iVar9;
        FUN_ram_40399daa(param_1 + 0x58,auStack_230,0x10);
        if ((*(byte *)(param_1 + 0x7a) & 2) != 0) {
          FUN_ram_40399daa(*(int *)(param_1 + 0x7c) + 0x95,auStack_4b0,0x20);
          *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xd8) = 0x20;
        }
        thunk_FUN_ram_420293a6(auStack_4f0,0xc0);
        uVar10 = 0;
        goto LAB_ram_42060f32;
      }
    }
    uVar10 = 0xffffffff;
  }
LAB_ram_42060f32:
  FUN_ram_4206587c(iVar6);
  FUN_ram_4206636c(iVar4,0);
  return uVar10;
}

