
undefined4 * FUN_ram_4039686c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_4039c11e(param_1,&DAT_ram_3c0fbb00,0);
  (*(code *)&SUB_ram_40010488)(param_1,0,0);
  (*(code *)&SUB_ram_40010488)(param_1 - 0x9c,0,0x90);
  *(uint *)(param_1 - 0x90) = param_1;
  *(undefined4 *)(param_1 - 0xa0) = param_2;
  *(undefined4 *)(param_1 - 0x78) = param_3;
  *(undefined4 *)(param_1 - 0x94) = gp;
  return (undefined4 *)(param_1 - 0xa0);
}

