
/* WARNING: Removing unreachable block (ram,0x42012694) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_ram_4201264c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar6 = FUN_ram_42012a3a();
  if (lVar6 != 0) {
    uVar7 = FUN_ram_420129cc();
    if (CONCAT44(_DAT_ram_3fcb6634,_DAT_ram_3fcb6630) <= uVar7) {
      uVar7 = CONCAT44(_DAT_ram_3fcb6634,_DAT_ram_3fcb6630);
      if (_DAT_ram_3fcb6630 == 0 && _DAT_ram_3fcb6634 == 0) goto LAB_ram_42012672;
      uVar8 = FUN_ram_420129cc();
      uVar4 = (uint)(uVar8 >> 6);
      iVar5 = (int)((uVar8 >> 6) >> 0x20);
      uVar3 = _DAT_ram_3fcb6630 >> 6 | _DAT_ram_3fcb6634 << 0x1a;
      uVar1 = uVar4 - uVar3;
      iVar2 = (iVar5 - (_DAT_ram_3fcb6634 >> 6)) - (uint)(uVar4 < uVar1);
      if ((iVar2 < 1) &&
         ((uVar7 = CONCAT44(_DAT_ram_3fcb6634,_DAT_ram_3fcb6630), iVar2 != 0 ||
          (uVar7 = CONCAT44(_DAT_ram_3fcb6634,_DAT_ram_3fcb6630), uVar1 == 0))))
      goto LAB_ram_42012672;
      if (_DAT_ram_3fcb662c < 0) {
        iVar2 = iVar2 + _DAT_ram_3fcb662c + (uint)(uVar1 + _DAT_ram_3fcb6628 < _DAT_ram_3fcb6628);
        if (iVar2 < 0) {
          lVar6 = lVar6 + CONCAT44(_DAT_ram_3fcb6634 >> 6,uVar3);
          uVar3 = (uint)lVar6;
          uVar4 = uVar3 - uVar4;
          lVar6 = CONCAT44(((int)((ulonglong)lVar6 >> 0x20) - iVar5) - (uint)(uVar3 < uVar4),uVar4);
          _DAT_ram_3fcb6628 = uVar1 + _DAT_ram_3fcb6628;
          _DAT_ram_3fcb662c = iVar2;
        }
        else {
LAB_ram_420126fe:
          lVar6 = lVar6 + CONCAT44(_DAT_ram_3fcb662c,_DAT_ram_3fcb6628);
          uVar8 = 0;
        }
      }
      else {
        uVar3 = _DAT_ram_3fcb6628 - uVar1;
        iVar5 = (_DAT_ram_3fcb662c - iVar2) - (uint)(_DAT_ram_3fcb6628 < uVar3);
        if ((iVar5 < 1) && ((iVar5 != 0 || (uVar3 == 0)))) goto LAB_ram_420126fe;
        lVar6 = lVar6 + CONCAT44(iVar2,uVar1);
        _DAT_ram_3fcb6628 = uVar3;
        _DAT_ram_3fcb662c = iVar5;
      }
      _DAT_ram_3fcb6630 = uVar8;
      FUN_ram_420129fe((int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
      uVar7 = _DAT_ram_3fcb6630;
      goto LAB_ram_42012672;
    }
  }
  uVar7 = 0;
LAB_ram_42012672:
  _DAT_ram_3fcb6634 = (uint)(uVar7 >> 0x20);
  _DAT_ram_3fcb6630 = (uint)uVar7;
  return lVar6;
}

