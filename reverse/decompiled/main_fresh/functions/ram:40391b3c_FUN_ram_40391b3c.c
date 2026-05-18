
undefined4 FUN_ram_40391b3c(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_4039691e();
    FUN_ram_40396966();
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    if (iVar1 == 0) {
      FUN_ram_40391ce4(*(undefined4 *)(param_1 + 8),0,0,0);
    }
    FUN_ram_4039691e();
    FUN_ram_40396994();
    return 0;
  }
  return 0x102;
}

