
void FUN_ram_420320cc(undefined1 *param_1,undefined1 *param_2)

{
  if ((param_2 != (undefined1 *)0x0) && ((*(uint *)(param_2 + 8) & 0x80) != 0)) {
    *param_1 = 3;
    param_1[1] = 1;
    param_1[2] = *param_2;
  }
  return;
}

