
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403951aa(int *param_1)

{
  if (*param_1 == 0) {
    FUN_ram_40390fa0(param_1[3],param_1[2]);
    return;
  }
  if (*param_1 == 1) {
    if (param_1[1] == _DAT_ram_3fcc4e34) {
      FUN_ram_40394f66(param_1[3]);
      return;
    }
  }
  FUN_ram_40394fd0();
  return;
}

