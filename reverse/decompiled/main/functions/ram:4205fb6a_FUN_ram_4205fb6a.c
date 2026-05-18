
undefined4 FUN_ram_4205fb6a(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  int *piStack_14;
  
  if (param_1 == 0) {
    return 0x5001;
  }
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    uStack_18 = param_2;
    piStack_14 = param_3;
    uVar1 = FUN_ram_4205edde(0x4204ed34,param_1,&uStack_18);
    return uVar1;
  }
  return 0x5001;
}

