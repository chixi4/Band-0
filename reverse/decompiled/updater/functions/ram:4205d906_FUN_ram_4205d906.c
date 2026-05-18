
undefined4 FUN_ram_4205d906(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_42021824(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x2c);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0x3c073300;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x4204800e;
  *(undefined4 *)(param_1 + 0x18) = 0x4204d81a;
  *(undefined2 *)(param_1 + 0x30) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x3a06;
  return 0;
}

