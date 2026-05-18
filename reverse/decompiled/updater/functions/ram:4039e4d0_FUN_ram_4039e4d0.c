
void FUN_ram_4039e4d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_28;
  
  (*(code *)&SUB_ram_40010488)(&uStack_3c,0,0x1c);
  uStack_39 = 0x18;
  uStack_28 = 2;
  uStack_3b = param_4;
  uStack_38 = param_3;
  uStack_34 = param_2;
  (**(code **)(*param_1 + 4))(param_1,&uStack_3c);
  return;
}

