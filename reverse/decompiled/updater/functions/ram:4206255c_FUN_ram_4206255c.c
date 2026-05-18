
int FUN_ram_4206255c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x80) {
    iVar1 = 5;
  }
  else if (param_1 < 0x81) {
    iVar1 = 0x10;
    if ((param_1 != 8) && (param_1 != 0x20)) {
      return (uint)(param_1 == 2) << 5;
    }
  }
  else {
    iVar1 = 0xd;
    if (param_1 != 0x100) {
      return 0;
    }
  }
  return iVar1;
}

