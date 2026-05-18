
undefined4 FUN_ram_4202d39a(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x70) == 1) && (param_4 != 0 || *(int *)(param_1 + 0x74) != 0)) {
    uVar1 = FUN_ram_4202cc40();
    return uVar1;
  }
  return 0xffffbf80;
}

