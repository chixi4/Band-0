
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42090dfe(void)

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
  lVar9 = CONCAT44(_DAT_ram_3fcc4474,_DAT_ram_3fcc4470);
  lVar1 = CONCAT44(_DAT_ram_3fcc447c,_DAT_ram_3fcc4478);
  if (pbVar3 != (byte *)0x0) {
    lVar9 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1bc))();
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
    uVar8 = (uint)*pbVar3 * iVar5 * iVar4;
    lVar9 = lVar9 + (ulonglong)uVar8;
    uVar7 = (uint)lVar9;
    if ((pbVar3[1] & 2) != 0) {
      if ((_DAT_ram_3fcc4594 & 0xffffffbf) == 0) {
        iVar4 = FUN_ram_420936ce(1);
        if (iVar4 != 0) {
          pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
          iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
          (*pcVar2)(1,0,uVar7 - iVar4);
          (*(code *)&SUB_ram_40011f68)();
        }
        DAT_ram_3fcc441a = 1;
      }
      else {
        pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
        iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
        (*pcVar2)(1,0,uVar7 - iVar4);
      }
      _DAT_ram_3fcc4470 = lVar9;
      iVar4 = FUN_ram_4039f482();
      iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
      uVar6 = iVar4 * iVar5 * 100;
      _DAT_ram_3fcc45b0 = uVar6 - uVar8;
      _DAT_ram_3fcc45b4 = -(uint)(uVar6 < _DAT_ram_3fcc45b0);
      FUN_ram_4209097c();
      iVar4 = FUN_ram_4209048e();
      if ((iVar4 == 0) &&
         ((DAT_ram_3fcc440e == '\0' || ((DAT_ram_3fcc440f != '\0' && (DAT_ram_3fcc461e == '\0'))))))
      {
        FUN_ram_42090384();
      }
    }
    if ((pbVar3[1] & 1) != 0) {
      FUN_ram_40393cee(7,0);
      if (DAT_ram_3fcc440e == '\0') {
        _DAT_ram_3fcc4478 = lVar9 + -1000;
      }
      else {
        _DAT_ram_3fcc4478 =
             CONCAT44((int)((ulonglong)lVar9 >> 0x20) - (uint)(uVar7 < uVar7 - _DAT_ram_3fcc4440),
                      uVar7 - _DAT_ram_3fcc4440);
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44f0);
      iVar4 = _DAT_ram_3fcc4478;
      pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0xf0);
      iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      (*pcVar2)(0x3fcc44f0,iVar4 - iVar5,0);
    }
    lVar9 = _DAT_ram_3fcc4470;
    lVar1 = _DAT_ram_3fcc4478;
    if ((pbVar3[1] & 4) != 0) {
      iVar4 = FUN_ram_4209048e();
      lVar9 = _DAT_ram_3fcc4470;
      lVar1 = _DAT_ram_3fcc4478;
      if (iVar4 == 0) {
        pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
        iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
        (*pcVar2)(1,0,uVar7 - iVar4);
        lVar9 = _DAT_ram_3fcc4470;
        lVar1 = _DAT_ram_3fcc4478;
      }
      _DAT_ram_60047ca0 = _DAT_ram_60047ca0 | 0xe0000;
    }
  }
  _DAT_ram_3fcc447c = (undefined4)((ulonglong)lVar1 >> 0x20);
  _DAT_ram_3fcc4478 = (int)lVar1;
  _DAT_ram_3fcc4474 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_ram_3fcc4470 = (undefined4)lVar9;
  return;
}

