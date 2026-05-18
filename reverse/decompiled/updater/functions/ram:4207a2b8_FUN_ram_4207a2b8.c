
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207a2b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4039d97a();
  if (iVar1 == 0) {
    _DAT_csreg_07a5 = 0x88;
    _tdata1 = 0x4c;
    _tselect = param_1;
    _tdata2 = param_2;
  }
  else {
    uStack_1c = 1;
    uStack_18 = param_1;
    uStack_14 = param_2;
    iVar1 = FUN_ram_4207a2aa(0x103,&uStack_1c);
    if (iVar1 == 0) {
      return 0x108;
    }
  }
  return 0;
}

