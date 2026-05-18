
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_42093642(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((_DAT_ram_3fcdfdac != 0) && (_DAT_ram_3fcdfdb0 != 0)) {
    _DAT_ram_3fcdfda4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x34))(1,0);
    if (_DAT_ram_3fcdfda4 != 0) {
      iVar2 = (*(code *)&SUB_ram_40011c5c)(0xf,0);
      if (iVar2 == 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x3c))(_DAT_ram_3fcdfda4,0xffffffff);
      }
      else {
        FUN_ram_42092ae8();
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x9c))(1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x38))(_DAT_ram_3fcdfda4);
      _DAT_ram_3fcdfda4 = 0;
      return 0;
    }
    _DAT_ram_3fcdfda4 = 0;
  }
  uVar1 = FUN_ram_42092ae8();
  return uVar1;
}

