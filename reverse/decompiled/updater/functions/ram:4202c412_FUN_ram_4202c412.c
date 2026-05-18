
int FUN_ram_4202c412(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = param_1 + 8;
  iVar4 = FUN_ram_42024dea(iVar13,0);
  iVar5 = FUN_ram_42024dea(param_1 + 0x20,0);
  iVar6 = FUN_ram_42024dea(param_1 + 0x28,0);
  iVar14 = param_1 + 0x10;
  iVar7 = FUN_ram_42024dea(param_1 + 0x18,0);
  iVar8 = FUN_ram_42024dea(iVar14,0);
  iVar9 = FUN_ram_42024dea(param_1 + 0x30,0);
  iVar10 = FUN_ram_42024dea(param_1 + 0x38,0);
  iVar11 = FUN_ram_42024dea(param_1 + 0x40,0);
  bVar1 = false;
  if (((iVar5 != 0) && (iVar6 != 0)) && (iVar7 != 0)) {
    bVar1 = iVar8 != 0;
  }
  if (iVar4 == 0) {
    if ((iVar5 == 0) || (iVar6 == 0)) {
      bVar3 = false;
    }
    else {
LAB_ram_4202c608:
      bVar3 = iVar7 == 0 && iVar8 != 0;
      if (iVar4 != 0) goto LAB_ram_4202c616;
    }
    if (bVar1) {
      if (iVar5 != 0) goto LAB_ram_4202c4f0;
LAB_ram_4202c5e4:
      if (bVar3) goto LAB_ram_4202c5ea;
    }
    else {
      bVar1 = bVar3;
      if (!bVar3) {
        return -0x4080;
      }
LAB_ram_4202c4ea:
      bVar3 = bVar1;
      if (iVar5 == 0) goto LAB_ram_4202c5e4;
LAB_ram_4202c4f0:
      bVar2 = false;
LAB_ram_4202c5c0:
      if (iVar6 != 0) {
        iVar4 = FUN_ram_42025088(iVar13,param_1 + 0x20,param_1 + 0x28);
        if (iVar4 != 0) goto LAB_ram_4202c5d4;
        uVar12 = FUN_ram_42024bb6(iVar13);
        *(undefined4 *)(param_1 + 4) = uVar12;
      }
LAB_ram_4202c51c:
      if (!bVar2) goto LAB_ram_4202c5e4;
LAB_ram_4202c522:
      iVar4 = FUN_ram_4202d912(iVar13,iVar14,param_1 + 0x18,param_1 + 0x20,param_1 + 0x28);
LAB_ram_4202c536:
      if (iVar4 != 0) {
        return iVar4 + -0x4080;
      }
    }
LAB_ram_4202c560:
    if (!bVar1) {
LAB_ram_4202c5b2:
      uVar12 = 0;
      goto LAB_ram_4202c570;
    }
  }
  else {
    if (iVar5 != 0) {
      bVar3 = false;
      if (iVar6 != 0) goto LAB_ram_4202c608;
LAB_ram_4202c616:
      bVar2 = false;
LAB_ram_4202c4d4:
      if (bVar1) goto LAB_ram_4202c51c;
      if (bVar2) {
        bVar1 = true;
        if ((iVar4 == 0) && (iVar5 != 0)) goto LAB_ram_4202c5c0;
        goto LAB_ram_4202c522;
      }
      if (!bVar3) {
        return -0x4080;
      }
      bVar1 = bVar3;
      if (iVar4 == 0) goto LAB_ram_4202c4ea;
LAB_ram_4202c5ea:
      iVar4 = FUN_ram_4202db14(param_1 + 0x20,param_1 + 0x28,iVar14,param_1 + 0x18);
      goto LAB_ram_4202c536;
    }
    if (iVar6 == 0) {
      if (iVar7 != 0) {
        bVar2 = iVar8 != 0;
        bVar3 = false;
        goto LAB_ram_4202c4d4;
      }
      if (bVar1) goto LAB_ram_4202c560;
      if (iVar8 == 0) {
        return -0x4080;
      }
      goto LAB_ram_4202c5b2;
    }
    if (!bVar1) {
      return -0x4080;
    }
  }
  if ((((iVar9 == 0) || (iVar10 == 0)) || (iVar11 == 0)) &&
     (iVar4 = FUN_ram_4202dbf0(param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x30,
                               param_1 + 0x38,param_1 + 0x40), iVar4 != 0)) {
LAB_ram_4202c5d4:
    return iVar4 + -0x4080;
  }
  uVar12 = 1;
LAB_ram_4202c570:
  iVar4 = FUN_ram_4202c20a(param_1,uVar12);
  return iVar4;
}

