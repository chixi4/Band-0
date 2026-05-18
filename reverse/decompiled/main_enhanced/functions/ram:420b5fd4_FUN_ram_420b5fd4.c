
void FUN_ram_420b5fd4(int param_1)

{
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x420b5fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  }
  return;
}

