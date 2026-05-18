
void FUN_ram_42053076(int *param_1,int *param_2)

{
  int iVar1;
  
  while (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    param_2 = (int *)param_2[3];
    if (iVar1 == *param_1) {
      FUN_ram_42053070();
    }
  }
  return;
}

