
undefined4 FUN_ram_420201f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_403980d6();
  FUN_ram_4201fe18(1);
  do {
    iVar2 = FUN_ram_4201fe42();
    if (iVar2 != 0) {
      return 1;
    }
    FUN_ram_4201fe18(10);
    iVar2 = FUN_ram_403980d6();
  } while ((uint)(iVar2 - iVar1) < 0x7d1);
  return 0;
}

