
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42049510(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (DAT_ram_3fcb537e != '\0') {
    FUN_ram_4204797c();
    (*(code *)&SUB_ram_40011b74)();
    FUN_ram_420479ca();
    (*(code *)&SUB_ram_40011e3c)();
    (*(code *)&SUB_ram_40011e2c)(0);
    FUN_ram_42047992();
    if (*(char *)(gp + 0xce) != '\0') {
      FUN_ram_4204dc98();
    }
    (*(code *)&SUB_ram_40011e30)(0,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5424);
    _DAT_ram_3fcb538c = 0;
    if (DAT_ram_3fcb5371 != '\0') {
      FUN_ram_4039bf06();
      FUN_ram_420479e0(0);
      (*(code *)&SUB_ram_40011d2c)();
    }
    uVar2 = _DAT_ram_3fcb540c;
    uVar1 = _DAT_ram_3fcb5408;
    uVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    uVar4 = (uint)uVar5 - _DAT_ram_3fcb5400;
    FUN_ram_42033fd8(6,0x1000,3,0x3c07ec84,uVar1,uVar2,uVar4,
                     ((int)((ulonglong)uVar5 >> 0x20) - _DAT_ram_3fcb5404) -
                     (uint)((uint)uVar5 < uVar4));
    if (DAT_ram_3fcb5380 != '\0') {
      (*(code *)&SUB_ram_40011d48)();
    }
    DAT_ram_3fcb537b = 1;
    _DAT_ram_3fcb538a = 1;
    _DAT_ram_3fcb54f4 = 0x30000;
    _DAT_ram_3fcb5380 = 0;
    DAT_ram_3fcb537e = '\0';
    DAT_ram_3fcb54d8 = 0;
    DAT_ram_3fcb54f1 = 0;
    DAT_ram_3fcb5531 = 0;
    DAT_ram_3fcb5538 = 0;
    FUN_ram_4039d0e6();
    FUN_ram_42048fbe(0);
    iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar3 != 0) {
      FUN_ram_420485d6();
    }
    if (*(code **)(_DAT_ram_3fcb1020 + 0x34) != (code *)0x0) {
      (**(code **)(_DAT_ram_3fcb1020 + 0x34))();
    }
    if (DAT_ram_3fcb5491 != '\0') {
      DAT_ram_3fcb5491 = '\x02';
      if (_DAT_ram_3fcb5494 == 0) {
        (*(code *)&SUB_ram_40011d50)();
      }
    }
    (*(code *)&SUB_ram_40011f70)();
    *(undefined1 *)(gp + 0x100) = 0;
    FUN_ram_420479a0();
    DAT_ram_3fcb5531 = 0;
  }
  return;
}

