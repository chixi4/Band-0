
undefined4 FUN_ram_4206173a(int *param_1)

{
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_ram_42061552();
  }
  if (param_1[1] != 0) {
    FUN_ram_420b4430();
    FUN_ram_420b4336(param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_ram_420b4430();
    FUN_ram_420b4336(*param_1);
  }
  thunk_FUN_ram_40390634(param_1);
  return 0;
}

