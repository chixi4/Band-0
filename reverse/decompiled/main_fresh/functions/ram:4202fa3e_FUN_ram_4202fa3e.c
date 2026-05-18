
void FUN_ram_4202fa3e(undefined4 param_1,undefined4 param_2,undefined2 param_3,byte param_4)

{
  undefined1 auStack_124 [4];
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  byte bStack_118;
  
  (*(code *)&SUB_ram_40010488)(auStack_124,0,0x104);
  bStack_118 = param_4 & 1;
  auStack_124[0] = 0xd;
  uStack_11c = (undefined2)param_2;
  uStack_120 = param_1;
  uStack_11a = param_3;
  FUN_ram_4202e1e0(auStack_124);
  FUN_ram_4202e186(auStack_124,param_2);
  return;
}

