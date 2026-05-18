
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403974b0(uint param_1,undefined4 param_2,uint param_3)

{
  _DAT_ram_600cc040 = param_3 >> 5;
  _DAT_ram_600cc048 = param_1;
  FUN_ram_40399daa((param_1 & 0x1f) + 0x600cc000);
  _DAT_ram_600cc04c = 1;
  return;
}

