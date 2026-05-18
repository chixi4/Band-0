
void FUN_ram_4202fa5c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_420249f4();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_420249f4(param_1 + 8,param_2 + 8), iVar1 == 0)) {
    FUN_ram_420249f4(param_1 + 0x10,param_2 + 0x10);
    return;
  }
  return;
}

