
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42076374(void)

{
  short sVar1;
  short sVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = _DAT_ram_3fcb12b0;
  uStack_18 = _DAT_ram_3fcb12ac;
  (**(code **)(_DAT_ram_3fcb640c + 0x78))();
  (**(code **)(_DAT_ram_3fcb640c + 0x88))(0);
  (**(code **)(_DAT_ram_3fcb640c + 0x94))(&uStack_18);
  FUN_ram_42075c04();
  (*(code *)&SUB_ram_40010044)(5);
  sVar1 = 100;
  sVar2 = 0;
  do {
    if ((_DAT_ram_6004a08c >> 0xc & 0x7f) < 0x46) {
      sVar2 = sVar2 + 1;
    }
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  if (sVar2 != 0) {
    DAT_ram_3fcb0cdb = 1;
  }
  (**(code **)(_DAT_ram_3fcb640c + 0x7c))();
  return;
}

