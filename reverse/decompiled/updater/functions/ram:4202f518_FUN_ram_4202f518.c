
int FUN_ram_4202f518(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_42025020(param_2,param_3,param_4);
  iVar2 = iVar1;
  while ((iVar2 == 0 && (iVar3 = FUN_ram_42024d4a(param_2,param_1 + 4), iVar2 = iVar1, -1 < iVar3)))
  {
    iVar2 = FUN_ram_42024ec8(param_2,param_2,param_1 + 4);
  }
  return iVar2;
}

