
void FUN_ram_420531f8(uint param_1,int param_2)

{
  if ((param_1 < 0xf) && (param_2 != 0)) {
    FUN_ram_42053190(*(undefined4 *)(&DAT_ram_3c0f74d0 + param_1 * 4));
    return;
  }
  return;
}

