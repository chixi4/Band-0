
int FUN_ram_42066612(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  
  FUN_ram_4202476a(auStack_20);
  FUN_ram_4202476a(auStack_18);
  iVar1 = FUN_ram_4202505a(auStack_20,param_2,1);
  if (((iVar1 == 0) && (iVar1 = FUN_ram_42024cba(auStack_20,1), iVar1 == 0)) &&
     (iVar1 = FUN_ram_42025944(auStack_18,param_1,auStack_20,param_2,0), iVar1 == 0)) {
    iVar2 = FUN_ram_42024dea(auStack_18,1);
    iVar1 = 1;
    if ((iVar2 != 0) && (iVar2 = FUN_ram_42024dea(auStack_18,0), iVar1 = 0, iVar2 != 0)) {
      iVar1 = FUN_ram_42024d4a(auStack_18,param_2);
      iVar1 = -(uint)(iVar1 != 0);
    }
  }
  else {
    iVar1 = -2;
  }
  FUN_ram_42024774(auStack_18);
  FUN_ram_42024774(auStack_20);
  return iVar1;
}

