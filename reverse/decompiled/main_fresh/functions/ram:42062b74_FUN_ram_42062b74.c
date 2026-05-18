
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062b74(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  uVar2 = param_1[2];
  if ((((uVar2 < 6) && (param_1[1] == 0)) && (iVar5 = *param_1, -1 < iVar5)) &&
     (((uVar3 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,iVar5), (uVar3 & 1) != 0 &&
       (uVar3 = param_1[4], uVar3 < 4)) &&
      ((uVar7 = param_1[3], uVar7 < 2 && ((uint)param_1[7] < 3)))))) {
    if (param_1[7] == 1) {
      return 0x106;
    }
    uVar6 = param_1[8];
    iVar8 = param_1[5];
    iVar9 = param_1[6];
    iVar4 = FUN_ram_42062312();
    if (iVar4 == 0) {
      if (_DAT_ram_3fcc53a8 == (int *)0x0) {
        return 0x101;
      }
    }
    else {
      FUN_ram_40396966();
      if (_DAT_ram_3fcc53a8[2] == -1) {
        iVar4 = FUN_ram_403948d2(9,1);
        if (iVar4 != 0) {
          FUN_ram_4039bf1e();
        }
        *(uint *)(*_DAT_ram_3fcc53a8 + 0xd0) = *(uint *)(*_DAT_ram_3fcc53a8 + 0xd0) & 0xfffffffc | 2
        ;
      }
      FUN_ram_40396994();
    }
    FUN_ram_42062b02(0,uVar2,iVar8,iVar9);
    FUN_ram_42062aaa(0,uVar2);
    FUN_ram_420627e6(0,uVar2,uVar3);
    FUN_ram_40396966();
    FUN_ram_42062506(0,uVar2,uVar7);
    FUN_ram_40396994();
    FUN_ram_42062a50(iVar5,uVar6 & 1,0,uVar2);
    FUN_ram_40396966();
    piVar1 = _DAT_ram_3fcc53a8;
    iVar4 = param_1[7];
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        if (_DAT_ram_3fcc53a8[5] == 3) {
          _DAT_ram_3fcc53a8[5] = 0;
        }
      }
      else if (iVar4 == 2) {
        *(undefined1 *)((int)_DAT_ram_3fcc53a8 + uVar2 + 0x18) = 1;
        piVar1[5] = 2;
      }
    }
    FUN_ram_40396994();
    if (param_1[7] == 2) {
      FUN_ram_40396966();
      FUN_ram_420624ae(uVar3);
      FUN_ram_40396994();
      FUN_ram_420489f6(iVar5);
    }
    return 0;
  }
  return 0x102;
}

