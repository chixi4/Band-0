
void FUN_ram_40396a74(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar1 = FUN_ram_403948da();
    if (iVar1 == 0) {
      FUN_ram_4039bf1e();
    }
                    /* WARNING: Could not recover jumptable at 0x40396a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x54))(0,*(undefined4 *)(param_1 + 0x50));
    return;
  }
  return;
}

