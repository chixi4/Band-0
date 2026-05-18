
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420124cc(int param_1)

{
  int iVar1;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      FUN_ram_40394308(2,100);
      iVar1 = FUN_ram_4039447e();
      _DAT_ram_3fcb65c0 = iVar1;
    }
    else {
      iVar1 = 0;
      if ((param_1 == 0) && (iVar1 = _DAT_ram_3fcb65c0, _DAT_ram_3fcb65c0 == 0)) {
        FUN_ram_40394308(2,100);
        iVar1 = FUN_ram_4039447e();
        _DAT_ram_3fcb65c0 = iVar1;
      }
    }
    return iVar1;
  }
  return 0x8000;
}

