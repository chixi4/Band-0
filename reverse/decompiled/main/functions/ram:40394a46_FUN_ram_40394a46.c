
void FUN_ram_40394a46(int param_1,char param_2)

{
  *(char *)(param_1 + 0x3fcb8c10) = param_2 + '\x01';
  FUN_ram_40394a68();
  return;
}

