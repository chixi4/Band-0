
bool FUN_ram_40397292(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_4 & 2) != 0) && (param_2 + 0xbe000000U < 0x200000)) {
    bVar1 = param_3 + param_2 + 0xbdffffffU < 0x200000;
  }
  if ((param_4 & 1) != 0) {
    bVar1 = (bool)(bVar1 | (param_2 + 0xc4000000U < 0x200000 &&
                           param_3 + param_2 + 0xc3ffffffU < 0x200000));
  }
  return bVar1;
}

