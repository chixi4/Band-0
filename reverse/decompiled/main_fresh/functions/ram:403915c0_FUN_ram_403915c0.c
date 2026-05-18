
int FUN_ram_403915c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40391418(param_1,0,1);
  if ((iVar1 == 0) && ((param_1 & 0x20) != 0)) {
    (*(code *)&SUB_ram_40010044)(700);
  }
  return iVar1;
}

