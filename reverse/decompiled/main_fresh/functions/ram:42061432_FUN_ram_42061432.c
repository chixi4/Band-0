
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42061432(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 == _DAT_ram_3fcc26c0) {
    _DAT_ram_3fcc26c0 = 0;
  }
  if (param_1 == _DAT_ram_3fcc26c4) {
    _DAT_ram_3fcc26c4 = 0;
  }
  if (_DAT_ram_3fcc26c8 == param_1) {
    _DAT_ram_3fcc26c8 = 0;
  }
  if (((_DAT_ram_3fcc26c0 == 0) && (_DAT_ram_3fcc26c4 == 0)) && (_DAT_ram_3fcc26c8 == 0)) {
    FUN_ram_420612b6();
  }
  uVar1 = FUN_ram_4205f4fa(param_1);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uVar2 = FUN_ram_4205f616(param_1,&uStack_24);
  FUN_ram_420b595e(uVar1);
  return uVar2;
}

