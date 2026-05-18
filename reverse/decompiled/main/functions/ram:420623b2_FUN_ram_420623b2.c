
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420623b2(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(_DAT_ram_3fcc53a8 + 8) == 9) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(_DAT_ram_3fcc53a8 + 8) != 0xb) {
      return param_1;
    }
    uVar1 = 5;
  }
  FUN_ram_420b4de2(uVar1,param_1);
  *(char *)(_DAT_ram_3fcc53a8 + 0x22) = (char)param_1;
  return 0;
}

