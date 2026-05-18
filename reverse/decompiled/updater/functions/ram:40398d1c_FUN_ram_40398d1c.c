
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40398d1c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_403968c6();
  if (iVar1 == 1) {
    iVar1 = FUN_ram_40398cf6();
    return iVar1;
  }
  if (_DAT_ram_3fcb66ec == 0) {
    _DAT_ram_3fcb66ec = FUN_ram_40398cf6();
  }
  iVar1 = FUN_ram_40394d2c();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40396242();
  }
  else {
    iVar1 = FUN_ram_4039624c();
  }
  return iVar1 * 10 + _DAT_ram_3fcb66ec;
}

