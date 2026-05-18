
int FUN_ram_4206f468(int param_1)

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
  iVar4 = FUN_ram_420685b4(iVar13,0);
  iVar5 = FUN_ram_420685b4(param_1 + 0x20,0);
  iVar6 = FUN_ram_420685b4(param_1 + 0x28,0);
  iVar14 = param_1 + 0x10;
  iVar7 = FUN_ram_420685b4(param_1 + 0x18,0);
  iVar8 = FUN_ram_420685b4(iVar14,0);
  iVar9 = FUN_ram_420685b4(param_1 + 0x30,0);
  iVar10 = FUN_ram_420685b4(param_1 + 0x38,0);
  iVar11 = FUN_ram_420685b4(param_1 + 0x40,0);
  bVar1 = false;
  if (((iVar5 != 0) && (iVar6 != 0)) && (iVar7 != 0)) {
    bVar1 = iVar8 != 0;
  }
  if (iVar4 == 0) {
    if ((iVar5 == 0) || (iVar6 == 0)) {
      bVar3 = false;
    }
    else {
LAB_ram_4206f65e:
      bVar3 = iVar7 == 0 && iVar8 != 0;
      if (iVar4 != 0) goto LAB_ram_4206f66c;
    }
    if (bVar1) {
      if (iVar5 != 0) goto LAB_ram_4206f546;
LAB_ram_4206f63a:
      if (bVar3) goto LAB_ram_4206f640;
    }
    else {
      bVar1 = bVar3;
      if (!bVar3) {
        return -0x4080;
      }
LAB_ram_4206f540:
      bVar3 = bVar1;
      if (iVar5 == 0) goto LAB_ram_4206f63a;
LAB_ram_4206f546:
      bVar2 = false;
LAB_ram_4206f616:
      if (iVar6 != 0) {
        iVar4 = FUN_ram_42068852(iVar13,param_1 + 0x20,param_1 + 0x28);
        if (iVar4 != 0) goto LAB_ram_4206f62a;
        uVar12 = FUN_ram_420683c4(iVar13);
        *(undefined4 *)(param_1 + 4) = uVar12;
      }
LAB_ram_4206f572:
      if (!bVar2) goto LAB_ram_4206f63a;
LAB_ram_4206f578:
      iVar4 = FUN_ram_42070968(iVar13,iVar14,param_1 + 0x18,param_1 + 0x20,param_1 + 0x28);
LAB_ram_4206f58c:
      if (iVar4 != 0) {
        return iVar4 + -0x4080;
      }
    }
LAB_ram_4206f5b6:
    if (!bVar1) {
LAB_ram_4206f608:
      uVar12 = 0;
      goto LAB_ram_4206f5c6;
    }
  }
  else {
    if (iVar5 != 0) {
      bVar3 = false;
      if (iVar6 != 0) goto LAB_ram_4206f65e;
LAB_ram_4206f66c:
      bVar2 = false;
LAB_ram_4206f52a:
      if (bVar1) goto LAB_ram_4206f572;
      if (bVar2) {
        bVar1 = true;
        if ((iVar4 == 0) && (iVar5 != 0)) goto LAB_ram_4206f616;
        goto LAB_ram_4206f578;
      }
      if (!bVar3) {
        return -0x4080;
      }
      bVar1 = bVar3;
      if (iVar4 == 0) goto LAB_ram_4206f540;
LAB_ram_4206f640:
      iVar4 = FUN_ram_42070b6a(param_1 + 0x20,param_1 + 0x28,iVar14,param_1 + 0x18);
      goto LAB_ram_4206f58c;
    }
    if (iVar6 == 0) {
      if (iVar7 != 0) {
        bVar2 = iVar8 != 0;
        bVar3 = false;
        goto LAB_ram_4206f52a;
      }
      if (bVar1) goto LAB_ram_4206f5b6;
      if (iVar8 == 0) {
        return -0x4080;
      }
      goto LAB_ram_4206f608;
    }
    if (!bVar1) {
      return -0x4080;
    }
  }
  if ((((iVar9 == 0) || (iVar10 == 0)) || (iVar11 == 0)) &&
     (iVar4 = FUN_ram_42070c46(param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x30,
                               param_1 + 0x38,param_1 + 0x40), iVar4 != 0)) {
LAB_ram_4206f62a:
    return iVar4 + -0x4080;
  }
  uVar12 = 1;
LAB_ram_4206f5c6:
  iVar4 = FUN_ram_4206f260(param_1,uVar12);
  return iVar4;
}

