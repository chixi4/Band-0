
byte FUN_ram_420a5b12(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_420a865e(param_1,1);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_420a865e(param_1,4);
    bVar1 = -(iVar2 != 0) & 3;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}

