
undefined4 FUN_ram_4204c3b2(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_42033fd8(6,0x800,3,0x3c07eeb0);
    DAT_ram_3fcb0940 = 0;
    (*(code *)&SUB_ram_40011ef0)();
    FUN_ram_4204c34c(0);
  }
  else {
    FUN_ram_42033fd8(6,0x800,3,0x3c07ee9c);
    DAT_ram_3fcb0940 = 1;
    (*(code *)&SUB_ram_40011eec)();
    FUN_ram_4204c34c(1);
  }
  FUN_ram_4204c37a(param_1 != 0);
  return 0;
}

