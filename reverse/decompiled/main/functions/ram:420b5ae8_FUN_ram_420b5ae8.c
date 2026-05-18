
void FUN_ram_420b5ae8(undefined4 param_1)

{
  int iVar1;
  int iStack_18;
  int aiStack_14 [3];
  
  FUN_ram_403985f2();
  while (iVar1 = FUN_ram_40398010(param_1), iVar1 == 0) {
    FUN_ram_403969de();
  }
  iVar1 = FUN_ram_40398010(param_1);
  if (iVar1 != 0) {
    FUN_ram_40397f1c(param_1);
    iVar1 = FUN_ram_40398116(param_1,aiStack_14,&iStack_18);
    if (((iVar1 == 1) && (aiStack_14[0] != 0)) && (iStack_18 != 0)) {
      FUN_ram_40390634();
      thunk_FUN_ram_40390634(iStack_18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

