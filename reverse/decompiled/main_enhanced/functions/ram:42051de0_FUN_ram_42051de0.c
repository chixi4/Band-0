
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42051de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (_DAT_ram_3fcc52b4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  puVar1 = (undefined4 *)FUN_ram_420531dc(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 2;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    iVar2 = FUN_ram_4205c7fc(&DAT_ram_3fcc52b4,puVar1);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_ram_420531f8(8,puVar1);
  }
  return 0xffffffff;
}

