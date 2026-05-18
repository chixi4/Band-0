
int FUN_ram_403908ae(void)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_40010770)();
  if (iVar1 * 1000000 < 40000000) {
    iVar1 = (*(code *)&SUB_ram_40010770)();
    iVar1 = iVar1 * 1000000;
  }
  else {
    iVar1 = 40000000;
  }
  return iVar1;
}

