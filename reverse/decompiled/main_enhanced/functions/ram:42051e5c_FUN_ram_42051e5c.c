
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42051e5c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (_DAT_ram_3fcc52b4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  puVar1 = (undefined4 *)FUN_ram_420531dc(7);
  uVar2 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 3;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    FUN_ram_4205c7d0(&DAT_ram_3fcc52b4);
    uVar2 = 0;
  }
  return uVar2;
}

