
int FUN_ram_42026bd6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = FUN_ram_420260e4(param_3,param_4);
  uVar1 = iVar2 + 7;
  iVar6 = 0x1e;
  if (uVar1 < 0x28) {
    iVar6 = 0xfa;
  }
  while( true ) {
    iVar3 = FUN_ram_42026b4e(param_1,param_4,uVar1 >> 3,param_5,param_6);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar6 = iVar6 + -1;
    FUN_ram_42026472(param_1,param_4,(uVar1 & 0xfffffff8) - iVar2);
    if (iVar6 == 0) break;
    uVar4 = FUN_ram_42026168(param_2,param_1,param_4);
    uVar5 = FUN_ram_420261b6(param_1,param_3,param_4);
    if ((uVar4 & uVar5) != 0) {
      return 0;
    }
  }
  return -0xe;
}

