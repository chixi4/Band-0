
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42064c62(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [128];
  undefined2 uStack_78;
  
  bVar2 = FUN_ram_4203986a();
  bVar2 = bVar2 ^ 1;
  if (((_DAT_ram_3fcb61ec == 0x400) || (_DAT_ram_3fcb61ec == 0x4000000)) &&
     (iVar3 = FUN_ram_40399d6c(0x3fcb6226,param_2,6), iVar3 == 0)) {
    iVar3 = FUN_ram_40399d6c(0x3fcb61c0,param_6,param_7);
    bVar2 = bVar2 & iVar3 == 0;
  }
  iVar3 = FUN_ram_40399d6c(0x3fcb61c0,param_6,param_7);
  bVar1 = _DAT_ram_3fcb6320 == 1;
  _DAT_ram_3fcb61e4 = 1 << (param_3 & 0x1f);
  _DAT_ram_3fcb61e8 = 1 << (param_4 & 0x1f);
  _DAT_ram_3fcb6158 = 1;
  _DAT_ram_3fcb61f4 = param_6;
  FUN_ram_40399daa(0x3fcb6220,param_1,6);
  FUN_ram_40399daa(0x3fcb6226,param_2,6);
  DAT_ram_3fcb6319 = FUN_ram_42039098();
  _DAT_ram_3fcb62dc = (uint)(_DAT_ram_3fcb622c == 1);
  _DAT_ram_3fcb61fc = FUN_ram_42038f6e(0);
  iVar4 = 0;
  if ((bVar2 != 0) && (iVar4 = FUN_ram_42062ebe(_DAT_ram_3fcb61b8,param_2,0,0), iVar4 != 0)) {
    bVar2 = *(uint *)(iVar4 + 0x60) == _DAT_ram_3fcb61ec;
  }
  if ((((_DAT_ram_3fcb61ec & 0x4000c00) == 0) && ((_DAT_ram_3fcb61ec - 0x400000 & 0xffbfffff) != 0))
     || (bVar2 == 0)) {
    if (iVar4 != 0) {
      FUN_ram_42062bd0(_DAT_ram_3fcb61b8,0,iVar4 + 0x14,*(undefined4 *)(iVar4 + 0x54));
    }
  }
  else {
    FUN_ram_42062f80(0x3fcb5ffc,0,param_2,0,iVar3 == 0 && bVar1);
    FUN_ram_4206373c(0x3fcb5ffc);
  }
  iVar3 = FUN_ram_4203970a();
  if (iVar3 == 0) {
    _DAT_ram_3fcb631a = 0;
    _DAT_ram_3fcb61f0 = 1;
  }
  else {
    uVar5 = FUN_ram_42039714();
    FUN_ram_4203d09c(0,auStack_f8);
    _DAT_ram_3fcb631a = uStack_78;
    _DAT_ram_3fcb61f0 = FUN_ram_4206321c(uVar5);
    if (_DAT_ram_3fcb61f0 == 1) {
      return 0xffffffff;
    }
  }
  FUN_ram_42063bf8(0x3fcb5fcc);
  iVar3 = FUN_ram_42065314(0x3fcb5ffc,_DAT_ram_3fcb6208,_DAT_ram_3fcb620c);
  if (-1 < iVar3) {
    _DAT_ram_3fcb620c = iVar3;
    iVar3 = FUN_ram_42038fa8(param_2);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(byte *)(iVar3 + 1) + 2;
    }
    FUN_ram_42064b86(iVar3,iVar4);
    iVar3 = FUN_ram_42065602(0x3fcb5ffc,auStack_f8,0x14);
    if ((-1 < iVar3) && (iVar4 = FUN_ram_42064c0c(0x3fcb5ffc,auStack_f8,iVar3), iVar4 != -1)) {
      FUN_ram_4205de0c(param_2,auStack_f8,iVar3,1);
      (*(code *)&SUB_ram_40010488)(0x3fcb61c0,0,0x20);
      FUN_ram_40399daa(0x3fcb61c0,param_6,param_7);
      _DAT_ram_3fcb61e0 = param_7;
      FUN_ram_42063b1e(param_5,param_6,param_7);
      return 0;
    }
  }
  return 0xffffffff;
}

