
undefined4 FUN_ram_4201c0a4(int param_1,uint *param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar10 = param_3 >> 6 & 1;
  bVar1 = (param_3 & 1) != 0;
  if (bVar1) {
    uVar12 = 1;
    uVar11 = uVar10;
  }
  else {
    uVar11 = 1;
    uVar12 = uVar10;
  }
  uVar10 = param_2[2];
  if ((int)uVar10 < 0) {
    uVar9 = 0;
  }
  else {
    uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,uVar10);
    uVar9 = 8;
    if ((uVar2 & 1) == 0) {
      return 0x102;
    }
  }
  uVar2 = param_2[3];
  if ((-1 < (int)uVar2) &&
     (uVar3 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,uVar2), (uVar3 & 1) == 0)) {
    return 0x102;
  }
  uVar3 = param_2[4];
  if (-1 < (int)uVar3) {
    uVar4 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,uVar3);
    if ((uVar4 & 1) == 0) {
      return 0x102;
    }
    if (-1 < (int)uVar2) {
      uVar9 = uVar9 | 0x80;
    }
  }
  uVar4 = *param_2;
  if (-1 < (int)uVar4) {
    uVar5 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,uVar4);
    uVar9 = uVar9 | 0x20;
    if ((uVar5 & 1) == 0) {
      return 0x102;
    }
  }
  uVar5 = param_2[1];
  if ((int)uVar5 < 0) {
    if (-1 < (int)uVar4) goto LAB_ram_4201c1cc;
LAB_ram_4201c566:
    if (uVar4 == uVar5) goto LAB_ram_4201c1e4;
  }
  else {
    uVar6 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,uVar5);
    uVar9 = uVar9 | 0x10;
    if ((uVar6 & 1) == 0) {
      return 0x102;
    }
    if (-1 < (int)uVar4) {
LAB_ram_4201c1cc:
      uVar6 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,uVar4);
      if ((uVar6 & 1) == 0) goto LAB_ram_4201c1e4;
      if (-1 < (int)uVar5) {
        uVar6 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,uVar5);
        if ((uVar6 & 1) == 0) goto LAB_ram_4201c1e4;
        goto LAB_ram_4201c566;
      }
    }
  }
  uVar9 = uVar9 | 0x40;
