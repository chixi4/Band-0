
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420530da(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  
  iVar1 = FUN_ram_42051500(2);
  cVar6 = (char)param_1;
  iVar7 = _DAT_ram_3fcb67c0;
  if (iVar1 != 0) goto LAB_ram_4205317a;
  while (iVar1 = iVar7, iVar1 != 0) {
    iVar7 = *(int *)(iVar1 + 0xc);
    if ((*(ushort *)(iVar1 + 0x1e) & 8) != 0) {
      *(ushort *)(iVar1 + 0x1e) = *(ushort *)(iVar1 + 0x1e) & 0xfff7;
      FUN_ram_42052650();
    }
  }
  uVar5 = 0;
  iVar7 = 0;
  for (iVar1 = _DAT_ram_3fcb67bc; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    uVar4 = _DAT_ram_3fcb67cc - *(int *)(iVar1 + 0x24);
    iVar2 = iVar1;
    if (uVar4 < uVar5) {
      iVar2 = iVar7;
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
    iVar7 = iVar2;
  }
  if (iVar7 != 0) {
    FUN_ram_42053070();
  }
  iVar1 = FUN_ram_42051500(2);
  if (iVar1 != 0) goto LAB_ram_4205317a;
  FUN_ram_420530a0(9);
  iVar1 = FUN_ram_42051500(2);
  if (iVar1 != 0) goto LAB_ram_4205317a;
  FUN_ram_420530a0(8);
  iVar1 = FUN_ram_42051500(2);
  if (iVar1 != 0) goto LAB_ram_4205317a;
  FUN_ram_420530a0(6);
  iVar1 = FUN_ram_42051500(2);
  if (iVar1 != 0) goto LAB_ram_4205317a;
  FUN_ram_420530a0(5);
  iVar1 = FUN_ram_42051500(2);
  if (iVar1 != 0) goto LAB_ram_4205317a;
  if (cVar6 < '\0') {
    param_1 = 0x7f;
LAB_ram_42053244:
    uVar5 = param_1 - 1U & 0xff;
    uVar4 = 0;
    iVar7 = 0;
    for (iVar1 = _DAT_ram_3fcb67c0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      uVar3 = (uint)*(byte *)(iVar1 + 0x18);
      if ((uVar3 < uVar5) ||
         ((uVar3 == uVar5 && (uVar4 <= (uint)(_DAT_ram_3fcb67cc - *(int *)(iVar1 + 0x24)))))) {
        uVar4 = _DAT_ram_3fcb67cc - *(int *)(iVar1 + 0x24);
        uVar5 = uVar3;
        iVar7 = iVar1;
      }
    }
    if (iVar7 != 0) {
      FUN_ram_42053070(iVar7);
    }
  }
  else if (param_1 != 0) goto LAB_ram_42053244;
  iVar1 = FUN_ram_42051500(2);
  if (iVar1 == 0) {
    return 0;
  }
LAB_ram_4205317a:
  iVar1 = (*(code *)&SUB_ram_40010488)(iVar1,0,0xa4);
  *(undefined2 *)(iVar1 + 0x68) = 0x1680;
  *(undefined4 *)(iVar1 + 0x2c) = 0x16801680;
  *(undefined1 *)(iVar1 + 0xb) = 0x40;
  *(undefined2 *)(iVar1 + 0x44) = 3;
  *(undefined2 *)(iVar1 + 0x42) = 3;
  *(undefined4 *)(iVar1 + 0x34) = 0x218ffff;
  iVar7 = _DAT_ram_3fcb67cc;
  *(char *)(iVar1 + 0x18) = cVar6;
  *(int *)(iVar1 + 0x24) = iVar7;
  *(undefined1 *)(iVar1 + 0x22) = DAT_ram_3fcb67b8;
  *(undefined4 *)(iVar1 + 0x4c) = 0x16800001;
  *(undefined4 *)(iVar1 + 0x84) = 0x42042d70;
  *(undefined4 *)(iVar1 + 0x94) = 7200000;
  *(undefined4 *)(iVar1 + 0x98) = 75000;
  *(undefined4 *)(iVar1 + 0x9c) = 9;
  return iVar1;
}

