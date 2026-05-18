
void FUN_ram_40394eae(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar1 = FUN_ram_4039381a();
    if (iVar1 == 0) {
      FUN_ram_40399b58();
    }
                    /* WARNING: Could not recover jumptable at 0x40394ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x54))(0,*(undefined4 *)(param_1 + 0x50));
    return;
  }
  return;
}

