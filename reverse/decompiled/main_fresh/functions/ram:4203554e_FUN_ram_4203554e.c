
void FUN_ram_4203554e(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined1 auStack_50 [68];
  
  FUN_ram_42034f50(auStack_50,param_2,param_3,(int)*param_4);
  (**(code **)(param_4 + 0xac))(param_1,auStack_50);
  return;
}

