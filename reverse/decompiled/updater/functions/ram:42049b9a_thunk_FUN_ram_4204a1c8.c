
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4204a1c8(undefined4 param_1,uint param_2)

{
  if (param_2 < 2) {
    *(undefined4 *)(_DAT_ram_3fcdfdec + (param_2 + 0xe8) * 4) = param_1;
    return 0;
  }
  return 1;
}

