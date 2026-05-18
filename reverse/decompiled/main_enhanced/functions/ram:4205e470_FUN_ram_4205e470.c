
void FUN_ram_4205e470(int *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  if ((((uint *)*param_1)[2] != 0) && ((*(uint *)*param_1 & 0xf0) == 0x10)) {
    FUN_ram_4205455a();
  }
  FUN_ram_4205c6fa(param_1[9]);
  return;
}

