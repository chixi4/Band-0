
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039b6ba(int param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  char cVar16;
  uint *puVar17;
  int iVar18;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [44];
  
  if ((_DAT_ram_3fcb55b8 != 0) &&
     ((uint)(*(int *)(gp + 0x5c0) << 10) <
      (uint)(_DAT_ram_6004d000 - *(int *)(*(int *)(_DAT_ram_3fcb55b8 + 0x24) + 4)))) {
    (*(code *)&SUB_ram_40011c1c)();
    _DAT_ram_3fcb55b8 = 0;
    _DAT_ram_3fcb55bc = 0;
    _DAT_ram_3fcb55c0 = 0;
    _DAT_ram_3fcb55c4 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  cVar16 = '\0';
  pbVar15 = *(byte **)(*(int *)(param_1 + 4) + 4);
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar16 = *(char *)(*(int *)(param_1 + 0x1c) + 0x81);
  }
  iVar7 = FUN_ram_42049a00(cVar16);
  if ((*pbVar15 & 4) != 0) {
    return param_1;
  }
  bVar1 = pbVar15[1];
  uVar2 = *(ushort *)(pbVar15 + 0x16);
  if (((uVar2 & 0xf) == 0) && ((bVar1 & 4) == 0)) {
    return param_1;
  }
  _DAT_ram_3fcb5694 = _DAT_ram_3fcb5694 + 1;
  uVar8 = (*(code *)&SUB_ram_40011c58)(pbVar15);
  iVar4 = _DAT_ram_3fcb55b8;
  uVar8 = uVar8 & 0xffff;
  if ((bVar1 & 0x40) == 0) {
    if (iVar7 != 0) {
      FUN_ram_42033fd8(6,0x20,2,"026");
      goto LAB_ram_4039b874;
    }
    iVar9 = (*(uint *)(*(int *)(param_1 + 0x10) + 0x2c) & 0xfff) - 4;
LAB_ram_4039b83c:
    uVar6 = iVar9 - uVar8;
    bVar3 = false;
    uVar5 = 0;
    uVar14 = 0;
  }
  else {
    uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + 0x2c) & 0xfff;
    if ((pbVar15[uVar8 + 3] & 0x20) == 0) {
      uVar8 = uVar8 + 4 & 0xffff;
      iVar9 = uVar5 - 8;
      goto LAB_ram_4039b83c;
    }
    pbVar11 = (byte *)(*(int *)(*(int *)(param_1 + 4) + 4) + uVar8);
    uVar14 = (uint)*(ushort *)(pbVar11 + 6);
    uVar8 = uVar8 + 8 & 0xffff;
    uVar12 = (uint)pbVar11[5] << 0x18 | (uint)pbVar11[4] << 0x10;
    if (iVar7 == 2) {
      uVar6 = (uVar5 - 8) - uVar8;
      uVar5 = uVar12 | pbVar11[2] | (uint)*pbVar11 << 8;
    }
    else {
      uVar6 = (uVar5 - 0xc) - uVar8;
      uVar5 = (uint)pbVar11[1] << 8 | uVar12 | *pbVar11;
    }
    bVar3 = true;
  }
  uVar12 = uVar6 & 0xffff;
  if (_DAT_ram_3fcb55b8 == 0) {
    if ((uVar2 & 0xf) == 0) {
LAB_ram_4039b806:
      _DAT_ram_3fcb55b8 = param_1;
      _DAT_ram_3fcb55bc = (short)uVar8 + (short)uVar6;
      _DAT_ram_3fcb55c0 = uVar5;
      _DAT_ram_3fcb55c4 = uVar14;
      return 0;
    }
LAB_ram_4039b874:
    (*(code *)&SUB_ram_40011c1c)(param_1);
    return 0;
  }
  iVar18 = *(int *)(*(int *)(_DAT_ram_3fcb55b8 + 4) + 4);
  iVar9 = FUN_ram_4204a3b8(pbVar15);
  iVar10 = FUN_ram_4204a3b8(iVar18);
  if ((iVar9 != iVar10) || (iVar9 = FUN_ram_40399d6c(pbVar15 + 4,iVar18 + 4,0xc), iVar9 != 0))
  goto LAB_ram_4039b874;
  if (((*(ushort *)(iVar18 + 0x16) ^ uVar2) & 0xfff0) == 0) {
    uVar13 = *(ushort *)(iVar18 + 0x16) + 1;
    if (uVar2 == uVar13) {
      if ((!bVar3) ||
         ((_DAT_ram_3fcb55c0 + 1 == uVar5 &&
          ((_DAT_ram_3fcb55c0 + 1 < _DAT_ram_3fcb55c0) + _DAT_ram_3fcb55c4 == uVar14)))) {
        if (_DAT_ram_3fcb55bc + uVar12 < *(int *)(_DAT_ram_3fcdfdec + 0x3b0) - 0x30U) {
          puVar17 = *(uint **)(iVar4 + 0x10);
          FUN_ram_40399daa((uint)_DAT_ram_3fcb55bc + iVar18,pbVar15 + uVar8,uVar12);
          _DAT_ram_3fcb55bc = _DAT_ram_3fcb55bc + (short)uVar6;
          puVar17[0xb] = puVar17[0xb] & 0xfffff000 | (puVar17[0xb] & 0xfff) + uVar12 & 0xfff;
          puVar17[1] = puVar17[1] & 0xff0000ff | ((puVar17[1] >> 8) + uVar12 & 0xffff) << 8;
          *puVar17 = *puVar17 & 0xf000ffff | ((*puVar17 >> 0x10 & 0xfff) + uVar12 & 0xfff) << 0x10;
          *(ushort *)(iVar18 + 0x16) = uVar2;
          _DAT_ram_3fcb55c0 = uVar5;
          _DAT_ram_3fcb55c4 = uVar14;
        }
        (*(code *)&SUB_ram_40011c1c)(param_1);
        iVar4 = _DAT_ram_3fcb55b8;
        if ((bVar1 & 4) != 0) {
          return 0;
        }
        *(ushort *)(iVar18 + 0x16) = uVar2 & 0xfff0;
        *(byte *)(iVar18 + 1) = *(byte *)(iVar18 + 1) & 0xfb;
        if (iVar7 != 2) {
          _DAT_ram_3fcb55b8 = 0;
          _DAT_ram_3fcb55bc = 0;
          _DAT_ram_3fcb55c0 = 0;
          _DAT_ram_3fcb55c4 = 0;
          return iVar4;
        }
        iVar7 = *(int *)(*(int *)(iVar4 + 4) + 4);
        uStack_68 = 0;
        uStack_64 = 0;
        FUN_ram_40399daa(auStack_70,(_DAT_ram_3fcb55bc - 8 & 0xffff) + iVar7,8);
        iVar7 = FUN_ram_42049aee(cVar16,2,0,iVar7 + 10,auStack_60,0x20);
        if (iVar7 != 0) {
          (*(code *)&SUB_ram_40011e60)(auStack_60,iVar4,uVar8,&uStack_68);
          iVar7 = FUN_ram_40399d6c(&uStack_68,auStack_70,8);
          if (iVar7 == 0) {
            _DAT_ram_3fcb55b8 = 0;
            _DAT_ram_3fcb55bc = 0;
            _DAT_ram_3fcb55c0 = 0;
            _DAT_ram_3fcb55c4 = 0;
            return iVar4;
          }
          if ((_DAT_ram_3fcdfd4c != (code *)0x0) && (cVar16 == '\0')) {
            (*_DAT_ram_3fcdfd4c)(1);
          }
        }
        goto LAB_ram_4039ba18;
      }
    }
    else if (uVar2 <= uVar13) goto LAB_ram_4039b874;
  }
  else if ((uVar2 & 0xf) == 0) {
    (*(code *)&SUB_ram_40011c1c)(iVar4);
    goto LAB_ram_4039b806;
  }
  (*(code *)&SUB_ram_40011c1c)(param_1);
LAB_ram_4039ba18:
  if (_DAT_ram_3fcb55b8 != 0) {
    (*(code *)&SUB_ram_40011c1c)();
  }
  _DAT_ram_3fcb55b8 = 0;
  _DAT_ram_3fcb55bc = 0;
  _DAT_ram_3fcb55c0 = 0;
  _DAT_ram_3fcb55c4 = 0;
  return 0;
}

