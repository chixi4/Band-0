
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390ea4(int param_1,int param_2)

{
  (*(code *)&SUB_ram_40010774)();
  _DAT_ram_600c0058 = param_2 - 1U & 0x3ff | _DAT_ram_600c0058 & 0xfffff000;
  FUN_ram_40390e8e(param_1 * 1000000);
  return;
}

