
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40398498(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (_DAT_ram_3fcc4e64 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_40397dfa();
    }
    FUN_ram_403980c6();
    FUN_ram_40397b7e(param_1,0);
    iVar1 = FUN_ram_40398348();
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_ram_403969de();
  return;
}

