
int FUN_ram_42046848(int param_1)

{
  int iVar1;
  
  if (param_1 - 1U < 0x28) {
    if (param_1 == 1) {
      return 0xd0;
    }
    iVar1 = param_1 / 7 + 2;
    iVar1 = ((param_1 + 8) * param_1 + 4) * 0x10 - ((iVar1 * 0x19 + -10) * iVar1 + -0x37);
    if (6 < param_1) {
      iVar1 = iVar1 + -0x24;
    }
    if (iVar1 - 0xd0U < 0x7301) {
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

