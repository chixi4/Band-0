
void FUN_ram_4202f8e6(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 auStack_124 [4];
  int iStack_120;
  undefined2 uStack_11c;
  
  (*(code *)&SUB_ram_40010488)(auStack_124,0,0x104);
  auStack_124[0] = 10;
  uStack_11c = (undefined2)param_1;
  iStack_120 = param_2;
  FUN_ram_4202e1e0(auStack_124);
  FUN_ram_4202e186(auStack_124,param_1);
  if (param_2 == 0) {
    if (param_3 == 0) {
      if (param_4 != 0) {
        FUN_ram_42032680(param_1);
      }
    }
    else {
      FUN_ram_42032748(param_1);
    }
  }
  return;
}

