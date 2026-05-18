
void FUN_ram_4205b802(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(code **)(param_1 + 0x84) != (code *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = param_2;
    *(undefined4 *)(param_1 + 0xa0) = param_3;
    *(undefined4 *)(param_1 + 0xa4) = param_4;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x4205b81a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x84))(param_1 + 0x98);
    return;
  }
  return;
}

