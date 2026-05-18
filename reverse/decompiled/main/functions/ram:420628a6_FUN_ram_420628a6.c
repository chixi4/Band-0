
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420628a6(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x102;
    if (param_2 < 4) {
      uVar1 = 0x103;
      if (_DAT_ram_3fcc53a8 != (int *)0x0) {
        FUN_ram_40396966(0x103);
        puVar2 = (uint *)((_DAT_ram_3fcc53a8[1] * 4 + param_2 + 0x14) * 8 + *_DAT_ram_3fcc53a8);
        *puVar2 = *puVar2 | 0x800000;
        *puVar2 = *puVar2 & 0xff7fffff;
        FUN_ram_40396994();
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0x102;
}

