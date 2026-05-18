
undefined4 FUN_ram_42051572(int param_1,int *param_2,int *param_3)

{
  int iStack_14;
  
  iStack_14 = *param_2;
  if (iStack_14 != *(int *)(param_1 + 4)) {
    *param_3 = *(int *)(param_1 + 4);
    FUN_ram_42053454(param_3,&iStack_14);
    FUN_ram_42056182(param_3,&iStack_14);
    FUN_ram_42052598(param_3,&iStack_14);
    thunk_FUN_ram_42059ac2(param_1,param_3,&iStack_14);
    *(int *)(param_1 + 4) = *param_2;
    FUN_ram_42051554(param_1,1);
    return 1;
  }
  return 0;
}

