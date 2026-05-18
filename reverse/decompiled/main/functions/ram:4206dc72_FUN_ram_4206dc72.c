
void FUN_ram_4206dc72(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1 + 0x74;
    do {
      *param_1 = 0;
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
  }
  return;
}

