
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062d82(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    uVar1 = 0x102;
    if (param_2 < 4) {
      uVar1 = 0x103;
      if (_DAT_ram_3fcc53a8 != (int *)0x0) {
        uStack_14 = 0;
        FUN_ram_42096c14(_DAT_ram_3fcc53a8,param_2,&uStack_14);
        uVar1 = FUN_ram_42062592(param_2,uStack_14,param_3,
                                 *(uint *)((_DAT_ram_3fcc53a8[1] * 4 + param_2 + 0x14) * 8 +
                                          *_DAT_ram_3fcc53a8) & 0xf);
      }
    }
    return uVar1;
  }
  return 0x102;
}

