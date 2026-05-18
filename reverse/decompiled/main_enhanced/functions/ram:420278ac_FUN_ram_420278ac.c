
int FUN_ram_420278ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iStack_14;
  
  iVar1 = FUN_ram_42026f64(param_1,&iStack_14);
  if (iVar1 == 0) {
    thunk_FUN_ram_4202b7dc();
    iVar2 = FUN_ram_42027896();
    iStack_14 = iStack_14 + iVar2;
    thunk_FUN_ram_4202b7f6();
    if (2 < iStack_14) {
      iVar1 = FUN_ram_4202ce5c(param_1,param_2);
    }
  }
  return iVar1;
}

