
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_403911f2(uint param_1,int param_2)

{
  if (_DAT_ram_3fcb8c2c != 0) {
    param_1 = param_1 & 0xfffffbff;
  }
  if ((_DAT_ram_3fcb8c40 != 0) && (param_2 == 0)) {
    param_1 = param_1 & 0xfffff7ff;
  }
  if ((_DAT_ram_3fcb8c30 != 0) && (param_2 == 0)) {
    param_1 = param_1 & 0xfffffbff | 0x10000;
  }
  if (_DAT_ram_3fcb8c34 != 0) {
    param_1 = param_1 | 0x20000;
  }
  if (_DAT_ram_3fcb8c38 == 0) {
    param_1 = param_1 | 0x40000;
  }
  if (_DAT_ram_3fcb8c3c != 0) {
    param_1 = param_1 | 0x80000;
  }
  return param_1;
}

