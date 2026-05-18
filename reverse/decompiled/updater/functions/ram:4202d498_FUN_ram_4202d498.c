
undefined4
FUN_ram_4202d498(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                int param_6)

{
  undefined4 uVar1;
  
  if ((param_4 != 0 || param_5 != 0) && (param_6 == 0)) {
    return 0xffffbf80;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar1 = FUN_ram_4202d3c0();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x70) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_ram_4202d39a();
  return uVar1;
}

