
int FUN_ram_4202f0de(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  param_2 = param_2 + 8;
  FUN_ram_4202476a(auStack_28);
  iVar1 = FUN_ram_42024dea(param_2,0);
  iVar2 = FUN_ram_42025026(auStack_28,param_1 + 4,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_42024808(param_2,auStack_28,param_3 & iVar1 != 0);
  }
  FUN_ram_42024774(auStack_28);
  return iVar2;
}

