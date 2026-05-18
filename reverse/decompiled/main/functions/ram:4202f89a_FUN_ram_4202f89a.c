
void FUN_ram_4202f89a(undefined4 param_1,undefined4 *param_2)

{
  undefined1 auStack_114 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined2 uStack_108;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0xb;
  uStack_110 = *param_2;
  uStack_10c = param_2[1];
  uStack_108 = (undefined2)param_1;
  FUN_ram_4202e186(auStack_114,param_1);
  return;
}

