
uint FUN_ram_40397976(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (0xffffff < param_2) {
    param_1 = (uint *)FUN_ram_40397854();
  }
  FUN_ram_40396966();
  uVar1 = *param_1;
  *param_1 = ~param_2 & uVar1;
  FUN_ram_40396994();
  return uVar1;
}

