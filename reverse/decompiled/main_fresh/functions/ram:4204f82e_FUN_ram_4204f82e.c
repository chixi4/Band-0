
void FUN_ram_4204f82e(undefined4 param_1)

{
  int iVar1;
  
  FUN_ram_403917e0(&DAT_ram_3fcc5280);
  iVar1 = FUN_ram_4204fada();
  if (iVar1 == 0) {
    FUN_ram_40390be2();
    FUN_ram_40390cbc();
    iVar1 = FUN_ram_40390da2(0xe0788f8f);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    if (DAT_ram_3fcc527c == '\0') {
      FUN_ram_4204f776();
      DAT_ram_3fcc527c = '\x01';
    }
    else {
      thunk_FUN_ram_40394140();
    }
    FUN_ram_4204fa24();
    iVar1 = FUN_ram_40393114();
    if (iVar1 != 0) {
      FUN_ram_4204faee();
      FUN_ram_4204fae4();
    }
    FUN_ram_40390d3e();
  }
  FUN_ram_4204faae(param_1);
  FUN_ram_4204f986();
  FUN_ram_403917f8(&DAT_ram_3fcc5280);
  return;
}

