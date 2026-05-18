
void FUN_ram_4039d184(undefined4 param_1,ushort *param_2)

{
  if (((*param_2 & 0xf0) == 0xd0) && ((param_2[2] & 1) == 0)) {
    FUN_ram_4204c448();
    return;
  }
  return;
}

