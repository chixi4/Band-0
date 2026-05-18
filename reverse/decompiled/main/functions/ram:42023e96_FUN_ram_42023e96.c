
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42023e96(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (_DAT_ram_3fcc518c == param_1)) {
    uVar1 = FUN_ram_420b3926(_DAT_ram_3fcc518c[1],0x50633444,param_3,param_2,*_DAT_ram_3fcc518c);
    return uVar1;
  }
  return 0xffffffff;
}

