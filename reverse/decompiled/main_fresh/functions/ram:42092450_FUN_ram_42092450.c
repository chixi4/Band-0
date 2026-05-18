
void FUN_ram_42092450(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  if (param_5 < 4) {
    if (param_2 == 0) {
      *(undefined2 *)(param_1 * 10 + 0x3fcc462c) = 0;
    }
    else {
      *(char *)(param_1 * 10 + 0x3fcc462d) = (char)param_2;
    }
  }
  else {
    *(char *)(param_1 * 10 + 0x3fcc462c) = (char)param_2;
  }
  (*(code *)&LAB_ram_40011e70)(param_2,param_1);
  return;
}

