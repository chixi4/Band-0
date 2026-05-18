
void FUN_ram_4202fb50(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined1 auStack_114 [4];
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined2 uStack_10c;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0xf;
  uStack_110 = (undefined2)param_1;
  uStack_10e = param_2;
  uStack_10c = param_3;
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,param_1);
  return;
}

