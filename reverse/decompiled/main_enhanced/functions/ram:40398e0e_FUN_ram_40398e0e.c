
undefined4
FUN_ram_40398e0e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  if ((param_7 != 0) && (param_7 != 0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar1 = FUN_ram_40396aa0(param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40396aa0(0x150);
    if (iVar2 != 0) {
      (*(code *)&SUB_ram_40010488)(iVar2,0,0x150);
      *(int *)(iVar2 + 0x30) = iVar1;
      FUN_ram_40397e52(param_1,param_2,param_3,param_4,param_5,param_6,iVar2);
      FUN_ram_40397c68(iVar2);
      return 1;
    }
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0xffffffff;
}

