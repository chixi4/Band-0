
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42025c4c(int param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_420251f2();
  if (iVar1 == 2) {
    if (param_4 != 0) {
      if (param_1 == 1) {
        FUN_ram_4203734c(param_2);
      }
      else if (param_1 == 2) {
        FUN_ram_420373a8(param_2);
      }
      return 0;
    }
    if (_DAT_ram_3fcb6b50 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42025c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*_DAT_ram_3fcb6b50)(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0xffffffff;
}

