
int FUN_ram_42066d86(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    FUN_ram_42028dc8();
    iVar1 = FUN_ram_42029140();
    *param_2 = iVar1;
    return -(uint)(iVar1 == 0);
  }
  return 0;
}

