
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044f76(int param_1)

{
  int iVar1;
  
  while (iVar1 = _DAT_ram_3fcb50d8, _DAT_ram_3fcb50d8 != 0) {
    FUN_ram_42033fd8(1,8,5,0x3c07f258,_DAT_ram_3fcb50d8);
    _DAT_ram_3fcb50d8 = *(int *)(_DAT_ram_3fcb50d8 + 0x20);
    if (_DAT_ram_3fcb50d8 == 0) {
      _DAT_ram_3fcb50dc = &DAT_ram_3fcb50d8;
    }
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (param_1 == 0) {
      FUN_ram_42033fd8(1,0x40,3,0x3c07e854);
      (*(code *)&SUB_ram_40011fa4)(iVar1);
    }
    else {
      (*(code *)&SUB_ram_40011ed8)(iVar1);
    }
  }
  return;
}

