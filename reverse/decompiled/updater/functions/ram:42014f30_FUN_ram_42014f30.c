
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42014f30(uint param_1)

{
  if ((-1 < (int)param_1) && (param_1 < _DAT_ram_3fcb668c)) {
    return *(undefined4 *)(&DAT_ram_3fcb2080 + param_1 * 4);
  }
  return 0;
}

