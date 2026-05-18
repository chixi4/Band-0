
int FUN_ram_4202d4f8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) || (param_2 == 0)) && (iVar1 = FUN_ram_4202d4f2(), iVar1 != 0)) {
    iVar2 = (*(code *)&SUB_ram_400119f8)(iVar1,0,param_1,param_2);
    if (iVar2 == 0) {
      return iVar1;
    }
    (*(code *)&SUB_ram_40011a08)(iVar1);
  }
  return 0;
}

