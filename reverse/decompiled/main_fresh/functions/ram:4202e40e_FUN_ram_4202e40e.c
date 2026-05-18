
void FUN_ram_4202e40e(undefined4 param_1,int param_2)

{
  undefined1 auStack_114 [4];
  int iStack_110;
  undefined2 uStack_10c;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  iStack_110 = param_2;
  uStack_10c = (short)param_1;
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,param_1);
  auStack_114[0] = 0x26;
  iStack_110 = param_2;
  uStack_10c = (short)param_1;
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,param_1);
  if (param_2 == 0) {
    FUN_ram_4203382e(param_1,0xfb,0x848);
  }
  return;
}

