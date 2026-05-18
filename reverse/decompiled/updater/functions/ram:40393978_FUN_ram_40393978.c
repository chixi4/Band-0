
void FUN_ram_40393978(int param_1,char param_2)

{
  *(char *)(param_1 + 0x3fcb1720) = param_2 + '\x01';
  FUN_ram_4039399a();
  return;
}

