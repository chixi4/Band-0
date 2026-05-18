
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4209ec8e(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [128];
  undefined2 uStack_78;
  
  bVar2 = FUN_ram_4207fc8a();
  bVar2 = bVar2 ^ 1;
  if (((_DAT_ram_3fcc4b14 == 0x400) || (_DAT_ram_3fcc4b14 == 0x4000000)) &&
     (iVar3 = FUN_ram_4039c0e0(0x3fcc4b4e,param_2,6), iVar3 == 0)) {
    iVar3 = FUN_ram_4039c0e0(0x3fcc4ae8,param_6,param_7);
    bVar2 = bVar2 & iVar3 == 0;
  }
  iVar3 = FUN_ram_4039c0e0(0x3fcc4ae8,param_6,param_7);
  bVar1 = _DAT_ram_3fcc4c48 == 1;
  _DAT_ram_3fcc4b0c = 1 << (param_3 & 0x1f);
  _DAT_ram_3fcc4b10 = 1 << (param_4 & 0x1f);
  _DAT_ram_3fcc4a80 = 1;
  _DAT_ram_3fcc4b1c = param_6;
  FUN_ram_4039c11e(0x3fcc4b48,param_1,6);
  FUN_ram_4039c11e(0x3fcc4b4e,param_2,6);
  DAT_ram_3fcc4c41 = FUN_ram_4207f1fa();
  _DAT_ram_3fcc4c04 = (uint)(_DAT_ram_3fcc4b54 == 1);
  _DAT_ram_3fcc4b24 = FUN_ram_4207f0b6(0);
  iVar4 = 0;
  if ((bVar2 != 0) && (iVar4 = FUN_ram_4209d008(_DAT_ram_3fcc4ae0,param_2,0,0), iVar4 != 0)) {
    bVar2 = *(uint *)(iVar4 + 0x60) == _DAT_ram_3fcc4b14;
  }
  if ((((_DAT_ram_3fcc4b14 & 0x4000c00) == 0) && ((_DAT_ram_3fcc4b14 - 0x400000 & 0xffbfffff) != 0))
     || (bVar2 == 0)) {
    if (iVar4 != 0) {
      FUN_ram_4209cd1a(_DAT_ram_3fcc4ae0,0,iVar4 + 0x14,*(undefined4 *)(iVar4 + 0x54));
    }
  }
  else {
    FUN_ram_4209d0c2(0x3fcc4924,0,param_2,0,iVar3 == 0 && bVar1);
    FUN_ram_4209d85c(0x3fcc4924);
  }
  iVar3 = FUN_ram_4207fb2a();
  if (iVar3 == 0) {
    _DAT_ram_3fcc4c42 = 0;
    _DAT_ram_3fcc4b18 = 1;
  }
  else {
    uVar5 = FUN_ram_4207fb34();
    FUN_ram_42084bda(0,auStack_f8);
    _DAT_ram_3fcc4c42 = uStack_78;
    _DAT_ram_3fcc4b18 = FUN_ram_4209d33c(uVar5);
    if (_DAT_ram_3fcc4b18 == 1) {
      return 0xffffffff;
    }
  }
  FUN_ram_4209dc7e(0x3fcc48f4);
  iVar3 = FUN_ram_4209f056(0x3fcc4924,_DAT_ram_3fcc4b30,_DAT_ram_3fcc4b34);
  if (-1 < iVar3) {
    _DAT_ram_3fcc4b34 = iVar3;
    iVar3 = FUN_ram_4207f0f0(param_2);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(byte *)(iVar3 + 1) + 2;
    }
    FUN_ram_4209ebd0(iVar3,iVar4);
    iVar3 = FUN_ram_4209f324(0x3fcc4924,auStack_f8,0x14);
    if ((-1 < iVar3) && (iVar4 = FUN_ram_4209ec38(0x3fcc4924,auStack_f8,iVar3), iVar4 != -1)) {
      FUN_ram_42098a5c(param_2,auStack_f8,iVar3,1);
      (*(code *)&SUB_ram_40010488)(0x3fcc4ae8,0,0x20);
      FUN_ram_4039c11e(0x3fcc4ae8,param_6,param_7);
      _DAT_ram_3fcc4b08 = param_7;
      FUN_ram_4209dba4(param_5,param_6,param_7);
      FUN_ram_4207f168();
      return 0;
    }
  }
  return 0xffffffff;
}

