
int FUN_ram_4205e6a6(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  iVar1 = FUN_ram_40399d1a(1,8);
  if (iVar1 != 0) {
    FUN_ram_4202476a(auStack_38);
    FUN_ram_4202476a(auStack_30);
    FUN_ram_4202476a(auStack_28);
    FUN_ram_4202476a(iVar1);
    iVar2 = FUN_ram_42024a98(auStack_28,3);
    if (iVar2 == 0) {
      iVar3 = param_1 + 4;
      iVar2 = FUN_ram_42025944(auStack_38,param_2,auStack_28,iVar3,0);
      if ((((iVar2 == 0) && (iVar2 = FUN_ram_42024a98(auStack_28,0xfffffffd), iVar2 == 0)) &&
          (iVar2 = FUN_ram_42025088(auStack_30,param_2,auStack_28), iVar2 == 0)) &&
         (((iVar2 = FUN_ram_42025604(auStack_30,auStack_30,iVar3), iVar2 == 0 &&
           (iVar2 = FUN_ram_42025020(auStack_30,auStack_30,param_1 + 0x14), iVar2 == 0)) &&
          ((iVar2 = FUN_ram_42025604(auStack_30,auStack_30,iVar3), iVar2 == 0 &&
           (iVar2 = FUN_ram_42025020(auStack_30,auStack_30,auStack_38), iVar2 == 0)))))) {
        iVar2 = FUN_ram_42025604(iVar1,auStack_30,iVar3);
      }
    }
    FUN_ram_42024774(auStack_38);
    FUN_ram_42024774(auStack_30);
    FUN_ram_42024774(auStack_28);
    if (iVar2 == 0) {
      return iVar1;
    }
    FUN_ram_42024774(iVar1);
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0;
}

