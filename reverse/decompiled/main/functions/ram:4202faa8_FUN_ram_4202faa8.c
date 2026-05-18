
void FUN_ram_4202faa8(undefined4 param_1,undefined2 param_2,undefined1 param_3,int param_4,
                     int param_5,int param_6,int param_7)

{
  undefined1 auStack_124 [4];
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined1 uStack_11c;
  byte bStack_11b;
  
  (*(code *)&SUB_ram_40010488)(auStack_124,0,0x104);
  bStack_11b = param_4 != 0 | (param_5 != 0) << 1 | (param_6 != 0) << 2 | (param_7 != 0) << 3;
  auStack_124[0] = 0xe;
  uStack_120 = (undefined2)param_1;
  uStack_11e = param_2;
  uStack_11c = param_3;
  FUN_ram_4202e1e0(auStack_124);
  FUN_ram_4202e186(auStack_124,param_1);
  return;
}

