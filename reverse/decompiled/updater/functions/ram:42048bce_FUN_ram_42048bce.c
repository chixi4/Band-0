
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42048bce(void)

{
  int iVar1;
  undefined1 auStack_11 [9];
  
  if (((DAT_ram_3fcb5491 < 2) && (DAT_ram_3fcb537e == '\0')) || (DAT_ram_3fcb537f != '\0')) {
    DAT_ram_3fcb537f = 1;
  }
  else {
    DAT_ram_3fcb537f = 1;
    if (DAT_ram_3fcb537e == '\0') {
      (*(code *)&SUB_ram_40011d48)();
      return;
    }
    if (DAT_ram_3fcb538a != '\0') {
      FUN_ram_4204797c();
    }
    auStack_11[0] = 0;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(0,auStack_11);
    (*(code *)&SUB_ram_40011e30)(auStack_11[0]);
    if ((((DAT_ram_3fcb5490 == '\0') && (DAT_ram_3fcb5538 == '\0')) &&
        (iVar1 = FUN_ram_4204a2c4(1), iVar1 == 0)) || (iVar1 = FUN_ram_42048ac2(0,0), iVar1 != 0)) {
      DAT_ram_3fcb5490 = '\0';
    }
    (*(code *)&SUB_ram_40011d48)();
    (*(code *)&SUB_ram_40011b84)();
  }
  return;
}

