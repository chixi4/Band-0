
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420392fa(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x42039316 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 * 4 + 0x3c078d2c))();
    return uVar1;
  }
  return 0;
}

