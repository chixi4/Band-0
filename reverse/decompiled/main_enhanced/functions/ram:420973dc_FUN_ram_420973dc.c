
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420973dc(int param_1)

{
  int iVar1;
  undefined1 uStack_11;
  
  uStack_11 = 1;
  iVar1 = FUN_ram_4039c2c0(gp + -0x738 + param_1,&uStack_11,0,5);
  if (iVar1 != 0) {
    FUN_ram_40394a58();
    if (param_1 == 0) {
      _DAT_ram_600c0010 = _DAT_ram_600c0010 & 0xfffffffd;
    }
    else {
      if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      _DAT_ram_600c0010 = _DAT_ram_600c0010 & 0xffffffbf;
    }
    FUN_ram_40394a68();
  }
  return iVar1;
}

