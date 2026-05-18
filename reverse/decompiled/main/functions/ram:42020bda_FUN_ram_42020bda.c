
void FUN_ram_42020bda(void)

{
  int iVar1;
  
  FUN_ram_42048144(6,1);
  FUN_ram_42020bd0();
  FUN_ram_42048144(6,0);
  FUN_ram_42020bd0();
  iVar1 = 8;
  do {
    FUN_ram_42048144(6,1);
    FUN_ram_42020bd0();
    FUN_ram_42048144(6,0);
    iVar1 = iVar1 + -1;
    FUN_ram_42020bd0();
  } while (iVar1 != 0);
  return;
}

