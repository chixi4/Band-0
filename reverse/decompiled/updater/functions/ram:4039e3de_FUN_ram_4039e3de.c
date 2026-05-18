
void FUN_ram_4039e3de(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined1 auStack_2c [2];
  undefined1 uStack_2a;
  undefined1 *puStack_20;
  undefined2 uStack_18;
  
  local_30 = 0;
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_2a = 1;
  uStack_18 = 5;
  puStack_20 = (undefined1 *)&local_30;
  iVar1 = (**(code **)(*param_1 + 4))(param_1,auStack_2c);
  if (iVar1 == 0) {
    *param_2 = (char)local_30;
  }
  return;
}

