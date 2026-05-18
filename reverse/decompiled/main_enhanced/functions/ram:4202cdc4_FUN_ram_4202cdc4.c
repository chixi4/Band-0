
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202cdc4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  thunk_FUN_ram_4202b7dc();
  uVar1 = 8;
  if (_DAT_ram_3fcb69d8 != (code *)0x0) {
    uVar1 = (*_DAT_ram_3fcb69d8)(param_1,param_2);
  }
  thunk_FUN_ram_4202b7f6();
  return uVar1;
}

