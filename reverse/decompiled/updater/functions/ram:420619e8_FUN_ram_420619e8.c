
bool FUN_ram_420619e8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_420665ee();
  if ((iVar2 == 0) && (iVar2 = FUN_ram_420665b0(param_1), iVar2 == 0)) {
    iVar2 = FUN_ram_420665c4(param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

