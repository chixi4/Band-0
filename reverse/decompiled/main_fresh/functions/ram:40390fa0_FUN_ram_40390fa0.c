
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390fa0(int param_1,int param_2)

{
  uint *puVar1;
  uint *extraout_a5;
  
  (*(code *)&SUB_ram_40010774)();
  puVar1 = (uint *)&DAT_ram_600c0058;
  _DAT_ram_600c0058 = _DAT_ram_600c0058 & 0xfffffc00;
  if (param_2 == 0) {
    FUN_ram_4039bf1e();
    puVar1 = extraout_a5;
  }
  *puVar1 = param_2 - 1U & 0x3ff | *puVar1 & 0xfffffc00;
  *puVar1 = *puVar1 & 0xfffff3ff;
  FUN_ram_40390f8a(param_1 * 1000000);
  return;
}

