
undefined4 FUN_ram_4205d562(int param_1)

{
  int unaff_s1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1,2,0);
  }
  if (unaff_s1 == 0) {
    FUN_ram_4205c6fa();
  }
  return 0;
}

