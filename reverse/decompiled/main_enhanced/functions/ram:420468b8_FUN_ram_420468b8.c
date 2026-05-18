
uint FUN_ram_420468b8(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (((uVar1 - 0x15 < 0x9d) && (param_2 < (int)uVar1)) && (param_3 < uVar1)) {
    uVar1 = param_2 + uVar1 * param_3;
    return (int)(uint)param_1[((int)uVar1 >> 3) + 1] >> (uVar1 & 7) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

