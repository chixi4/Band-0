
bool FUN_ram_4205326a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *extraout_a2;
  int iVar4;
  undefined8 uVar5;
  int iStack_14;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (param_3 == (int *)0x0) {
    uVar5 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
  }
  piVar3 = (int *)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  iVar4 = *(int *)(iVar2 + 4);
  iStack_14 = *piVar3;
  bVar1 = iStack_14 != iVar4;
  if (bVar1) {
    *param_3 = iVar4;
    FUN_ram_42054e06(param_3,&iStack_14);
    FUN_ram_42058de0(param_3,&iStack_14);
    FUN_ram_42054478(param_3,&iStack_14);
    thunk_FUN_ram_4205ca7a(iVar2,param_3,&iStack_14);
    *(int *)(iVar2 + 4) = *piVar3;
    FUN_ram_4205323e(iVar2,1);
  }
  return bVar1;
}

