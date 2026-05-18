
void FUN_ram_4202ef8a(undefined4 param_1,int param_2)

{
  undefined1 auStack_114 [4];
  int iStack_110;
  undefined2 uStack_10c;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 3;
  uStack_10c = (undefined2)param_1;
  iStack_110 = param_2;
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,param_1);
  if (param_2 == 0xd) {
    FUN_ram_4202ef4e(param_1,0x13);
  }
  return;
}

