
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42085a58(void)

{
  undefined *puVar1;
  
  if ((_DAT_ram_3fcc41fc & 1) == 0) {
    puVar1 = &DAT_ram_3c0fcabc;
  }
  else if (_DAT_ram_3fcc4014 == 0) {
    puVar1 = &DAT_ram_3c0fcbb0;
  }
  else {
    if (*(int *)(_DAT_ram_3fcc4014 + 0x98) != 5) {
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fccc8);
      return 0;
    }
    if (*(int *)(_DAT_ram_3fcc4014 + 0xe4) != 0) {
      return 1;
    }
    puVar1 = &DAT_ram_3c0fcda0;
  }
  FUN_ram_4207a038(1,8,4,puVar1);
  return 0;
}

