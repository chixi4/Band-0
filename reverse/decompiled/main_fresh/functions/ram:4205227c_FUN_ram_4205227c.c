
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205227c(void)

{
  int iVar1;
  uint uVar2;
  
  if (_DAT_ram_3fcc52c4 == 0) {
    iVar1 = thunk_FUN_ram_42058da8(0x2e);
    _DAT_ram_3fcc52c4 = iVar1;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4039bf1e();
    }
    FUN_ram_42058d70(iVar1,0x4204214e,0);
    iVar1 = _DAT_ram_3fcc52c4;
    if (DAT_ram_3fcc52c8 == '\0') {
      _DAT_ram_3fcc52c0 = 15000;
      uVar2 = FUN_ram_403926c4();
      FUN_ram_420585b0(uVar2 % 5000,0x420420e8,0);
      return;
    }
    if (DAT_ram_3fcc52c8 == '\x01') {
      *(byte *)(_DAT_ram_3fcc52c4 + 9) = *(byte *)(_DAT_ram_3fcc52c4 + 9) | 0x20;
      FUN_ram_420589c8(iVar1,&DAT_ram_3c0f7590,0x7b);
      return;
    }
  }
  return;
}

