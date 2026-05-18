
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42013120(int param_1)

{
  int iVar1;
  
  if (_DAT_ram_3fcb665c == 0) {
    iVar1 = FUN_ram_420119c8(0x1c,0xc02,0x403811f8,0,&DAT_ram_3fcb665c);
    if (iVar1 == 0) {
      if (_DAT_ram_3fcb6658 == 0) {
        _DAT_ram_3fcb6658 = param_1;
        (*(code *)&SUB_ram_400102c0)(0x3fcb2074,2);
      }
      iVar1 = (*(code *)&LAB_ram_40390a1c)(_DAT_ram_3fcb665c);
      return iVar1;
    }
  }
  else {
    iVar1 = 0x103;
  }
  return iVar1;
}

