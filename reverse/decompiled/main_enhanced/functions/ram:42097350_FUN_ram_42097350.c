
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42097350(int param_1)

{
  int iVar1;
  undefined1 auStack_11 [5];
  
  auStack_11[0] = 0;
  iVar1 = FUN_ram_4039c2c0(gp + -0x738 + param_1,auStack_11,1,5);
  if (iVar1 != 0) {
    FUN_ram_40394a58();
    if (param_1 == 0) {
      _DAT_ram_600c0010 = _DAT_ram_600c0010 | 2;
      _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xfffffffd;
    }
    else {
      if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x40;
      _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xffffffbf;
    }
    FUN_ram_40394a68();
  }
  return iVar1;
}

