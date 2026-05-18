
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420483f6(void)

{
  longlong lVar1;
  code *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  pbVar3 = (byte *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x1c0))();
  lVar9 = CONCAT44(_DAT_ram_3fcb53e4,_DAT_ram_3fcb53e0);
  lVar1 = CONCAT44(_DAT_ram_3fcb53ec,_DAT_ram_3fcb53e8);
  if (pbVar3 != (byte *)0x0) {
    lVar9 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1bc))();
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
    uVar8 = (uint)*pbVar3 * iVar5 * iVar4;
    lVar9 = lVar9 + (ulonglong)uVar8;
    uVar7 = (uint)lVar9;
    if ((pbVar3[1] & 2) != 0) {
      if ((_DAT_ram_3fcb5504 & 0xffffffbf) == 0) {
        iVar4 = FUN_ram_4204acb6(1);
        if (iVar4 != 0) {
          pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
          iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
          (*pcVar2)(1,0,uVar7 - iVar4);
          (*(code *)&SUB_ram_40011f68)();
        }
        DAT_ram_3fcb538a = 1;
      }
      else {
        pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
        iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
        (*pcVar2)(1,0,uVar7 - iVar4);
      }
      _DAT_ram_3fcb53e0 = lVar9;
      iVar4 = FUN_ram_4039d0ae();
      iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
      uVar6 = iVar4 * iVar5 * 100;
      _DAT_ram_3fcb5520 = uVar6 - uVar8;
      _DAT_ram_3fcb5524 = -(uint)(uVar6 < _DAT_ram_3fcb5520);
      FUN_ram_42047f74();
      iVar4 = FUN_ram_42047a86();
      if ((iVar4 == 0) &&
         ((DAT_ram_3fcb537e == '\0' || ((DAT_ram_3fcb537f != '\0' && (DAT_ram_3fcb558e == '\0'))))))
      {
        FUN_ram_4204797c();
      }
    }
    if ((pbVar3[1] & 1) != 0) {
      FUN_ram_40392eec(7,0);
      if (DAT_ram_3fcb537e == '\0') {
        _DAT_ram_3fcb53e8 = lVar9 + -1000;
      }
      else {
        _DAT_ram_3fcb53e8 =
             CONCAT44((int)((ulonglong)lVar9 >> 0x20) - (uint)(uVar7 < uVar7 - _DAT_ram_3fcb53b0),
                      uVar7 - _DAT_ram_3fcb53b0);
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5460);
      iVar4 = _DAT_ram_3fcb53e8;
      pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0xf0);
      iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      (*pcVar2)(0x3fcb5460,iVar4 - iVar5,0);
    }
    lVar9 = _DAT_ram_3fcb53e0;
    lVar1 = _DAT_ram_3fcb53e8;
    if ((pbVar3[1] & 4) != 0) {
      iVar4 = FUN_ram_42047a86();
      lVar9 = _DAT_ram_3fcb53e0;
      lVar1 = _DAT_ram_3fcb53e8;
      if (iVar4 == 0) {
        pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
        iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
        (*pcVar2)(1,0,uVar7 - iVar4);
        lVar9 = _DAT_ram_3fcb53e0;
        lVar1 = _DAT_ram_3fcb53e8;
      }
      _DAT_ram_60047ca0 = _DAT_ram_60047ca0 | 0xe0000;
    }
  }
  _DAT_ram_3fcb53ec = (undefined4)((ulonglong)lVar1 >> 0x20);
  _DAT_ram_3fcb53e8 = (int)lVar1;
  _DAT_ram_3fcb53e4 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_ram_3fcb53e0 = (undefined4)lVar9;
  return;
}

