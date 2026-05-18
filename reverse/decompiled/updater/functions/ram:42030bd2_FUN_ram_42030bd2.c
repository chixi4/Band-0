
int FUN_ram_42030bd2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_4202f906();
  if (iVar1 == 2) {
    uVar3 = *(uint *)(param_1 + 0x40);
    iVar1 = (uVar3 >> 3) + 1;
    iVar2 = FUN_ram_42025be4(param_2,iVar1);
    if ((((iVar2 == 0) && (iVar2 = FUN_ram_42024cba(param_2,(iVar1 * 8 - uVar3) + -1), iVar2 == 0))
        && (iVar2 = FUN_ram_42024b08(param_2,uVar3,1), iVar2 == 0)) &&
       (((iVar2 = FUN_ram_42024b08(param_2,0,0), iVar2 == 0 &&
         (iVar2 = FUN_ram_42024b08(param_2,1,0), iVar2 == 0)) && (uVar3 == 0xfe)))) {
      iVar1 = FUN_ram_42024b08(param_2,2,0);
      return iVar1;
    }
  }
  else {
    iVar2 = -0x4f80;
    if ((iVar1 == 1) &&
       (iVar2 = FUN_ram_42025e02(param_2,1,param_1 + 0x34,param_3,param_4), iVar2 == -0xe)) {
      iVar2 = -0x4d00;
    }
  }
  return iVar2;
}

