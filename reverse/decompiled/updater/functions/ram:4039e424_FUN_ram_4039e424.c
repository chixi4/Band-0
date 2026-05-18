
void FUN_ram_4039e424(int *param_1)

{
  undefined1 auStack_2c [20];
  undefined2 uStack_18;
  
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_18 = 199;
  (**(code **)(*param_1 + 4))(param_1,auStack_2c);
  return;
}

