
bool FUN_ram_42011556(int param_1)

{
  if ((0x43fff < param_1 + 0xbfc84000U) && (0x4ffff < param_1 + 0xc0100000U)) {
    return param_1 + 0xc0000000U < 0x90000;
  }
  return true;
}

