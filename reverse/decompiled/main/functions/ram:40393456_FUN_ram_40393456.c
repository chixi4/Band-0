
undefined4 FUN_ram_40393456(int param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_1 == 0) {
    return 0x102;
  }
  uVar7 = *param_2;
  bVar2 = true;
  if ((uVar7 & 8) == 0) {
    bVar2 = param_2[8] != 0;
  }
  bVar3 = true;
  if ((uVar7 & 4) == 0) {
    bVar3 = param_2[9] != 0;
  }
  if ((uVar7 & 0x80) == 0) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  else {
    cVar1 = *(char *)((int)param_2 + 0x2a);
  }
  if (((uVar7 & 4) != 0) && (0x20 < param_2[5])) {
    return 0x102;
  }
  uVar6 = param_2[4];
  if (((uVar7 & 8) != 0) && (0x20 < uVar6)) {
    return 0x102;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x74) + 0x9c);
  uVar8 = *(int *)(iVar9 + 0x3c) << 3;
  if (uVar8 < uVar6) {
    return 0x102;
  }
  uVar5 = param_2[5];
  if (uVar8 < uVar5) {
    return 0x102;
  }
  uVar8 = *(uint *)(param_1 + 0x2c) & 0x10;
  if ((uVar8 == 0) && (uVar6 < uVar5)) {
    return 0x102;
  }
  if ((uVar7 & 3) == 0) {
    if (uVar8 == 0) {
      if (uVar6 == 0) {
        if (bVar2) {
          return 0x102;
        }
        if (uVar5 == 0) {
          param_2[5] = 0;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 100);
        if (uVar5 == 0) {
          param_2[5] = uVar6;
        }
        if ((((bVar2) && (bVar3)) && (cVar1 != '\0')) && (iVar4 != 0)) {
          return 0x102;
        }
      }
      goto LAB_ram_40393514;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x2c) & 4) != 0) {
      return 0x102;
    }
    if (uVar8 == 0) {
      return 0x102;
    }
  }
  if (bVar2) {
    if (bVar3) {
      return 0x102;
    }
    if (uVar6 == 0) {
      return 0x102;
    }
LAB_ram_40393560:
    if (uVar5 != 0) {
      return 0x102;
    }
  }
  else {
    if (uVar6 != 0) goto LAB_ram_40393560;
    if (uVar5 != 0) goto LAB_ram_40393514;
  }
  if (bVar3) {
    return 0x102;
  }
LAB_ram_40393514:
  if (*(char *)(iVar9 + 0x40) == '\0') {
    uVar7 = 0x200;
  }
  else {
    uVar7 = 0x40000;
  }
  if ((uVar6 <= uVar7) && (param_2[5] <= uVar7)) {
    iVar9 = FUN_ram_4039491e(param_2[8]);
    if (((iVar9 != 0) || (iVar9 = FUN_ram_4039491e(param_2[9]), iVar9 != 0)) &&
       (iVar9 = FUN_ram_403921ee(), iVar9 == 0)) {
      return 0x103;
    }
    return 0;
  }
  return 0x102;
}

