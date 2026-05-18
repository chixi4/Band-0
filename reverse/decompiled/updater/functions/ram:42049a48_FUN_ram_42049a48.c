
void FUN_ram_42049a48(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  if (param_5 < 4) {
    if (param_2 == 0) {
      *(undefined2 *)(param_1 * 10 + 0x3fcb559c) = 0;
    }
    else {
      *(char *)(param_1 * 10 + 0x3fcb559d) = (char)param_2;
    }
  }
  else {
    *(char *)(param_1 * 10 + 0x3fcb559c) = (char)param_2;
  }
  (*(code *)&LAB_ram_40011e70)(param_2,param_1);
  return;
}

