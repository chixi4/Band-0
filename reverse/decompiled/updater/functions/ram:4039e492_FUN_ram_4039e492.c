
void FUN_ram_4039e492(int *param_1,undefined4 param_2)

{
  undefined1 auStack_2c [3];
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined2 uStack_18;
  
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_29 = 0x18;
  uStack_18 = 0xd8;
  uStack_28 = param_2;
  (**(code **)(*param_1 + 4))(param_1,auStack_2c);
  return;
}

