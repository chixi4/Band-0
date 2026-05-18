
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42080164(int param_1,uint param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  FUN_ram_42079058(param_1,param_2 & 0xff);
  if (param_3 == 3) {
    FUN_ram_4207bade();
    return;
  }
  FUN_ram_4207c1cc(param_1);
  FUN_ram_42080070(_DAT_ram_3fcc4014 != param_1,1,param_2);
  return;
}

