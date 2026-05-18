
int FUN_ram_4039c36a(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_4039693c();
  iVar1 = *param_1;
  *param_1 = iVar1 + param_2;
  FUN_ram_40396956();
  return iVar1;
}

