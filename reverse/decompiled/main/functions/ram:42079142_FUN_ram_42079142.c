
int FUN_ram_42079142(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0xe;
  if ((param_2 & 0x80) == 0) {
    if (param_1 != 0x9b4) {
      if (param_1 < 0x9b4) goto LAB_ram_4207915e;
      iVar1 = -1;
    }
  }
  else if (param_1 != 0x9b4) {
    if (0x9b3 < param_1) {
      return (param_1 - 0x9d0) / 0x14 + 0xf;
    }
LAB_ram_4207915e:
    return (int)(param_1 - 0x967) / 5;
  }
  return iVar1;
}

