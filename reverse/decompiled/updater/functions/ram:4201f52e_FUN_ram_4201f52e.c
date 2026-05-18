
void FUN_ram_4201f52e(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 3;
  do {
    *puVar1 = 0xff;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_1 + 0x20);
  return;
}

