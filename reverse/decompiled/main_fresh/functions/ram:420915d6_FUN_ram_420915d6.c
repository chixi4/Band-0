
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420915d6(void)

{
  int iVar1;
  undefined1 auStack_11 [9];
  
  if (((DAT_ram_3fcc4521 < 2) && (DAT_ram_3fcc440e == '\0')) || (DAT_ram_3fcc440f != '\0')) {
    DAT_ram_3fcc440f = 1;
  }
  else {
    DAT_ram_3fcc440f = 1;
    if (DAT_ram_3fcc440e == '\0') {
      (*(code *)&SUB_ram_40011d48)();
      return;
    }
    if (DAT_ram_3fcc441a != '\0') {
      FUN_ram_42090384();
    }
    auStack_11[0] = 0;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(0,auStack_11);
    (*(code *)&SUB_ram_40011e30)(auStack_11[0]);
    if ((((DAT_ram_3fcc4520 == '\0') && (DAT_ram_3fcc45c8 == '\0')) &&
        (iVar1 = FUN_ram_42092cdc(1), iVar1 == 0)) || (iVar1 = FUN_ram_420914ca(0,0), iVar1 != 0)) {
      DAT_ram_3fcc4520 = '\0';
    }
    (*(code *)&SUB_ram_40011d48)();
    (*(code *)&SUB_ram_40011b84)();
  }
  return;
}

