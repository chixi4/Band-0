
int FUN_ram_4205032e(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_ram_4205030e();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar2 = 9;
  }
  return iVar1;
}

