
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208bffe(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcc4018;
  if (_DAT_ram_3fcc4018 != 0) {
    if (*(char *)(_DAT_ram_3fcc4018 + 0x13c) == '\x03') {
      FUN_ram_4207c1cc(_DAT_ram_3fcc4018);
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
    _DAT_ram_3fcc4018 = 0;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(*(undefined4 *)(iVar1 + 0xec));
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
    thunk_FUN_ram_42092be0(0,1);
  }
  thunk_FUN_ram_42092dce(1,_DAT_ram_3fcc4018);
  FUN_ram_420763d4();
  return;
}

