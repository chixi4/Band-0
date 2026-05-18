
undefined4 FUN_ram_403921f6(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_18;
  undefined4 auStack_14 [2];
  
  *param_2 = 0;
  uStack_18 = 0;
  iVar1 = FUN_ram_403920ac(param_1,&uStack_18);
  if (iVar1 == 0) {
    auStack_14[0] = 0;
    if ((uStack_18 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    FUN_ram_403994d6(0,param_1,1,uVar2,auStack_14);
    uVar2 = 1;
    *param_2 = auStack_14[0];
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

