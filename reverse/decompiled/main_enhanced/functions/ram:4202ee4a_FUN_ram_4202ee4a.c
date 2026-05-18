
uint FUN_ram_4202ee4a(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_4202eba2();
  uVar2 = FUN_ram_4202e0a6(0);
  if (uVar2 == 0) {
    FUN_ram_4202e0fa();
    uVar2 = iVar1 << 1 ^ 2;
  }
  return uVar2;
}

