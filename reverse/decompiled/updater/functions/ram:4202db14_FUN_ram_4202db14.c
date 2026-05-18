
int FUN_ram_4202db14(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  if ((((param_4 == 0) || (iVar1 = FUN_ram_42024dea(param_4,0), iVar1 != 0)) ||
      (iVar1 = FUN_ram_42024dea(param_1,1), iVar1 < 1)) ||
     ((iVar1 = FUN_ram_42024dea(param_2,1), iVar1 < 1 ||
      (iVar1 = FUN_ram_42024dea(param_3,0), iVar1 == 0)))) {
    iVar1 = -4;
  }
  else {
    iVar2 = FUN_ram_42024ae6(param_3,0);
    iVar1 = -0xe;
    if (iVar2 == 1) {
      FUN_ram_4202476a(auStack_30);
      FUN_ram_4202476a(auStack_28);
      iVar1 = FUN_ram_4202505a(auStack_30,param_1,1);
      if (((iVar1 == 0) && (iVar1 = FUN_ram_4202505a(auStack_28,param_2,1), iVar1 == 0)) &&
         ((iVar1 = FUN_ram_42025ab2(param_4,auStack_30,auStack_28), iVar1 == 0 &&
          ((iVar1 = FUN_ram_42025088(auStack_30,auStack_30,auStack_28), iVar1 == 0 &&
           (iVar1 = FUN_ram_420251fc(auStack_30,0,auStack_30,param_4), iVar1 == 0)))))) {
        iVar1 = FUN_ram_42025ed4(param_4,param_3,auStack_30);
      }
      FUN_ram_42024774(auStack_30);
      FUN_ram_42024774(auStack_28);
    }
  }
  return iVar1;
}

