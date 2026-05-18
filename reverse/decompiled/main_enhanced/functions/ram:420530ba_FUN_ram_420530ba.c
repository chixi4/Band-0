
uint FUN_ram_420530ba(void)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_ram_403904a6();
  if (uVar1 == 0) {
    FUN_ram_4205c96c();
    FUN_ram_4205c996();
  }
  else if (uVar1 != (uVar1 + 3 & 0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  return uVar1;
}

