
undefined4 FUN_ram_4039e51e(int *param_1,int param_2)

{
  undefined1 auStack_2c [20];
  short sStack_18;
  
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  sStack_18 = (ushort)(param_2 == 0) * 2 + 4;
  (**(code **)(*param_1 + 4))(param_1,auStack_2c);
  return 0;
}

