
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42083964(undefined4 param_1)

{
  int iVar1;
  
  if ((_DAT_ram_3fcdfdb8 != 0) ||
     (_DAT_ram_3fcdfdb8 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x20))(), _DAT_ram_3fcdfdb8 != 0)) {
    if ((_DAT_ram_3fcdfdb4 == 0) &&
       (_DAT_ram_3fcdfdb4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x4c))(), _DAT_ram_3fcdfdb4 == 0)) {
      FUN_ram_4207a038(1,1,2,&DAT_ram_3c101e34);
    }
    else if ((_DAT_ram_3fcc3040 != 0) ||
            (_DAT_ram_3fcc3040 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x48))(), _DAT_ram_3fcc3040 != 0))
    {
      iVar1 = FUN_ram_420816b2(param_1);
      if ((iVar1 == 0) &&
         (((iVar1 = FUN_ram_420ab85e(), iVar1 == 0 &&
           (iVar1 = thunk_EXT_FUN_ram_40011e28(), iVar1 == 0)) &&
          (iVar1 = FUN_ram_42082b1a(), iVar1 == 0)))) {
        return 0;
      }
      goto LAB_ram_420839be;
    }
  }
  iVar1 = 0x101;
LAB_ram_420839be:
  FUN_ram_42083914();
  return iVar1;
}

