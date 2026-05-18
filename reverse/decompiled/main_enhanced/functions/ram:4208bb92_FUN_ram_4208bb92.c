
bool FUN_ram_4208bb92(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  (*(code *)&SUB_ram_400120d0)();
  iVar2 = FUN_ram_4208ba90();
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar3 = FUN_ram_4208bafc(param_1,iVar2);
    bVar1 = 1 < uVar3;
  }
  return bVar1;
}

