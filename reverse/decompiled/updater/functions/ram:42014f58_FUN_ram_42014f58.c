
undefined4 FUN_ram_42014f58(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    uVar1 = FUN_ram_42014f30((int)*(char *)(gp + param_1 * 3 + -0x5ff));
    return uVar1;
  }
  return 0;
}

