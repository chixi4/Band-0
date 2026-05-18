
byte FUN_ram_4205e870(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  FUN_ram_4202476a(auStack_30);
  FUN_ram_4202476a(auStack_28);
  iVar2 = FUN_ram_42024a98(auStack_28,2);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_42025944(auStack_30,param_2 + 8,auStack_28,param_1 + 4,0);
    iVar4 = 0;
    bVar1 = false;
    if ((iVar2 == 0) && (iVar4 = FUN_ram_4205e6a6(param_1,param_2), iVar4 != 0)) {
      iVar3 = FUN_ram_42024d4a(iVar4,auStack_30);
      bVar1 = iVar3 == 0;
    }
  }
  else {
    bVar1 = false;
    iVar4 = 0;
  }
  FUN_ram_42024774(auStack_30);
  FUN_ram_42024774(auStack_28);
  FUN_ram_42024774(iVar4);
  thunk_FUN_ram_40390608(iVar4);
  return iVar2 == 0 & bVar1;
}

