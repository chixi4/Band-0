
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201245c(int param_1)

{
  int iVar1;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      FUN_ram_40394308(1,100);
      iVar1 = FUN_ram_4039447e();
      _DAT_ram_3fcb65bc = iVar1;
    }
    else {
      iVar1 = 0;
      if ((param_1 == 0) && (iVar1 = _DAT_ram_3fcb65bc, _DAT_ram_3fcb65bc == 0)) {
        FUN_ram_40394308(1,100);
        iVar1 = FUN_ram_4039447e();
        _DAT_ram_3fcb65bc = iVar1;
      }
    }
    return iVar1;
  }
  return 0x10b07;
}

