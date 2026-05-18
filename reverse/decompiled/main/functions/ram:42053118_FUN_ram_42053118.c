
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42053118(ushort *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_a5;
  
  if ((param_1 != (ushort *)&DAT_ram_3c0f753c) || (_DAT_ram_3fcc52cc < 0x10)) {
    uVar1 = FUN_ram_420530ba(*param_1 + 3 & 0xfffffffc);
    uVar2 = FUN_ram_4205c96c();
    if (uVar1 != 0) {
      if (param_1 == (ushort *)&DAT_ram_3c0f753c) {
        _DAT_ram_3fcc52cc = _DAT_ram_3fcc52cc + 1;
      }
      if ((uVar1 & 3) != 0) {
        FUN_ram_4039bf1e();
        uVar2 = extraout_a5;
      }
      FUN_ram_4205c996(uVar2);
      return uVar1;
    }
    FUN_ram_4205c996();
  }
  return 0;
}

