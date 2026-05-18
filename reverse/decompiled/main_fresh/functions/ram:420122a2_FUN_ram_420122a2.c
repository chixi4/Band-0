
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420122a2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    uVar1 = FUN_ram_4204adfa();
    return uVar1;
  }
  if (param_1 == 2) {
    iVar2 = FUN_ram_403958d4(0,3000);
    if (iVar2 != 0) {
      FUN_ram_40394796();
    }
  }
  else {
    iVar2 = _DAT_ram_6000804c;
    if (param_1 != 0) {
      return 0;
    }
  }
  uVar1 = FUN_ram_40395a7e(iVar2);
  return uVar1;
}

