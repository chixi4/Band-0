
void FUN_ram_4206a73c(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                     uint param_6)

{
  if (param_4 <= param_6) {
    *(char *)(param_1 + param_2 + -1) = (char)param_4;
    return;
  }
  *(undefined1 *)(param_1 + param_6 + param_3 + -1) = 0;
  FUN_ram_4206a73c();
  return;
}

