
uint FUN_ram_42047744(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_42046700();
  if (uVar1 != 0xffffffff) {
    uVar1 = uVar1 + 7 >> 3;
  }
  return uVar1;
}

