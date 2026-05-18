
void thunk_FUN_ram_4204b7ce(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_ram_42010128(gp + -0x710);
  if ((uVar1 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_420100ba(gp + -0x710,param_1,uVar1);
  return;
}

