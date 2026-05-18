
void FUN_ram_42020cda(int param_1)

{
  uint uVar1;
  
  FUN_ram_42048144(7,0);
  FUN_ram_42020bd0();
  FUN_ram_42048144(6,1);
  FUN_ram_42020bd0();
  FUN_ram_42048144(6,0);
  FUN_ram_42020bd0();
  uVar1 = 7;
  do {
    FUN_ram_42048144(7,param_1 >> (uVar1 & 0x1f) & 1);
    FUN_ram_42020bd0();
    FUN_ram_42048144(6,1);
    FUN_ram_42020bd0();
    FUN_ram_42048144(6,0);
    uVar1 = uVar1 - 1;
    FUN_ram_42020bd0();
  } while (uVar1 != 0xffffffff);
  return;
}

