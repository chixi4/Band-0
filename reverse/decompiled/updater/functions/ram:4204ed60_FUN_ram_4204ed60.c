
int FUN_ram_4204ed60(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_ram_4204ed40();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar2 = 9;
  }
  return iVar1;
}

