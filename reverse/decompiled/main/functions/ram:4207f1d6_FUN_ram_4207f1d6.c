
byte FUN_ram_4207f1d6(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = (*(code *)&SUB_ram_40011f9c)();
  if (iVar2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0xf) & 1;
  }
  return bVar1;
}

