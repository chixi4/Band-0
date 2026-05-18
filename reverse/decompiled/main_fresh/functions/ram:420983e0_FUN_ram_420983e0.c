
undefined4 FUN_ram_420983e0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_ram_4039bf1e();
  }
  iVar1 = FUN_ram_4205f76e(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x2c);
  if (iVar1 != 0) {
    *(undefined **)(param_1 + 0x2c) = &DAT_ram_3c0c2644;
  }
  *(undefined1 **)(param_1 + 0x14) = &LAB_ram_4204adda;
  *(undefined4 *)(param_1 + 0x18) = 0x420882f4;
  *(undefined2 *)(param_1 + 0x30) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x3a06;
  return 0;
}

