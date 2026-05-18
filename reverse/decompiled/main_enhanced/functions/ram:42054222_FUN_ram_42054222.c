
void FUN_ram_42054222(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + 0x3c) + '\x01';
  }
  *(char *)(param_1 + 8) = cVar1;
  return;
}

