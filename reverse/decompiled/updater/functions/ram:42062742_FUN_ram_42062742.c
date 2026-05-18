
undefined4 FUN_ram_42062742(int param_1)

{
  if (param_1 == 0x80) {
    return 1;
  }
  if (param_1 < 0x81) {
    if (param_1 == 2) {
      return 2;
    }
    if (param_1 == 8) {
      return 3;
    }
  }
  else if (param_1 == 0x100) {
    return 5;
  }
  return 0;
}

