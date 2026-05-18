
void FUN_ram_42025aa2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_400119a0)();
  if ((iVar1 == 0) && (iVar1 = (*(code *)&SUB_ram_40011a90)(param_3), iVar1 == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

