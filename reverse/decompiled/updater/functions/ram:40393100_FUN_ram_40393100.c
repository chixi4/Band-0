
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40393100(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_6004d00c = _DAT_ram_6004d00c & 0xfffffffe;
  }
  else {
    _DAT_ram_6004d00c = _DAT_ram_6004d00c & 0xfffffffd;
  }
  return CONCAT44(_DAT_ram_6004d01c,_DAT_ram_6004d018);
}

