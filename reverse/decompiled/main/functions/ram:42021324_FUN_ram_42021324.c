
int FUN_ram_42021324(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 6) != '\0')) {
    if (param_2 < 1) {
      param_2 = 1;
    }
    return (*(byte *)(param_1 + 5) + 4) * param_2;
  }
  return 0;
}

