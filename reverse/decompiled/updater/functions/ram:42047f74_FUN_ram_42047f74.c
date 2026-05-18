
/* WARNING: Removing unreachable block (ram,0x4204807c) */
/* WARNING: Removing unreachable block (ram,0x420480ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42047f74(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_a3;
  uint uVar7;
  int extraout_a3_00;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  uVar15 = CONCAT44(_DAT_ram_3fcb5514,_DAT_ram_3fcb5510);
  if ((iVar2 == 0) ||
     ((DAT_ram_3fcb5491 < 2 &&
      (uVar15 = CONCAT44(_DAT_ram_3fcb5514,_DAT_ram_3fcb5510), DAT_ram_3fcb537e == '\0'))))
  goto LAB_ram_42048166;
  uVar14 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
  iVar8 = (int)(uVar14 >> 0x20);
  iVar2 = (int)uVar14;
  uVar7 = extraout_a3;
  if ((DAT_ram_3fcb54fc != '\0') && (_DAT_ram_3fcb54fe != 0)) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb54c0);
    uVar9 = _DAT_ram_3fcb5510 + _DAT_ram_3fcb5518;
    uVar7 = uVar9 - iVar2;
    _DAT_ram_3fcb551c =
         (((uint)(uVar9 < _DAT_ram_3fcb5518) + _DAT_ram_3fcb5514 + _DAT_ram_3fcb551c) - iVar8) -
         (uint)(uVar9 < uVar7);
    _DAT_ram_3fcb5518 = uVar7;
    if ((int)_DAT_ram_3fcb551c < 0) {
      uVar7 = 0;
      _DAT_ram_3fcb551c = 0;
      _DAT_ram_3fcb5518 = uVar7;
    }
  }
  uVar1 = CONCAT44(_DAT_ram_3fcb53e4,_DAT_ram_3fcb53e0);
  if (_DAT_ram_3fcb5518 == 0 && _DAT_ram_3fcb551c == 0) {
LAB_ram_420480b0:
    uVar15 = CONCAT44(_DAT_ram_3fcb5514,_DAT_ram_3fcb5510);
    if (DAT_ram_3fcb54fc != '\0') {
      DAT_ram_3fcb54fc = 0;
      FUN_ram_40392eec(0x11,1);
      (*(code *)&SUB_ram_40011d48)();
      return;
    }
  }
  else {
    uVar9 = (uint)_DAT_ram_3fcb54fe;
    if (uVar9 == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb54ac);
      pcVar13 = *(code **)(_DAT_ram_3fcdfdd8 + 0xf0);
      iVar3 = FUN_ram_4039d0ae();
      iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
      (*pcVar13)(0x3fcb54ac,iVar3 * iVar4 * 100,0);
      if (uVar1 <= uVar14) goto LAB_ram_420480b0;
      uVar7 = (uint)(_DAT_ram_3fcb53e0 < _DAT_ram_3fcb53e0 - iVar2);
      iVar3 = (_DAT_ram_3fcb53e4 - iVar8) - uVar7;
      pcVar13 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
      uVar5 = 1;
      iVar8 = extraout_a3_00;
      uVar11 = _DAT_ram_3fcb53e0 - iVar2;
LAB_ram_420480a8:
      (*pcVar13)(uVar5,0,uVar11,iVar8,uVar7,pcVar13);
      if (uVar11 == 0 && iVar3 == 0) goto LAB_ram_420480b0;
    }
    else {
      uVar11 = _DAT_ram_3fcb5518;
      if (uVar14 < uVar1) {
        uVar6 = _DAT_ram_3fcb53e0 - iVar2;
        uVar12 = (_DAT_ram_3fcb53e4 - iVar8) - (uint)(_DAT_ram_3fcb53e0 < uVar6);
        if ((uVar12 < _DAT_ram_3fcb551c) ||
           ((_DAT_ram_3fcb551c == uVar12 && (uVar6 < _DAT_ram_3fcb5518)))) {
          uVar11 = uVar6;
        }
        uVar5 = 1;
        pcVar13 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
      }
      else {
        uVar6 = _DAT_ram_3fcb5508 + uVar9 * 1000;
        uVar7 = uVar6 - iVar2;
        uVar6 = (((uint)(uVar6 < uVar9 * 1000) + _DAT_ram_3fcb550c) - iVar8) - (uint)(uVar6 < uVar7)
        ;
        if ((int)uVar6 < 0) {
          uVar7 = 0;
          uVar6 = 0;
        }
        uVar10 = _DAT_ram_3fcb5520 + _DAT_ram_3fcb53e0;
        uVar12 = uVar10 - iVar2;
        uVar9 = (uint)(uVar10 < uVar12);
        uVar10 = (((uint)(uVar10 < _DAT_ram_3fcb53e0) + _DAT_ram_3fcb53e4 + _DAT_ram_3fcb5524) -
                 iVar8) - uVar9;
        if ((int)uVar10 < 0) {
          uVar12 = 0;
          uVar10 = 0;
LAB_ram_420481d6:
          if ((uVar10 != uVar6) || (uVar12 <= uVar7)) {
            uVar11 = uVar7 - uVar12;
            uVar9 = ((uVar6 - uVar10) - (uint)(uVar7 < uVar11)) * 2 | uVar11 >> 0x1f;
            if ((_DAT_ram_3fcb551c <= uVar9) &&
               ((_DAT_ram_3fcb551c != uVar9 || (_DAT_ram_3fcb5518 <= uVar11 * 2))))
            goto LAB_ram_420480b0;
            uVar12 = uVar12 + _DAT_ram_3fcb5518;
            uVar7 = uVar12 - uVar7;
            iVar8 = (uint)(uVar12 < _DAT_ram_3fcb5518) + uVar10 + _DAT_ram_3fcb551c;
            iVar3 = (iVar8 - uVar6) - (uint)(uVar12 < uVar7);
            pcVar13 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
            uVar5 = 0x26;
            uVar11 = uVar7;
            goto LAB_ram_420480a8;
          }
        }
        else if (uVar10 <= uVar6) goto LAB_ram_420481d6;
        pcVar13 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
        uVar5 = 0x26;
        uVar6 = _DAT_ram_3fcb5518;
        uVar7 = _DAT_ram_3fcb5524;
      }
      (*pcVar13)(uVar5,0,uVar6,uVar7,uVar9,pcVar13);
    }
    if (DAT_ram_3fcb54fc == '\0') {
      (*(code *)&SUB_ram_40011d44)();
      DAT_ram_3fcb54fc = '\x01';
      FUN_ram_40392eec(0x11,0);
    }
    if (_DAT_ram_3fcb54fe != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))(0x3fcb54c0,uVar11,0);
    }
    uVar15 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
  }
LAB_ram_42048166:
  _DAT_ram_3fcb5514 = (int)((ulonglong)uVar15 >> 0x20);
  _DAT_ram_3fcb5510 = (int)uVar15;
  return;
}

