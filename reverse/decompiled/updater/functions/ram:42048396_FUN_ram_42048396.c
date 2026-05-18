
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42048396(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if ((param_2 < _DAT_ram_3fcb53ec) ||
       ((_DAT_ram_3fcb53ec == param_2 && (param_1 < _DAT_ram_3fcb53e8)))) {
      if (_DAT_ram_3fcb53ec - param_2 != (uint)(_DAT_ram_3fcb53e8 < _DAT_ram_3fcb53e8 - param_1)) {
        return 1;
      }
      if (param_3 <= _DAT_ram_3fcb53e8 - param_1) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

