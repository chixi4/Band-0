
undefined4 FUN_ram_4202cfd4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar1 = FUN_ram_4202cf02();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x70) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_ram_4202cdc8();
  return uVar1;
}

