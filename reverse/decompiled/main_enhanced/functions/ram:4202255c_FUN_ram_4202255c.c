
undefined4 FUN_ram_4202255c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_4c [33];
  undefined1 auStack_2b [23];
  
  iVar2 = FUN_ram_42021d5a();
  iVar1 = 0;
  while( true ) {
    if (iVar1 == iVar2) {
      return 0;
    }
    iVar3 = FUN_ram_42021d64(iVar1,auStack_4c);
    if ((iVar3 == 0) && (iVar3 = FUN_ram_4039c0e0(auStack_2b,param_1,6), iVar3 == 0)) break;
    iVar1 = iVar1 + 1;
  }
  FUN_ram_4039c11e(param_2,auStack_4c,0x29);
  return 1;
}

