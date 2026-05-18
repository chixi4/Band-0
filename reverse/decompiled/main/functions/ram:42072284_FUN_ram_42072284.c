
void FUN_ram_42072284(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4206826c();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4206826c(param_1 + 8,param_2 + 8), iVar1 == 0)) {
    FUN_ram_4206826c(param_1 + 0x10,param_2 + 0x10);
    return;
  }
  return;
}

