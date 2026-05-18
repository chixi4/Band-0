
void FUN_ram_42027d10(undefined4 param_1,int param_2,uint param_3,uint param_4,uint param_5,
                     undefined4 param_6)

{
  for (; param_4 <= param_5; param_4 = param_4 + 1) {
    FUN_ram_42027cd6(~((int)(-((param_4 ^ param_3) >> 1) | -(param_4 ^ param_3)) >> 0x1f),param_1,
                     param_2 + param_4,0,param_6);
  }
  return;
}

