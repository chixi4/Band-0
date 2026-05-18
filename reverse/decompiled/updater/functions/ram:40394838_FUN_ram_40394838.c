
undefined4 FUN_ram_40394838(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  iVar1 = FUN_ram_40394694(param_1,auStack_14,0,param_2,0,0,param_3);
  if (iVar1 != 1) {
    auStack_14[0] = 0;
  }
  return auStack_14[0];
}

