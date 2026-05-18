
void FUN_ram_42056112(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
  }
  return;
}

