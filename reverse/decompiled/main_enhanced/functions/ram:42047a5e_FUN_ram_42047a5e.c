
int FUN_ram_42047a5e(uint *param_1)

{
  uint uVar1;
  
  if (((*param_1 & 0x7f) != 0x6f) && ((*param_1 >> 7 & 0x1f) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar1 = *param_1;
  return (((int)(uVar1 << 0xb) >> 0x1f) << 10 | ((int)(uVar1 << 0xc) >> 0x18) << 0xb |
          (int)(uVar1 << 1) >> 0x16 | ((int)uVar1 >> 0x1f) << 0x13) << 1;
}

