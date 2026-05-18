
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42095fce(void)

{
  undefined4 uVar1;
  
  _DAT_ram_3fcb84cc = (**(code **)(_DAT_ram_3fcdfdd8 + 0x160))(1,0x44);
  if (_DAT_ram_3fcb84cc == 0) {
    FUN_ram_4207a038(6,1,1,&DAT_ram_3c0ff7d4);
    uVar1 = 0x101;
  }
  else {
    thunk_FUN_ram_42095f52();
    uVar1 = 0;
  }
  return uVar1;
}

