
void FUN_ram_4203f286(int param_1,char param_2,int param_3)

{
  if (param_3 == 0) {
    *(char *)(param_1 + 0xa9) = param_2;
    return;
  }
  if (param_3 == 1) {
    *(char *)(param_1 + 0xa9) = *(char *)(param_1 + 0xa9) + param_2;
  }
  return;
}

