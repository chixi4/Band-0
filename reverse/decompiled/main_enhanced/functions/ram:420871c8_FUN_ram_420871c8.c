
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420871c8(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  piVar1 = _DAT_ram_3fcc3f78;
  if (*(int *)(param_2 + 0x50) != 0) {
    *(undefined1 *)((int)param_1 + 0x3b5) = 1;
  }
  if ((short)param_1[10] != *(short *)(param_2 + 10)) {
    *(short *)(param_1 + 10) = *(short *)(param_2 + 10);
  }
  if (*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\x05') {
    iVar5 = param_1[0xce];
    if (*(int *)(param_2 + 0x68) == 0) {
      if (iVar5 != 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      }
      param_1[0xce] = 0;
    }
    else {
      uVar8 = (uint)*(byte *)(*(int *)(param_2 + 0x68) + 1);
      if (iVar5 == 0) {
        iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(uVar8 + 2);
LAB_ram_42087254:
        param_1[0xce] = iVar5;
      }
      else if (*(byte *)(iVar5 + 1) < uVar8) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
        iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))
                          (*(byte *)(*(int *)(param_2 + 0x68) + 1) + 2);
        goto LAB_ram_42087254;
      }
      FUN_ram_4039c11e(param_1[0xce],*(int *)(param_2 + 0x68),
                       *(byte *)(*(int *)(param_2 + 0x68) + 1) + 2);
    }
    iVar5 = *(int *)(param_2 + 0x3c);
    if ((iVar5 == 0) || (0x3e < *(byte *)(iVar5 + 1))) {
      if ((DAT_ram_3fcc41bd != '\x0f') || (iVar5 != 0)) {
        (*(code *)&SUB_ram_40010488)((int)param_1 + 0x33e,0,0x40);
        *(undefined1 *)((int)param_1 + 0x33d) = 0;
      }
    }
    else {
      *(byte *)((int)param_1 + 0x33d) = *(byte *)(iVar5 + 1) + 2;
      FUN_ram_4039c11e((int)param_1 + 0x33e,iVar5,*(byte *)(iVar5 + 1) + 2);
    }
    iVar5 = *(int *)(param_2 + 0x34);
    if ((iVar5 == 0) || (0x3e < *(byte *)(iVar5 + 1))) {
      (*(code *)&SUB_ram_40010488)((int)param_1 + 0x33,0,0x40);
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      *(byte *)(param_1 + 0xc) = *(byte *)(iVar5 + 1) + 2;
      FUN_ram_4039c11e((int)param_1 + 0x33,iVar5,*(byte *)(iVar5 + 1) + 2);
    }
    sVar3 = _DAT_ram_3fcc41c4;
    uVar2 = DAT_ram_3fcc41be;
    *(short *)(param_1 + 0xa9) = _DAT_ram_3fcc41c4;
    *(bool *)((int)param_1 + 0x2f9) = sVar3 != 0;
    cVar4 = DAT_ram_3fcc4250;
    *(undefined1 *)((int)param_1 + 0x29e) = uVar2;
    *(bool *)((int)param_1 + 0x37e) = cVar4 != '\0';
    *(bool *)((int)param_1 + 0x37f) = DAT_ram_3fcc4251 != '\0';
    *(undefined2 *)(param_1 + 0xa7) = _DAT_ram_3fcc41bc;
    *(undefined1 *)(param_1 + 0xa8) = DAT_ram_3fcc41c0;
    *(undefined1 *)((int)param_1 + 0x2a6) = DAT_ram_3fcc41c6;
  }
  if ((param_3 == 0) && (iVar5 = *(int *)(param_2 + 0x18), iVar5 != 0)) {
    *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)(iVar5 + 2);
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)(iVar5 + 3);
  }
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 8);
  FUN_ram_4039c11e(param_1 + 6,uVar6,8);
  if ((((*(ushort *)((int)param_1 + 0x2a) ^ *(ushort *)(param_2 + 6)) & 0x400) != 0) &&
     (piVar1 == param_1)) {
    FUN_ram_4208b66e(&DAT_ram_3fcc4004,*(ushort *)(param_2 + 6) & 0x400);
  }
  *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(param_2 + 6);
  if (((*(uint *)(*param_1 + 0xa4) & 0x2000) == 0) || (*(int *)(param_2 + 0x40) == 0)) {
    if (*(char *)((int)param_1 + 0x87) != '\0') {
      (*(code *)&SUB_ram_40010488)((int)param_1 + 0x87,0,0x1d);
    }
  }
  else {
    param_1[3] = param_1[3] | 2;
    iVar5 = FUN_ram_42088f64(param_1);
    if ((0 < iVar5) && (piVar1 == param_1)) {
      FUN_ram_4208b67e(param_1,(int)param_1 + 0x87);
    }
  }
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  param_1[0xaa] = _DAT_ram_6004d000;
  (*(code *)&SUB_ram_40012074)(param_1,uVar6,uVar7,0);
  uVar8 = 0;
  if (*(int *)(param_2 + 0x44) != 0) {
    uVar8 = (*(code *)&SUB_ram_4001205c)();
  }
  (*(code *)&SUB_ram_4001207c)(param_1,uVar8 & 1);
  if ((*(int *)(param_2 + 0x44) != 0) && (*(int *)(param_2 + 0x48) != 0)) {
    if ((*(uint *)(*param_1 + 300) & 0x80000) != 0) {
      FUN_ram_4207cf3a(param_1);
      goto LAB_ram_420873e6;
    }
  }
  if ((char)param_1[0x2b] != '\0') {
    *(undefined1 *)(param_1 + 0x2b) = 0;
    if (*(int **)(*param_1 + 0xe4) == param_1) {
      *(undefined1 *)(*param_1 + 299) = 0;
      FUN_ram_4207c908((int)param_1 + 0xab);
    }
  }
LAB_ram_420873e6:
  FUN_ram_4208b90a(param_1,*(undefined4 *)(param_2 + 0x20));
  (*(code *)&SUB_ram_4001214c)(param_1);
  if (((_DAT_ram_3fcc41fc & 1) != 0) && (*(int *)(param_2 + 0x58) != 0)) {
    FUN_ram_420891f6(param_1);
    return;
  }
  return;
}

