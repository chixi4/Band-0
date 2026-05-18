
int FUN_ram_42029432(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 auStack_94 [128];
  
  iVar1 = -0x74;
  if (param_4 < 2) {
    FUN_ram_4202aba8(auStack_94);
    iVar1 = FUN_ram_4202abe0(auStack_94,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4202ac0e(auStack_94,param_1,param_2), iVar1 == 0)) {
      iVar1 = FUN_ram_4202ac24(auStack_94,param_3);
    }
    FUN_ram_4202abb6(auStack_94);
  }
  return iVar1;
}

