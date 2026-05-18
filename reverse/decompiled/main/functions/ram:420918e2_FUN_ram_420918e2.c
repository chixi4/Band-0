
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420918e2(void)

{
  int iVar1;
  
  _DAT_ram_3fcc473c = _DAT_ram_3fcc473c + 1;
  if (((DAT_ram_3fcc440e == '\0') || (DAT_ram_3fcc440f == '\0')) || (DAT_ram_3fcc4410 != '\0')) {
    return;
  }
  if (*(char *)(gp + 0x234) == '\0') {
    if (_DAT_ram_3fcc4424 == 0) {
      FUN_ram_420914ca(0,0);
      goto LAB_ram_4209192c;
    }
  }
  else if (_DAT_ram_3fcc4424 == 0) {
    return;
  }
  if (DAT_ram_3fcc4401 != '\0') {
    return;
  }
  if ((DAT_ram_3fcc4414 == '\0') && (iVar1 = FUN_ram_420936ce(1), iVar1 == 0)) {
    FUN_ram_42090c4e();
    return;
  }
LAB_ram_4209192c:
  (*(code *)&SUB_ram_40011b84)();
  return;
}

