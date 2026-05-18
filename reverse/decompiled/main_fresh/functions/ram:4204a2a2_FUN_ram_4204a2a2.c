
undefined4 FUN_ram_4204a2a2(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  if ((param_2 == (undefined4 *)0x0) || (iVar1 = FUN_ram_403995a4(0,param_1,1,3), iVar1 == 0)) {
    uVar2 = 0x102;
  }
  else {
    uStack_28 = 0;
    auStack_24[0] = 0;
    FUN_ram_403917e0(0x3fcc1d4c);
    iVar1 = FUN_ram_4039976a(0,param_1,&uStack_28,auStack_24);
    FUN_ram_403917f8(0x3fcc1d4c);
    uVar2 = 0x105;
    if (iVar1 != 0) {
      uVar2 = 0;
      *param_2 = uStack_28;
      *param_3 = auStack_24[0];
    }
  }
  return uVar2;
}

