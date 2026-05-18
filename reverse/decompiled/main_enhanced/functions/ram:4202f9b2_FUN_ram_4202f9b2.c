
void FUN_ram_4202f9b2(undefined2 *param_1)

{
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [264];
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0x11;
  FUN_ram_4039c11e(auStack_110,param_1,6);
  FUN_ram_4202e186(auStack_114,*param_1);
  return;
}

