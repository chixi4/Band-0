
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4204b9ec(void)

{
  uint uVar1;
  
  uVar1 = 0;
  FUN_ram_42033fd8(6,1,3,0x3c07ee1c);
  do {
    if (*(char *)(_DAT_ram_3ff4fbbc + uVar1 * 0x28 + 0x12) != '\0') {
      FUN_ram_42033fd8(6,0x40,2,&DAT_ram_3c0800dc,uVar1);
      FUN_ram_4204b8d0(uVar1 & 0xff);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 5);
  return 0;
}

