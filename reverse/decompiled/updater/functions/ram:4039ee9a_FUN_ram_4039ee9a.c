
void FUN_ram_4039ee9a(int *param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined4 local_30;
  undefined1 auStack_2c [2];
  undefined1 uStack_2a;
  undefined1 *puStack_20;
  undefined2 uStack_18;
  
  local_30 = 0;
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_2a = 1;
  puStack_20 = (undefined1 *)&local_30;
  uStack_18 = param_2;
  (**(code **)(*param_1 + 4))(param_1,auStack_2c);
  *param_3 = local_30;
  return;
}

