
undefined4
FUN_ram_40398eaa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = thunk_FUN_ram_40396aae(param_6);
  if (((iVar1 != 0) && (iVar1 = thunk_FUN_ram_40396aae(param_7), iVar1 != 0)) &&
     ((param_8 == 0 || (param_8 == 0x7fffffff)))) {
    uStack_34 = 0x150;
    if ((param_7 == 0) || (param_6 == 0)) {
      uStack_38 = 0;
    }
    else {
      (*(code *)&SUB_ram_40010488)(param_7,0);
      *(undefined1 *)(param_7 + 0x14d) = 2;
      *(int *)(param_7 + 0x30) = param_6;
      FUN_ram_40397e52(param_1,param_2,param_3,param_4,param_5,&uStack_38,param_7);
      FUN_ram_40397c68(param_7);
    }
    return uStack_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

