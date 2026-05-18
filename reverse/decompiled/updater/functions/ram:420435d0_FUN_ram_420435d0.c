
bool FUN_ram_420435d0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  (*(code *)&SUB_ram_400120d0)();
  iVar2 = FUN_ram_420434ce();
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar3 = FUN_ram_4204353a(param_1,iVar2);
    bVar1 = 1 < uVar3;
  }
  return bVar1;
}

