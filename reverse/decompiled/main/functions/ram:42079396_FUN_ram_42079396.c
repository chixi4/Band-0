
byte FUN_ram_42079396(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_4208b96c(1);
  iVar3 = FUN_ram_4208b912(1);
  if (param_1 == 0xe) {
    bVar1 = 0;
  }
  else {
    bVar1 = (int)param_1 < iVar3 + -3 && param_1 < 10;
    if (iVar2 + 3 < (int)param_1) {
      bVar1 = bVar1 | 2;
    }
  }
  return bVar1;
}

