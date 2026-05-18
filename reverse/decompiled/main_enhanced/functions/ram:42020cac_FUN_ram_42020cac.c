
undefined4 FUN_ram_42020cac(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 500;
  do {
    iVar2 = FUN_ram_42048196(3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_40398498(1);
  } while (iVar1 != 0);
  return 0;
}

