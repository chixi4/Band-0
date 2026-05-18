
bool FUN_ram_4205326a(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iStack_14;
  
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar2 = *(int *)(param_1 + 4);
  iStack_14 = *param_2;
  bVar1 = iStack_14 != iVar2;
  if (bVar1) {
    *param_3 = iVar2;
    FUN_ram_42054e06(param_3,&iStack_14);
    FUN_ram_42058de0(param_3,&iStack_14);
    FUN_ram_42054478(param_3,&iStack_14);
    thunk_FUN_ram_4205ca7a(param_1,param_3,&iStack_14);
    *(int *)(param_1 + 4) = *param_2;
    FUN_ram_4205323e(param_1,1);
  }
  return bVar1;
}

