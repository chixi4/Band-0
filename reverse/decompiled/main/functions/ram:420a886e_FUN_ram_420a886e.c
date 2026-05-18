
undefined4 FUN_ram_420a886e(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_ram_420a884c(*param_1,param_1[1]);
  piVar2 = (int *)FUN_ram_420a884c(*param_1,param_1[1]);
  if (*piVar2 != 0) {
    piVar2 = (int *)FUN_ram_420a884c(*param_1,param_1[1]);
    if (*piVar2 != param_2) {
      return 0xffffc300;
    }
  }
  uVar1 = FUN_ram_42073258(uVar1,param_2);
  return uVar1;
}

