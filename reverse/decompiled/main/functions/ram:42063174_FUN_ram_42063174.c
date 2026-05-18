
void FUN_ram_42063174(void)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_403946d4();
  FUN_ram_42096cd6(0);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    FUN_ram_420b3bee(0,iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 4);
  FUN_ram_40394720();
  return;
}

