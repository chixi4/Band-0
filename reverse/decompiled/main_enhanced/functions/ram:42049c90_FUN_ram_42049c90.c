
void FUN_ram_42049c90(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if ((param_2 != 0) && (iVar1 = FUN_ram_4206dce0(), iVar1 != 0)) {
    FUN_ram_42049c26();
  }
  FUN_ram_4206dc72(param_1);
  thunk_FUN_ram_40390634(param_1);
  return;
}

