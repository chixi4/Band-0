
undefined4 FUN_ram_4202c6a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined1 auStack_14 [16];
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_42031542(param_1,param_2,auStack_14,&uStack_18);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4202c63e(uStack_18);
  }
  else {
    uVar2 = 0;
  }
  thunk_FUN_ram_4202b7f6();
  return uVar2;
}

