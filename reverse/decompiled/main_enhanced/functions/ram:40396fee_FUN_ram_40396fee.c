
int * FUN_ram_40396fee(int param_1,int param_2,int *param_3,int *param_4)

{
  if ((param_4 != (int *)0x0) && (param_1 != 0)) {
    if (param_3 == (int *)0x0) {
      if (param_2 == 0) goto code_r0x40397016;
    }
    else if (param_2 != 0) {
code_r0x40397016:
      *(undefined1 *)((int)param_4 + 0x46) = 1;
      if (param_2 == 0) {
        param_3 = param_4;
      }
      param_4[0xf] = param_1;
      param_4[0x10] = param_2;
      *param_4 = (int)param_3;
      FUN_ram_40396f68(param_4,1);
      param_4[0x12] = 0;
      return param_4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

