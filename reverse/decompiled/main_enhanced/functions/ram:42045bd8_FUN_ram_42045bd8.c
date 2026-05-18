
int FUN_ram_42045bd8(code *param_1)

{
  int iVar1;
  
  iVar1 = (*param_1)(0x28);
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x28);
  }
  return iVar1;
}

