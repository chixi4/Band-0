
bool FUN_ram_4201980e(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_420197f8();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = FUN_ram_420197ea(param_1);
    bVar1 = iVar2 == iVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

