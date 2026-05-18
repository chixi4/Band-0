
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4205ca0a(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 3) {
    if (_DAT_ram_3fcc535c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    _DAT_ram_3fcc535c = FUN_ram_403989ea();
    bVar1 = true;
  }
  else if (param_1 == 4) {
    bVar1 = _DAT_ram_3fcc535c != 0;
  }
  else if (param_1 == 0) {
    bVar1 = true;
    if (_DAT_ram_3fcc535c != 0) {
      iVar2 = FUN_ram_403989ea(1);
      bVar1 = _DAT_ram_3fcc535c == iVar2;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

