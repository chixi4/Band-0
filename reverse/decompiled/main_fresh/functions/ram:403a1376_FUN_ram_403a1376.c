
void FUN_ram_403a1376(int *param_1,undefined2 param_2,uint param_3,undefined4 param_4)

{
  undefined4 auStack_34 [2];
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined4 *puStack_24;
  undefined2 uStack_18;
  
  auStack_34[0] = param_4;
  (*(code *)&SUB_ram_40010488)(&uStack_2c,0,0x1c);
  puStack_24 = auStack_34;
  uStack_2b = (undefined1)(param_3 >> 3);
  uStack_18 = param_2;
  (**(code **)(*param_1 + 4))(param_1,&uStack_2c);
  return;
}

