
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202ce0a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    thunk_FUN_ram_4202b7dc();
    if (_DAT_ram_3fcb69d4 == (code *)0x0) {
      thunk_FUN_ram_4202b7f6();
      return 8;
    }
    iVar1 = (*_DAT_ram_3fcb69d4)(param_1,param_2);
    thunk_FUN_ram_4202b7f6();
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 != 0x1b) {
      return iVar1;
    }
    iVar1 = FUN_ram_4202cdf2(param_1,param_2);
  } while (iVar1 == 0);
  return iVar1;
}

