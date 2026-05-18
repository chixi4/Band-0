
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203c210(uint *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(param_1 + 0x3e);
  uVar4 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  if (*(uint **)(_DAT_ram_3fcdff64 + 0x14) == param_1) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1e0))(param_1);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1e4))();
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar4);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x68))(param_1 + 0x3d);
  if (param_1[0x33] != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x84c))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x34));
    param_1[0x33] = 0;
  }
  if (param_1[0x32] != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x84c))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x34));
    param_1[0x32] = 0;
  }
  puVar7 = (uint *)param_1[0x35];
  while (puVar7 != (uint *)0x0) {
    while (iVar3 = _DAT_ram_3fcdff64, iVar2 = _DAT_ram_3fcdfecc, uVar5 = *puVar7,
          param_1[0x35] = uVar5, uVar5 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x84c);
      uVar4 = *(undefined4 *)(iVar3 + 0x34);
      param_1[0x36] = (uint)(param_1 + 0x35);
      (*UNRECOVERED_JUMPTABLE)(uVar4);
      puVar7 = (uint *)param_1[0x35];
      if (puVar7 == (uint *)0x0) goto LAB_ram_4203c2f0;
    }
    (**(code **)(iVar2 + 0x84c))(*(undefined4 *)(iVar3 + 0x34));
    puVar7 = (uint *)param_1[0x35];
  }
LAB_ram_4203c2f0:
  puVar7 = (uint *)param_1[0x37];
  while (puVar7 != (uint *)0x0) {
    while (iVar3 = _DAT_ram_3fcdff64, iVar2 = _DAT_ram_3fcdfecc, uVar5 = *puVar7,
          param_1[0x37] = uVar5, uVar5 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x84c);
      uVar4 = *(undefined4 *)(iVar3 + 0x34);
      param_1[0x38] = (uint)(param_1 + 0x37);
      (*UNRECOVERED_JUMPTABLE)(uVar4);
      puVar7 = (uint *)param_1[0x37];
      if (puVar7 == (uint *)0x0) goto LAB_ram_4203c330;
    }
    (**(code **)(iVar2 + 0x84c))(*(undefined4 *)(iVar3 + 0x34));
    puVar7 = (uint *)param_1[0x37];
  }
LAB_ram_4203c330:
  (**(code **)(_DAT_ram_3fcdfec4 + 0x18))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,param_1 + 0x30);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x68))(param_1 + 0x3c);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x68))(param_1 + 0x45);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x1d0))(param_1,(short)param_1[0x12]);
  puVar7 = *(uint **)(_DAT_ram_3fcdff64 + 0x20);
  if (*(uint **)(_DAT_ram_3fcdff64 + 0x20) == param_1) {
    *(uint *)(_DAT_ram_3fcdff64 + 0x20) = param_1[0x3b];
  }
  else {
    do {
      puVar8 = puVar7;
      puVar7 = (uint *)puVar8[0x3b];
    } while (puVar7 != param_1);
    puVar8[0x3b] = param_1[0x3b];
  }
  if (param_1[0x31] != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x904))();
    param_1[0x31] = 0;
  }
  uVar5 = param_1[0x39];
  while (uVar5 != 0) {
    while( true ) {
      iVar2 = _DAT_ram_3fcdfecc;
      uVar9 = *(uint *)(uVar5 + 4);
      param_1[0x39] = uVar9;
      if (uVar9 != 0) break;
      UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x904);
      param_1[0x3a] = (uint)(param_1 + 0x39);
      (*UNRECOVERED_JUMPTABLE)();
      uVar5 = param_1[0x39];
      if (uVar5 == 0) goto LAB_ram_4203c3e0;
    }
    (**(code **)(iVar2 + 0x904))(uVar5 - 0x10);
    uVar5 = param_1[0x39];
  }
LAB_ram_4203c3e0:
  iVar3 = _DAT_ram_3fcdff6c;
  iVar2 = _DAT_ram_3fcdfec4;
  *(undefined1 *)((int)param_1 + 10) = 0;
  (**(code **)(iVar2 + 0x18))(*(int *)(iVar3 + 0x1c) + 0x10,param_1 + 0x2f);
  uVar5 = *param_1;
  if ((uVar5 & 0x30000000) == 0x30000000) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x700))(param_1,0);
    uVar5 = *param_1 & 0xdfffffff;
    *param_1 = uVar5;
  }
  if ((int)(uVar5 << 2) < 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x700))(param_1,param_2);
    *param_1 = *param_1 & 0xdfffffff;
  }
  uVar6 = (ushort)param_1[2];
  if ((param_2 != 0) && ((param_2 != 2 || ((*param_1 & 4) != 0)))) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xa04))
              (0x700c,uVar6,param_2,*param_1 >> 2 & 1,0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa04));
    (**(code **)(_DAT_ram_3fcdfecc + 0x188))(param_1,param_2);
    if (_DAT_ram_3fcdfea8 != (undefined4 *)0x0) {
      uVar6 = (ushort)param_1[2];
      if ((code *)*_DAT_ram_3fcdfea8 == (code *)0x0) goto LAB_ram_4203c49c;
      (*(code *)*_DAT_ram_3fcdfea8)(uVar6 & 0xff,7,0);
    }
    uVar6 = (ushort)param_1[2];
  }
LAB_ram_4203c49c:
  iVar3 = _DAT_ram_3fcdff64;
  iVar2 = _DAT_ram_3fcdfecc;
  uVar5 = *(uint *)(_DAT_ram_3fcdff64 + 0x24);
  param_1[0x3b] = uVar5;
  if (uVar5 == 0) {
    *(uint **)(iVar3 + 0x28) = param_1 + 0x3b;
  }
  uVar1 = *(undefined2 *)((int)param_1 + 0x5e);
  UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0xa04);
  *(uint **)(iVar3 + 0x24) = param_1;
                    /* WARNING: Could not recover jumptable at 0x4203c4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x700b,uVar6,uVar1,param_2);
  return;
}

