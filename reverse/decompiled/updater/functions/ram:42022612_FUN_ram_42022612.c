
void FUN_ram_42022612(int param_1,int param_2)

{
  char cVar1;
  
  do {
    param_2 = param_2 + -1;
    if (param_2 < 0) {
      return;
    }
    cVar1 = *(char *)(param_1 + param_2);
    *(char *)(param_1 + param_2) = cVar1 + '\x01';
  } while (cVar1 == -1);
  return;
}

