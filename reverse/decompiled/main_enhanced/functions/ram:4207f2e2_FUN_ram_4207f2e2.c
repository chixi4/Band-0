
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207f2e2(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 0xc) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 1;
      if (param_2 != *(int *)(&DAT_ram_3fcc4008 + (param_1 + 0x4c) * 4)) {
        if (*(int *)(&DAT_ram_3fcc4008 + (param_1 + 0x4c) * 4) != 0) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
        }
        *(int *)(&DAT_ram_3fcc4008 + (param_1 + 0x4c) * 4) = param_2;
        uVar1 = 1;
      }
    }
    return uVar1;
  }
  return 0;
}

