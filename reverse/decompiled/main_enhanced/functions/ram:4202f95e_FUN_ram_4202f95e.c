
void FUN_ram_4202f95e(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_114 [4];
  undefined2 uStack_110;
  undefined1 auStack_10e [258];
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0x10;
  uStack_110 = (undefined2)param_1;
  FUN_ram_4039c11e(auStack_10e,param_2,7);
  FUN_ram_4202e186(auStack_114,param_1);
  return;
}

