
bool FUN_ram_42062772(int param_1)

{
  if (((param_1 - 0x800U & 0xfffff7ff) != 0) && (param_1 != 8)) {
    return param_1 == 2;
  }
  return true;
}

