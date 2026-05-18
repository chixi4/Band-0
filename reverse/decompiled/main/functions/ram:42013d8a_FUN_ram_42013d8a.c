
undefined4 FUN_ram_42013d8a(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    uVar1 = FUN_ram_42013d62((int)*(char *)(gp + param_1 * 3 + -0x59f));
    return uVar1;
  }
  return 0;
}

