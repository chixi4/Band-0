
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091b26(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (DAT_ram_3fcc440e != '\0') {
    uVar2 = param_1 << 10;
    if (param_1 == 0) {
      uVar2 = 0x19000;
    }
    if (_DAT_ram_3fcc4434 != uVar2) {
      _DAT_ram_3fcc4434 = uVar2;
      FUN_ram_4039e8b0();
    }
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar1 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(_DAT_ram_3fcc4434 / 100);
    }
    DAT_ram_3fcc4412 = 1;
    _DAT_ram_3fcc4468 = param_3;
    _DAT_ram_3fcc446c = param_4;
    uStack_28 = param_3;
    uStack_24 = param_4;
    FUN_ram_420b2b12(param_2,&uStack_28,0);
  }
  return;
}

