
void FUN_ram_42054dd4(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) goto LAB_ram_42054dfa;
  param_2 = (int *)FUN_ram_4039bf1e();
  do {
    iVar1 = *param_2;
    param_2 = (int *)param_2[3];
    if (iVar1 == *param_1) {
      FUN_ram_42054db2();
    }
LAB_ram_42054dfa:
  } while (param_2 != (int *)0x0);
  return;
}

