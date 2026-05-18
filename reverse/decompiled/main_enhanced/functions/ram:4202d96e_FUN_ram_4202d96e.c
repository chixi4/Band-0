
void FUN_ram_4202d96e(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4202d978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xc))
              (*(undefined2 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

