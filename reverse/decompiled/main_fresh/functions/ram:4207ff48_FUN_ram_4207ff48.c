
void FUN_ram_4207ff48(byte param_1,byte param_2)

{
  DAT_ram_3fcc305c = 1;
  if (((param_1 & 0xfd) == 1) && ((param_2 & 0xfd) != 1)) {
    FUN_ram_4207fec4(1);
  }
  if (((byte)(param_1 - 2) < 2) && (1 < (byte)(param_2 - 2))) {
    FUN_ram_4207fec4(2);
  }
  DAT_ram_3fcc305c = 0;
  return;
}

