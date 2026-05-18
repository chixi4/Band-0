
int FUN_ram_4204b742(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(uint *)(gp + -0x410 + iVar1 * 8) & 0xf) == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  return -1;
}

