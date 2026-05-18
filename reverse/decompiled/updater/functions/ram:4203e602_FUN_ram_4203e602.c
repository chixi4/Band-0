
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e602(void)

{
  int iVar1;
  
  FUN_ram_42033fd8(1,4,4,0x3c07ba14);
  while (iVar1 = _DAT_ram_3fcb4ee0, _DAT_ram_3fcb4ee0 != 0) {
    _DAT_ram_3fcb4ee0 = *(int *)(_DAT_ram_3fcb4ee0 + 8);
    (*(code *)&SUB_ram_40010488)(iVar1,0,0xc);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    if (DAT_ram_3fcb4ee4 != '\0') {
      DAT_ram_3fcb4ee4 = DAT_ram_3fcb4ee4 + -1;
    }
  }
  _DAT_ram_3fcb4ee0 = 0;
  return;
}

