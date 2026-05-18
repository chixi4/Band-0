
int FUN_ram_4205e672(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_42024dea(param_2 + 8,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_42025026(param_2 + 8,param_1 + 4);
    iVar2 = -(uint)(iVar2 != 0);
  }
  return iVar2;
}

