
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42047e16(void)

{
  char cVar1;
  int iVar2;
  
  if ((DAT_ram_3fcb5491 < 2) && (DAT_ram_3fcb537e == '\0')) {
    DAT_ram_3fcb537f = 0;
    return;
  }
  if (DAT_ram_3fcb537f == '\0') {
    DAT_ram_3fcb537f = 0;
    return;
  }
  FUN_ram_420479ca();
  cVar1 = DAT_ram_3fcb5371;
  if (DAT_ram_3fcb537e == '\0') {
    (*(code *)&SUB_ram_40011d44)();
    DAT_ram_3fcb537f = 0;
    return;
  }
  DAT_ram_3fcb558e = 1;
  if (DAT_ram_3fcb5371 == '\0') {
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar2 != 0) {
      DAT_ram_3fcb538b = '\x01';
    }
    DAT_ram_3fcb5490 = 1;
    FUN_ram_4039bf06();
    _DAT_ram_60047ca0 = _DAT_ram_60047ca0 | 0xe0000;
  }
  else {
    if (DAT_ram_3fcb5371 != '\x01') {
      FUN_ram_4039bf06();
      goto LAB_ram_42047eb2;
    }
    if (DAT_ram_3fcb5385 == '\0') goto LAB_ram_42047eb2;
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar2 != 0) {
      DAT_ram_3fcb538b = cVar1;
    }
    DAT_ram_3fcb5490 = 1;
  }
  if (DAT_ram_3fcb5386 == '\0') {
    FUN_ram_42047c2a(1);
  }
LAB_ram_42047eb2:
  if (*(char *)(gp + 0xce) != '\0') {
    FUN_ram_4204dc98();
  }
  (*(code *)&SUB_ram_40011e30)(0,0);
  (*(code *)&SUB_ram_40011d44)();
  DAT_ram_3fcb558e = 0;
  DAT_ram_3fcb537f = 0;
  return;
}

