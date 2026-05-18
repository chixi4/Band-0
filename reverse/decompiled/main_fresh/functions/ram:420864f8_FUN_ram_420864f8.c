
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420864f8(void)

{
  int iVar1;
  
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fce84);
  while (iVar1 = _DAT_ram_3fcc3f70, _DAT_ram_3fcc3f70 != 0) {
    _DAT_ram_3fcc3f70 = *(int *)(_DAT_ram_3fcc3f70 + 8);
    (*(code *)&SUB_ram_40010488)(iVar1,0,0xc);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    if (DAT_ram_3fcc3f74 != '\0') {
      DAT_ram_3fcc3f74 = DAT_ram_3fcc3f74 + -1;
    }
  }
  _DAT_ram_3fcc3f70 = 0;
  return;
}

