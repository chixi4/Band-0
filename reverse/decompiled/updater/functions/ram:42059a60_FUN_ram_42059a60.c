
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42059a60(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 3) {
    _DAT_ram_3fcb682c = FUN_ram_403968bc();
    bVar1 = true;
  }
  else if (param_1 == 4) {
    bVar1 = _DAT_ram_3fcb682c != 0;
  }
  else if (param_1 == 0) {
    bVar1 = true;
    if (_DAT_ram_3fcb682c != 0) {
      iVar2 = FUN_ram_403968bc(1);
      bVar1 = _DAT_ram_3fcb682c == iVar2;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

