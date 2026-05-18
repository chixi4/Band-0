
void FUN_ram_420a250c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) & 0x7f000000;
  if ((uVar1 != 0) && (uVar1 != 0x1f000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  *(uint *)(param_1 + 0x14) =
       ((-(uint)(param_2 == 0) & 0xffffffe1) + 0x1f & 0x7f) << 0x18 |
       *(uint *)(param_1 + 0x14) & 0x80ffffff;
  return;
}

