
void FUN_ram_4205be06(undefined4 param_1,int *param_2,int param_3)

{
  int in_a6;
  
  if ((param_3 != 0) && ((param_2 == (int *)0x0 || (*param_2 == 0)))) {
    param_2 = (int *)(in_a6 + 4);
  }
  FUN_ram_4205bb90(param_1,param_2);
  return;
}

