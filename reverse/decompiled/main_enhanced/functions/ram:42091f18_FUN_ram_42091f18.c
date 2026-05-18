
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091f18(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (DAT_ram_3fcc440e != '\0') {
    FUN_ram_42090384();
    (*(code *)&SUB_ram_40011b74)();
    FUN_ram_420903d2();
    (*(code *)&SUB_ram_40011e3c)();
    (*(code *)&SUB_ram_40011e2c)(0);
    FUN_ram_4209039a();
    if (*(char *)(gp + 0x202) != '\0') {
      FUN_ram_42096756();
    }
    (*(code *)&SUB_ram_40011e30)(0,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44b4);
    _DAT_ram_3fcc441c = 0;
    if (DAT_ram_3fcc4401 != '\0') {
      FUN_ram_4039e2da();
      FUN_ram_420903e8(0);
      (*(code *)&SUB_ram_40011d2c)();
    }
    uVar2 = _DAT_ram_3fcc449c;
    uVar1 = _DAT_ram_3fcc4498;
    uVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    uVar4 = (uint)uVar5 - _DAT_ram_3fcc4490;
    FUN_ram_4207a038(6,0x1000,3,&DAT_ram_3c1007b4,uVar1,uVar2,uVar4,
                     ((int)((ulonglong)uVar5 >> 0x20) - _DAT_ram_3fcc4494) -
                     (uint)((uint)uVar5 < uVar4));
    if (DAT_ram_3fcc4410 != '\0') {
      (*(code *)&SUB_ram_40011d48)();
    }
    DAT_ram_3fcc440b = 1;
    _DAT_ram_3fcc441a = 1;
    _DAT_ram_3fcc4584 = 0x30000;
    _DAT_ram_3fcc4410 = 0;
    DAT_ram_3fcc440e = '\0';
    DAT_ram_3fcc4568 = 0;
    DAT_ram_3fcc4581 = 0;
    DAT_ram_3fcc45c1 = 0;
    DAT_ram_3fcc45c8 = 0;
    FUN_ram_4039f4ba();
    FUN_ram_420919c6(0);
    iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar3 != 0) {
      FUN_ram_42090fde();
    }
    if (*(code **)(_DAT_ram_3fcb84cc + 0x34) != (code *)0x0) {
      (**(code **)(_DAT_ram_3fcb84cc + 0x34))();
    }
    if (DAT_ram_3fcc4521 != '\0') {
      DAT_ram_3fcc4521 = '\x02';
      if (_DAT_ram_3fcc4524 == 0) {
        (*(code *)&SUB_ram_40011d50)();
      }
    }
    (*(code *)&SUB_ram_40011f70)();
    *(undefined1 *)(gp + 0x234) = 0;
    FUN_ram_420903a8();
    DAT_ram_3fcc45c1 = 0;
  }
  return;
}

