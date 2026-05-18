
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420250ac(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (_DAT_ram_3fcb6944 == 1) {
    FUN_ram_42025cee(0xffffffff);
    FUN_ram_42024dee();
    FUN_ram_420378f0();
    FUN_ram_420b48ce(0xb);
    FUN_ram_403a687a();
    (**(code **)(_DAT_ram_3fcb6a44 + 0xc))();
    FUN_ram_42025b36();
    FUN_ram_420378e6();
    FUN_ram_420378bc();
    FUN_ram_42025a7e();
    FUN_ram_42025a02();
    FUN_ram_4204f604();
    uVar1 = 0;
    _DAT_ram_3fcb6944 = 0;
  }
  return uVar1;
}

