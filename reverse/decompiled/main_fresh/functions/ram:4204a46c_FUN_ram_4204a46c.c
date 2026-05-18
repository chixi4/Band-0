
undefined4 FUN_ram_4204a46c(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 auStack_14 [4];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  iVar1 = FUN_ram_4204a288(param_1,&uStack_18,auStack_14);
  if (iVar1 != 0) {
    uStack_18 = 0xffffffff;
  }
  return uStack_18;
}

