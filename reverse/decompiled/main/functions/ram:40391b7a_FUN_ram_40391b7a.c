
undefined4 FUN_ram_40391b7a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x102;
  if (param_1 != 0) {
    FUN_ram_4039691e();
    FUN_ram_40396966();
    uVar1 = 0x103;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar2 = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 == 0) {
        FUN_ram_40391ce4(*(undefined4 *)(param_1 + 8),1,0,0);
      }
      uVar1 = 0;
    }
    FUN_ram_4039691e();
    FUN_ram_40396994();
  }
  return uVar1;
}

