
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42013d62(uint param_1)

{
  if ((-1 < (int)param_1) && (param_1 < _DAT_ram_3fcc4f30)) {
    return *(undefined4 *)(&DAT_ram_3fcb9580 + param_1 * 4);
  }
  return 0;
}

