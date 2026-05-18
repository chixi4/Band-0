
undefined4 FUN_ram_42059c32(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    *(undefined4 *)(param_2 + 8) = 2;
    FUN_ram_42059adc();
    return 0;
  }
  return 0xfffffff0;
}

