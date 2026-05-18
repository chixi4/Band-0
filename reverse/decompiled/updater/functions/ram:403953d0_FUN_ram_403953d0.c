
int * FUN_ram_403953d0(int param_1,int param_2,int *param_3,int *param_4)

{
  if (param_1 != 0) {
    if (param_4 == (int *)0x0) {
      return (int *)0x0;
    }
    if (param_3 == (int *)0x0) {
      if (param_2 == 0) goto LAB_ram_403953e6;
    }
    else if (param_2 != 0) {
LAB_ram_403953e6:
      *(undefined1 *)((int)param_4 + 0x46) = 1;
      if (param_2 == 0) {
        param_3 = param_4;
      }
      param_4[0xf] = param_1;
      param_4[0x10] = param_2;
      *param_4 = (int)param_3;
      FUN_ram_40395350(param_4,1);
      param_4[0x12] = 0;
      return param_4;
    }
  }
  return (int *)0x0;
}

