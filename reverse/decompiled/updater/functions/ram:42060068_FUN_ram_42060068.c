
undefined4
FUN_ram_42060068(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_128 [132];
  undefined1 auStack_a4 [136];
  
  iVar1 = FUN_ram_4205e538(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),param_4,auStack_128,
                           auStack_128 + *(int *)(*(int *)(param_1 + 0x7c) + 0x68));
  if ((-1 < iVar1) &&
     (iVar1 = FUN_ram_4205e538(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),param_6,auStack_a4,
                               auStack_a4 + *(int *)(*(int *)(param_1 + 0x7c) + 0x68)), -1 < iVar1))
  {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x68) << 1;
    FUN_ram_4205ff02(param_1,param_2,param_3,auStack_128,iVar1,param_5,auStack_a4,iVar1,param_7);
    return 0;
  }
  return 0xffffffff;
}

