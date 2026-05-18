
int FUN_ram_4201900e(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    iVar3 = FUN_ram_42018a8a();
  }
  else {
    iVar3 = FUN_ram_42019372();
  }
  iVar5 = 0x10;
  bVar1 = false;
  iVar2 = 0;
  do {
    iVar4 = FUN_ram_42019344(0,iVar5,0);
    if (iVar4 != 0) {
      if (iVar2 == 0) {
        iVar2 = iVar4;
      }
      if (iVar3 == iVar4) {
        bVar1 = true;
      }
      else if (bVar1) {
        return iVar4;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x20);
  return iVar2;
}

