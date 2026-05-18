
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b2cc4(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = _DAT_ram_6004d018;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _DAT_ram_6004d01c;
  }
  _DAT_ram_6004d00c = _DAT_ram_6004d00c & 0xfffffffe;
  return;
}

