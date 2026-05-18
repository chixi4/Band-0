
void FUN_ram_42071898(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_ram_420721ea(param_1 + 0xc);
      FUN_ram_42068078(param_1 + 0x6c);
      FUN_ram_420721e2(param_1 + 0x74);
      FUN_ram_420721e2(param_1 + 0x8c);
      FUN_ram_42068078(param_1 + 0xa4);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  return;
}

