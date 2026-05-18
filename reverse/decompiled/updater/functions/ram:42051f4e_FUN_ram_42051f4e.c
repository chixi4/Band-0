
short FUN_ram_42051f4e(int *param_1)

{
  short sVar1;
  
  sVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    sVar1 = sVar1 + 1;
  }
  return sVar1;
}

