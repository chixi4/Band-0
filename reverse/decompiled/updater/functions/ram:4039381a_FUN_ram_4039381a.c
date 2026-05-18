
bool FUN_ram_4039381a(int param_1)

{
  if ((0x3fffff < param_1 + 0xbe000000U) && (0x43fff < param_1 + 0xbfc84000U)) {
    return param_1 + 0xc0000000U < 0x90000;
  }
  return true;
}

