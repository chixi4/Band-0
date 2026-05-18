
undefined4 FUN_ram_403991a8(uint param_1)

{
  undefined4 uVar1;
  
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (param_1 == 1) {
    uVar1 = (*(code *)&LAB_ram_400106e0)();
    return uVar1;
  }
  return 0;
}

