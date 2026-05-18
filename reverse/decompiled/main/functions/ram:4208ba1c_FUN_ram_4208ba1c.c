
uint FUN_ram_4208ba1c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_42079332();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4208b9e8(param_1);
  }
  return uVar2 & 1;
}

