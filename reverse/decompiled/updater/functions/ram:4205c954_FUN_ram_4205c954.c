
undefined4 FUN_ram_4205c954(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *param_2 = *(int *)(param_1 + 0x30);
    return uVar1;
  }
  return 0;
}

