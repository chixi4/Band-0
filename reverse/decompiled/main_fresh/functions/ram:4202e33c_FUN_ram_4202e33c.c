
void FUN_ram_4202e33c(undefined4 param_1,undefined1 param_2)

{
  undefined1 auStack_114 [4];
  undefined2 uStack_110;
  undefined1 uStack_10e;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0x1f;
  uStack_110 = (undefined2)param_1;
  uStack_10e = param_2;
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,param_1);
  return;
}

