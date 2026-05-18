
void FUN_ram_42065b92(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  (*(code *)&SUB_ram_40010488)(auStack_34,0,0x24);
  uStack_38 = 5;
  uStack_2c = 0xffffffff;
  uStack_30 = param_2;
  FUN_ram_42065a2a(param_1,0x42055c90,&uStack_38);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uStack_2c;
  }
  return;
}

