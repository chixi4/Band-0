
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40391970(int param_1,uint param_2)

{
  FUN_ram_40394d60();
  *(uint *)(&DAT_ram_3fcb66d0 + param_1 * 4) = *(uint *)(&DAT_ram_3fcb66d0 + param_1 * 4) | param_2;
  FUN_ram_40394d8e();
  _DAT_ram_600c0028 = 1;
  return;
}

