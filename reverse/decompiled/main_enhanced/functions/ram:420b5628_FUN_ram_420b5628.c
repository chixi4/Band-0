
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420b5628(int param_1)

{
  int iVar1;
  
  if (_DAT_ram_3fcc4efc == 0) {
    iVar1 = FUN_ram_420119cc(0x1c,0xc02,0x40381994,0,&DAT_ram_3fcc4efc);
    if (iVar1 == 0) {
      if (_DAT_ram_3fcc4ef8 == 0) {
        _DAT_ram_3fcc4ef8 = param_1;
        (*(code *)&SUB_ram_400102c0)(&DAT_ram_3fcb9574,2);
      }
      iVar1 = FUN_ram_40390aa6(_DAT_ram_3fcc4efc);
      return iVar1;
    }
  }
  else {
    iVar1 = 0x103;
  }
  return iVar1;
}

