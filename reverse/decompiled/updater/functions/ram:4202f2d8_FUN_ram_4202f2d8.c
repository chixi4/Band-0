
int FUN_ram_4202f2d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  
  iVar3 = param_2 + 0x10;
  iVar1 = FUN_ram_42024dea(iVar3,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_ram_4202476a(auStack_28);
    iVar2 = FUN_ram_4202595e(0,auStack_28,iVar3,param_1 + 4);
    if (iVar2 == 0) {
      iVar1 = param_2 + 8;
      iVar2 = FUN_ram_4202f224(param_1,iVar1,iVar1,auStack_28);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4202f224(param_1,auStack_28,auStack_28);
        if (((iVar2 == 0) &&
            (iVar2 = FUN_ram_4202f224(param_1,param_2,param_2,auStack_28), iVar2 == 0)) &&
           (iVar2 = FUN_ram_4202f224(param_1,iVar1,iVar1,auStack_28), iVar2 == 0)) {
          iVar2 = FUN_ram_42024a98(iVar3,1);
        }
      }
    }
    FUN_ram_42024774(auStack_28);
  }
  return iVar2;
}

