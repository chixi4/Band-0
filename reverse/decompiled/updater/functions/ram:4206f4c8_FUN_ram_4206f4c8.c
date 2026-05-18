
byte FUN_ram_4206f4c8(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42066e6a(param_1,1);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_42066e6a(param_1,4);
    bVar1 = -(iVar2 != 0) & 3;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}

