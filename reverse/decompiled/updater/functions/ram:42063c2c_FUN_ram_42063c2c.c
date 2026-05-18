
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42063c2c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                undefined4 param_10)

{
  if (((param_2 == 2) && (param_4 == 0)) && (param_9 == 0x20)) {
    _DAT_ram_3fcb62d8 = 0;
  }
  param_1[1] = param_2;
  *param_1 = 0;
  FUN_ram_40399daa(param_1 + 2,param_3,6);
  param_1[4] = param_4;
  param_1[5] = param_5;
  FUN_ram_40399daa((int)param_1 + 0x22,param_8,param_9);
  thunk_FUN_ram_420395b4(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return 0;
}

