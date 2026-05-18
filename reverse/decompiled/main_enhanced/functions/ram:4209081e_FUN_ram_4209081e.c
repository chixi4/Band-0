
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4209081e(void)

{
  char cVar1;
  int iVar2;
  
  if ((DAT_ram_3fcc4521 < 2) && (DAT_ram_3fcc440e == '\0')) {
    DAT_ram_3fcc440f = 0;
    return;
  }
  if (DAT_ram_3fcc440f == '\0') {
    DAT_ram_3fcc440f = 0;
    return;
  }
  FUN_ram_420903d2();
  cVar1 = DAT_ram_3fcc4401;
  if (DAT_ram_3fcc440e == '\0') {
    (*(code *)&SUB_ram_40011d44)();
    DAT_ram_3fcc440f = 0;
    return;
  }
  DAT_ram_3fcc461e = 1;
  if (DAT_ram_3fcc4401 == '\0') {
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar2 != 0) {
      DAT_ram_3fcc441b = '\x01';
    }
    DAT_ram_3fcc4520 = 1;
    FUN_ram_4039e2da();
    _DAT_ram_60047ca0 = _DAT_ram_60047ca0 | 0xe0000;
  }
  else {
    if (DAT_ram_3fcc4401 != '\x01') {
      FUN_ram_4039e2da();
      goto LAB_ram_420908ba;
    }
    if (DAT_ram_3fcc4415 == '\0') goto LAB_ram_420908ba;
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar2 != 0) {
      DAT_ram_3fcc441b = cVar1;
    }
    DAT_ram_3fcc4520 = 1;
  }
  if (DAT_ram_3fcc4416 == '\0') {
    FUN_ram_42090632(1);
  }
LAB_ram_420908ba:
  if (*(char *)(gp + 0x202) != '\0') {
    FUN_ram_42096756();
  }
  (*(code *)&SUB_ram_40011e30)(0,0);
  (*(code *)&SUB_ram_40011d44)();
  DAT_ram_3fcc461e = 0;
  DAT_ram_3fcc440f = 0;
  return;
}

