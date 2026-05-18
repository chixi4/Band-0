
undefined4 FUN_ram_4205b9ae(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_1 != 0) && (*(int **)(param_1 + 0x20) != (int *)0x0)) &&
      (**(int **)(param_1 + 0x20) != 0)) && (param_2 != 0)) {
    uVar1 = FUN_ram_4205ce92();
    return uVar1;
  }
  return 0x102;
}

