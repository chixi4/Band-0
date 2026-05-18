
bool FUN_ram_420a71ea(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(code *)&SUB_ram_40010670)();
  iVar1 = *piVar2;
  piVar2 = (int *)(*(code *)&SUB_ram_40010670)();
  *piVar2 = iVar1;
  return iVar1 == 0xb;
}

