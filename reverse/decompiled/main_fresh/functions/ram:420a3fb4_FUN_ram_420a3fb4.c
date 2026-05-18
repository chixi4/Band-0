
void FUN_ram_420a3fb4(int param_1,uint param_2)

{
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x420a3fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x50))(*(undefined4 *)(param_1 + 0x4c),param_2 >> 2,param_2);
    return;
  }
  return;
}

