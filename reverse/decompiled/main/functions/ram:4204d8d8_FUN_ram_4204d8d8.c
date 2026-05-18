
undefined4
FUN_ram_4204d8d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_34 [3];
  
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0x1102;
    }
    auStack_34[0] = 0;
    iVar2 = FUN_ram_4204cd30(iVar1,param_2,param_3,param_4,auStack_34,param_6,param_7,param_8);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  *param_5 = iVar1;
  if (param_9 == (undefined4 *)0x0) {
    return 0;
  }
  *param_9 = auStack_34[0];
  return 0;
}

