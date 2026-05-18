
undefined4 FUN_ram_4209ec38(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x214));
  if ((param_2 == 0) || (param_3 == 0)) {
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  else {
    iVar1 = FUN_ram_42060aee(param_2,param_3);
    *(int *)(param_1 + 0x214) = iVar1;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x218) = param_3;
  }
  return 0;
}

