
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205504a(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  if (param_1 != 0) goto LAB_ram_4205505c;
  do {
    while( true ) {
      uVar6 = FUN_ram_4039bf1e();
LAB_ram_4205505c:
      iVar1 = (int)uVar6;
      iVar3 = *(int *)(iVar1 + 0x14);
      if (((int)((ulonglong)uVar6 >> 0x20) == 0) || ((iVar3 != 4 && (iVar3 != 7)))) break;
      if ((*(int *)(iVar1 + 0x7c) == 0) && (*(short *)(iVar1 + 0x2c) == 0x1680)) {
LAB_ram_42055194:
        uVar2 = FUN_ram_4205458e(iVar1);
        return uVar2;
      }
      if ((*(ushort *)(iVar1 + 0x1e) & 0x10) != 0) {
        FUN_ram_42057d6a(iVar1,*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x28),iVar1,
                         iVar1 + 4,*(undefined2 *)(iVar1 + 0x1a),*(undefined2 *)(iVar1 + 0x1c));
        FUN_ram_42054ba6(iVar1);
        iVar3 = _DAT_ram_3fcc52f0;
        if (_DAT_ram_3fcc52f0 != iVar1) goto LAB_ram_420550e4;
        _DAT_ram_3fcc52f0 = *(int *)(iVar1 + 0xc);
        goto LAB_ram_420550b8;
      }
    }
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        FUN_ram_42054c00(&DAT_ram_3fcc52f0,iVar1);
        DAT_ram_3fcc52ea = 1;
        goto LAB_ram_4205511c;
      }
      if (iVar3 != 0) goto LAB_ram_42055194;
      if (*(short *)(iVar1 + 0x1a) == 0) goto LAB_ram_4205511c;
      iVar3 = _DAT_ram_3fcc52f8;
      if (_DAT_ram_3fcc52f8 != iVar1) break;
      _DAT_ram_3fcc52f8 = *(int *)(iVar1 + 0xc);
      goto LAB_ram_42055118;
    }
    puVar5 = &DAT_ram_3c0f7548;
    do {
      for (iVar3 = *(int *)puVar5[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
        if (iVar1 == *(int *)(iVar3 + 0x80)) {
          *(undefined4 *)(iVar3 + 0x80) = 0;
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined4 *)&DAT_ram_3c0f7554);
    FUN_ram_42054c00(&DAT_ram_3fcc52f4,iVar1);
    if (*(int *)(iVar1 + 0x14) != 1) {
      FUN_ram_420531f8(3,iVar1);
      return 0;
    }
  } while( true );
  while (iVar3 = *(int *)(iVar4 + 0xc), *(int *)(iVar4 + 0xc) != iVar1) {
    iVar4 = iVar3;
    if (iVar4 == 0) goto LAB_ram_42055118;
  }
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
LAB_ram_42055118:
  *(undefined4 *)(iVar1 + 0xc) = 0;
  goto LAB_ram_4205511c;
  while (iVar3 = *(int *)(iVar4 + 0xc), *(int *)(iVar4 + 0xc) != iVar1) {
LAB_ram_420550e4:
    iVar4 = iVar3;
    if (iVar4 == 0) goto LAB_ram_420550b8;
  }
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
LAB_ram_420550b8:
  iVar3 = _DAT_ram_3fcc5300;
  DAT_ram_3fcc52ea = 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if (iVar3 == iVar1) {
    FUN_ram_4205723a();
    return 0;
  }
LAB_ram_4205511c:
  FUN_ram_42054506(iVar1);
  return 0;
}