LAB_ram_4201c1e4:
  if (((((param_3 & 4) == 0) &&
       (((int)uVar10 < 0 || (uVar10 == *(byte *)(param_1 * 0x24 + 0x3c07576f))))) &&
      (((int)uVar2 < 0 || (uVar2 == *(byte *)(param_1 * 0x24 + 0x3c075772))))) &&
     (((((int)uVar3 < 0 || (uVar3 == *(byte *)(param_1 * 0x24 + 0x3c075773))) &&
       (((int)uVar4 < 0 || (uVar4 == *(byte *)(param_1 * 0x24 + 0x3c075770))))) &&
      (((int)uVar5 < 0 || (uVar5 == *(byte *)(param_1 * 0x24 + 0x3c075771))))))) {
    uVar9 = uVar9 | 2;
    bVar8 = true;
  }
  else {
    uVar9 = uVar9 | 4;
    bVar8 = false;
  }
  uVar7 = 0x102;
  if ((~uVar9 & param_3 & 0xfffffdfe) == 0) {
    if (bVar8) {
      if (-1 < (int)uVar4) {
        uVar7 = *(undefined4 *)(param_1 * 0x24 + 0x3c075778);
        FUN_ram_420185da(uVar4,uVar7,*(undefined1 *)(param_1 * 0x24 + 0x3c075762));
        FUN_ram_4201863c(*param_2,uVar7);
      }
      if (-1 < (int)param_2[1]) {
        uVar7 = *(undefined4 *)(param_1 * 0x24 + 0x3c075778);
        FUN_ram_420185da(param_2[1],uVar7,*(undefined1 *)(param_1 * 0x24 + 0x3c075763));
        FUN_ram_4201863c(param_2[1],uVar7);
      }
      if (-1 < (int)param_2[3]) {
        uVar7 = *(undefined4 *)(param_1 * 0x24 + 0x3c075778);
        FUN_ram_420185da(param_2[3],uVar7,*(undefined1 *)(param_1 * 0x24 + 0x3c075764));
        FUN_ram_4201863c(param_2[3],uVar7);
      }
      if (-1 < (int)param_2[4]) {
        uVar7 = *(undefined4 *)(param_1 * 0x24 + 0x3c075778);
        FUN_ram_420185da(param_2[4],uVar7,*(undefined1 *)(param_1 * 0x24 + 0x3c075765));
        FUN_ram_4201863c(param_2[4],uVar7);
      }
      if (-1 < (int)param_2[2]) {
        uVar7 = *(undefined4 *)(param_1 * 0x24 + 0x3c075778);
        FUN_ram_420185da(param_2[2],uVar7,*(undefined1 *)(param_1 * 0x24 + 0x3c07575d));
        FUN_ram_4201863c(param_2[2],uVar7);
      }
    }
    else {
      if (-1 < (int)uVar4) {
        if ((uVar12 == 0) && ((uVar9 & 0x40) == 0)) {
          FUN_ram_42018204(uVar4);
        }
        else {
          FUN_ram_42018466(uVar4,3);
          (*(code *)&SUB_ram_40010790)(*param_2,*(undefined1 *)(param_1 * 0x24 + 0x3c07575e),0,0);
        }
        (*(code *)&SUB_ram_4001078c)(*param_2,*(undefined1 *)(param_1 * 0x24 + 0x3c075762),0);
        FUN_ram_4201883c(*param_2,1);
      }
      if (-1 < (int)param_2[1]) {
        if ((uVar11 == 0) && ((uVar9 & 0x40) == 0)) {
          FUN_ram_42018204();
        }
        else {
          FUN_ram_42018466(param_2[1],3);
          (*(code *)&SUB_ram_40010790)(param_2[1],*(undefined1 *)(param_1 * 0x24 + 0x3c07575f),0,0);
        }
        (*(code *)&SUB_ram_4001078c)(param_2[1],*(undefined1 *)(param_1 * 0x24 + 0x3c075763),0);
        FUN_ram_4201883c(param_2[1],1);
      }
      if (-1 < (int)param_2[3]) {
        FUN_ram_42018466(param_2[3],3);
        (*(code *)&SUB_ram_40010790)(param_2[3],*(undefined1 *)(param_1 * 0x24 + 0x3c075760),0,0);
        (*(code *)&SUB_ram_4001078c)(param_2[3],*(undefined1 *)(param_1 * 0x24 + 0x3c075764),0);
        FUN_ram_4201883c(param_2[3],1);
      }
      if (-1 < (int)param_2[4]) {
        FUN_ram_42018466(param_2[4],3);
        (*(code *)&SUB_ram_40010790)(param_2[4],*(undefined1 *)(param_1 * 0x24 + 0x3c075761),0,0);
        (*(code *)&SUB_ram_4001078c)(param_2[4],*(undefined1 *)(param_1 * 0x24 + 0x3c075765),0);
        FUN_ram_4201883c(param_2[4],1);
      }
      uVar10 = param_2[2];
      if (-1 < (int)uVar10) {
        if (bVar1) {
          FUN_ram_42018466(uVar10,3);
          (*(code *)&SUB_ram_40010790)(param_2[2],*(undefined1 *)(param_1 * 0x24 + 0x3c07575c),0,0);
        }
        else {
          FUN_ram_42018466(uVar10,1);
        }
        (*(code *)&SUB_ram_4001078c)(param_2[2],*(undefined1 *)(param_1 * 0x24 + 0x3c07575d),0);
        FUN_ram_4201883c(param_2[2],1);
      }
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar9;
    }
    uVar7 = 0;
  }
  return uVar7;
}

