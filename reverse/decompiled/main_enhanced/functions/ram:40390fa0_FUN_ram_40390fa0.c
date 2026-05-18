
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390fa0(int param_1,int param_2)

{
  (*(code *)&SUB_ram_40010774)();
  if (param_2 == 0) {
    _DAT_ram_600c0058 = _DAT_ram_600c0058 & 0xfffffc00;
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  _DAT_ram_600c0058 = param_2 - 1U & 0x3ff | _DAT_ram_600c0058 & 0xfffff000;
  FUN_ram_40390f8a(param_1 * 1000000);
  return;
}

