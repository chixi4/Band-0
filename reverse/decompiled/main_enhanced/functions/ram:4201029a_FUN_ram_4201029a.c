
undefined4 FUN_ram_4201029a(uint param_1,uint param_2)

{
  uint extraout_a1;
  int iVar1;
  int extraout_a4;
  
  if (3 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar1 = *(int *)(param_1 * 8 + 0x3c0a8150);
  if ((uint)(*(int *)(param_1 * 8 + 0x3c0a8154) - iVar1) >> 2 < param_2) {
    FUN_ram_42010142();
    param_2 = extraout_a1;
    iVar1 = extraout_a4;
  }
  return *(undefined4 *)(param_2 * 4 + iVar1);
}

