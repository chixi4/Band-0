
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203bea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0xb4))
                    (_DAT_ram_3c07590c,param_1,param_2,param_3,0xffffffff,
                     *(code **)(_DAT_ram_3fcdfdd8 + 0xb4));
  if (iVar1 != 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d7d0,param_1,iVar1);
  }
  return iVar1;
}

