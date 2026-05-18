
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203c246(undefined4 param_1)

{
  int iVar1;
  
  if ((_DAT_ram_3fcdfdb8 != 0) ||
     (_DAT_ram_3fcdfdb8 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x20))(), _DAT_ram_3fcdfdb8 != 0)) {
    if ((_DAT_ram_3fcdfdb4 == 0) &&
       (_DAT_ram_3fcdfdb4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x4c))(), _DAT_ram_3fcdfdb4 == 0)) {
      FUN_ram_42033fd8(1,1,2,0x3c07fe1c);
    }
    else if ((_DAT_ram_3fcb3fb8 != 0) ||
            (_DAT_ram_3fcb3fb8 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x48))(), _DAT_ram_3fcb3fb8 != 0))
    {
      iVar1 = FUN_ram_4203a8da(param_1);
      if ((iVar1 == 0) &&
         (((iVar1 = FUN_ram_4206941c(), iVar1 == 0 &&
           (iVar1 = thunk_EXT_FUN_ram_40011e28(), iVar1 == 0)) &&
          (iVar1 = FUN_ram_4203b71e(), iVar1 == 0)))) {
        return 0;
      }
      goto LAB_ram_4203c2a0;
    }
  }
  iVar1 = 0x101;
LAB_ram_4203c2a0:
  FUN_ram_4203c1f6();
  return iVar1;
}

