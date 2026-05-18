
undefined4 FUN_ram_4207f108(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_42086758();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x338);
  }
  return uVar2;
}

