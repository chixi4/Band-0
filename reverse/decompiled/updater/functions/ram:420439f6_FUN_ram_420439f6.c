
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420439f6(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcb4f84;
  if (_DAT_ram_3fcb4f84 != 0) {
    if (*(char *)(_DAT_ram_3fcb4f84 + 0x13c) == '\x03') {
      FUN_ram_4203614c(_DAT_ram_3fcb4f84);
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
    _DAT_ram_3fcb4f84 = 0;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(*(undefined4 *)(iVar1 + 0xe8));
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
    FUN_ram_4203e602();
    FUN_ram_4203ea16();
    thunk_FUN_ram_4204a1c8(0,0);
  }
  thunk_FUN_ram_4204a3b6(0,_DAT_ram_3fcb4f84);
  return;
}

