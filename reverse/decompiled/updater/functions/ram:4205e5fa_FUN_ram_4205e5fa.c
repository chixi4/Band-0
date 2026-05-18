
int FUN_ram_4205e5fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_28 [20];
  
  FUN_ram_4202476a(auStack_28);
  iVar1 = FUN_ram_42024a98(auStack_28,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_42030296(param_1,param_4,auStack_28,param_2,auStack_28,param_3);
  }
  FUN_ram_42024774(auStack_28);
  return -(uint)(iVar1 != 0);
}

