
/* WARNING: Removing unreachable block (ram,0x40395f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40395d9a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  
  *(int *)(gp + -0x6c0) = DAT_csreg_07e2;
  FUN_ram_4039164c(3,0);
  iVar1 = FUN_ram_4204a86a();
  FUN_ram_40396966();
  thunk_FUN_ram_40396966();
  thunk_FUN_ram_40396966();
  uVar9 = FUN_ram_40395a66();
  iVar3 = DAT_csreg_07e2;
  *(undefined8 *)(gp + -0x6b0) = uVar9;
  FUN_ram_4039164c(4,0);
  lVar10 = FUN_ram_403919ae();
  iVar7 = *(int *)(gp + -0x6c0);
  iVar2 = FUN_ram_4039091a();
  uVar9 = (*(code *)&SUB_ram_400109f0)(iVar2,iVar2 >> 0x1f,1000000,0);
  iVar3 = (*(code *)&SUB_ram_400109f0)(iVar3 - iVar7,0,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar4 = FUN_ram_403911c2();
  uVar5 = FUN_ram_403911f2(uVar4,0);
  FUN_ram_4039139c();
  iVar2 = FUN_ram_4039091a();
  uVar6 = FUN_ram_40390f58();
  if (*(char *)(gp + -0x6a8) != '\0') {
    if ((uint)(iVar2 / 1000000) < uVar6) {
      *(uint *)(gp + -0x6bc) = (uVar6 * 0x76) / (uint)(iVar2 / 1000000);
    }
    else {
      *(undefined4 *)(gp + -0x6bc) = 0x76;
    }
  }
  iVar7 = FUN_ram_403959b6(1000,0,*(undefined4 *)(gp + -0x6b8));
  iVar2 = *(int *)(gp + -0x6bc);
  iVar7 = FUN_ram_40395a4c(iVar7 + 9,0,*(undefined4 *)(gp + -0x6b8));
  iVar7 = iVar2 + iVar3 + iVar7;
  *(int *)(gp + -0x6c4) = iVar7 + 9;
  if ((uVar5 & 0x20) != 0) {
    lVar11 = FUN_ram_40395a4c(8,0,*(undefined4 *)(gp + -0x6b8));
    lVar11 = lVar11 + (ulonglong)(iVar7 + 0x2c5);
    if (((int)((ulonglong)lVar11 >> 0x20) == 0) && ((uint)lVar11 < 2000)) {
      uVar6 = 2000;
    }
    else {
      iVar2 = *(int *)(gp + -0x6c4);
      iVar7 = FUN_ram_40395a4c(8,0,*(undefined4 *)(gp + -0x6b8));
      uVar6 = iVar7 + iVar2 + 700;
    }
    if ((((*(uint *)(gp + -0x6c8) & 8) == 0) || (*(int *)(gp + -0x6cc) != 0)) ||
       (uVar6 < *(uint *)(gp + -0x6d0))) {
      iVar2 = *(int *)(gp + -0x6c4) + 700;
      if (699 < *(uint *)(gp + -0x6bc)) goto LAB_ram_40395eee;
    }
    else {
      uVar5 = uVar5 & 0xffffffdf;
      if (*(uint *)(gp + -0x6bc) < 0x2bd) goto LAB_ram_40395eee;
      iVar2 = *(int *)(gp + -0x6c4) + -700;
    }
    *(int *)(gp + -0x6c4) = iVar2;
  }
LAB_ram_40395eee:
  FUN_ram_40395d60(*(int *)(gp + -0x6c4) - iVar3);
  uStack_38 = 0;
  puStack_34 = &DAT_ram_60008000;
  iVar3 = (*(code *)&SUB_ram_400102a4)(&uStack_38);
  if (iVar3 == 0) {
    (*(code *)&SUB_ram_4001027c)(&uStack_38,0,0,0);
    uVar4 = FUN_ram_40394e16();
    (*(code *)&SUB_ram_40010288)(&uStack_38);
    (*(code *)&SUB_ram_40010284)(&uStack_38,0,uVar4,4);
    (*(code *)&SUB_ram_40010290)(&uStack_38);
    (*(code *)&SUB_ram_4001028c)(&uStack_38);
  }
  uVar6 = *(uint *)(gp + -0x6d0);
  iVar7 = *(int *)(gp + -0x6cc);
  iVar2 = *(int *)(gp + -0x6c4);
  lVar11 = FUN_ram_40395a4c(2,0,*(undefined4 *)(gp + -0x6b8));
  DAT_ram_3fcc4e4c = 0;
  _DAT_ram_3fcc4e50 = _DAT_ram_3fcc4e50 + 1;
  if (((*(uint *)(gp + -0x6c8) & 8) == 0) ||
     (uVar8 = uVar6 - iVar2, lVar11 < CONCAT44(iVar7 - (uint)(uVar6 < uVar8),uVar8))) {
    iVar2 = FUN_ram_403915c0(uVar5);
  }
  else {
    iVar2 = 0x102;
  }
  DAT_ram_3fcc4e4c = iVar2 == 0;
  uVar9 = FUN_ram_40395a66();
  if (DAT_ram_3fcc4e4c != '\0') {
    uVar5 = (uint)uVar9 - *(int *)(gp + -0x6b0);
    lVar11 = FUN_ram_40395a4c(uVar5,((int)((ulonglong)uVar9 >> 0x20) - *(int *)(gp + -0x6ac)) -
                                    (uint)((uint)uVar9 < uVar5),*(undefined4 *)(gp + -0x6b8));
    if (lVar11 != 0) {
      FUN_ram_403967ee((int)(lVar10 + lVar11),(int)((ulonglong)(lVar10 + lVar11) >> 0x20));
    }
    FUN_ram_4039bfe4();
  }
  thunk_FUN_ram_40396994();
  thunk_FUN_ram_40396994();
  if (iVar3 == 0) {
    (*(code *)&SUB_ram_40010288)(&uStack_38);
    (*(code *)&SUB_ram_40010294)(&uStack_38);
    (*(code *)&SUB_ram_4001028c)(&uStack_38);
  }
  if (iVar1 == 0) {
    FUN_ram_4204a8a2();
  }
  FUN_ram_4039164c(2,0);
  if (DAT_ram_3fcc4e4c != '\0') {
    iVar3 = DAT_csreg_07e2 - *(int *)(gp + -0x6c0);
    iVar1 = FUN_ram_4039091a();
    uVar9 = (*(code *)&SUB_ram_400109f0)(iVar1,iVar1 >> 0x1f,1000000,0);
    uVar4 = (*(code *)&SUB_ram_400109f0)(iVar3,0,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    *(undefined4 *)(gp + -0x6bc) = uVar4;
    *(undefined1 *)(gp + -0x6a8) = 0;
  }
  FUN_ram_40396994();
  return iVar2;
}

