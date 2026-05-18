
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b2e6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3fcc526c != 0) {
    uVar1 = FUN_ram_420b3bd8(_DAT_ram_3fcc526c,param_1,param_2,param_3);
    return uVar1;
  }
  return 0x103;
}

