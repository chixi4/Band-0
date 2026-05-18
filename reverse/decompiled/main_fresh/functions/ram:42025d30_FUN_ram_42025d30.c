
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42025d30(int param_1)

{
  int iVar1;
  
  _DAT_ram_3fcb6b50 = 0;
  _DAT_ram_3fcb6b54 = 0;
  if (param_1 == 0) {
    iVar1 = (*_DAT_ram_3fcb694c)(0x42015c4c);
    if (iVar1 == 0) {
      _DAT_ram_3fcb6b54 = 0x3fcb6948;
      (*(code *)&SUB_ram_40010aec)(0x42015c0c,0,0x42015bd0,0);
    }
    else {
      FUN_ram_42025cee();
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

