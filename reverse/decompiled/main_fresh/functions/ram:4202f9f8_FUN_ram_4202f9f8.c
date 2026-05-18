
void FUN_ram_4202f9f8(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_114 [4];
  undefined4 uStack_110;
  undefined2 uStack_10c;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  uStack_10c = (undefined2)param_1;
  auStack_114[0] = 0x1b;
  uStack_110 = param_2;
  FUN_ram_4202e186(auStack_114,param_1);
  return;
}

