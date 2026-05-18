
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394f66(int param_1)

{
  if (param_1 == 0x50) {
    _DAT_ram_600c0008 = _DAT_ram_600c0008 & 0xfffffffc;
  }
  else {
    if (param_1 != 0x78) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    _DAT_ram_600c0008 = _DAT_ram_600c0008 & 0xfffffffc | 1;
  }
  _DAT_ram_600c0058 = _DAT_ram_600c0058 & 0xfffff000 | 0x400;
  FUN_ram_40390f8a(40000000);
  (*(code *)&SUB_ram_40010774)(param_1);
  return;
}

