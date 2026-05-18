
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42039c90(int param_1,uint param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  FUN_ram_42044966(param_1,param_2 & 0xff);
  if (param_3 == 3) {
    FUN_ram_42035a5e();
    return;
  }
  FUN_ram_4203614c(param_1);
  FUN_ram_42039b9c(_DAT_ram_3fcb4f84 != param_1,1,param_2);
  return;
}

