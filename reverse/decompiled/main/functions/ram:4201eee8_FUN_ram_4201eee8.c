
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201eee8(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x103;
  if (_DAT_ram_3fcc5138 != 0) {
    thunk_FUN_ram_42020424(0x103);
    thunk_FUN_ram_420205e8(_DAT_ram_3fcc5138);
    if (DAT_ram_3fcc5115 != '\0') {
      thunk_FUN_ram_42020360();
    }
    uVar1 = 0;
  }
  return uVar1;
}

