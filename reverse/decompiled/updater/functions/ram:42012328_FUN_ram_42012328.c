
undefined4 FUN_ram_42012328(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 8) {
    FUN_ram_40394d2c();
    FUN_ram_40394d60();
    iVar1 = *(int *)(param_1 * 4 + 0x3fcb173c);
    uVar2 = iVar1 - 1;
    if (param_2 != 0) {
      uVar2 = iVar1 + 1;
    }
    *(uint *)(param_1 * 4 + 0x3fcb173c) = uVar2 & (int)~uVar2 >> 0x1f;
    FUN_ram_40394d2c();
    FUN_ram_40394d8e();
    return 0;
  }
  return 0x102;
}

