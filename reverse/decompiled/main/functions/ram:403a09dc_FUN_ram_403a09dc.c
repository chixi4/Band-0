
void FUN_ram_403a09dc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int extraout_a2;
  int extraout_a3;
  undefined8 uVar1;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_39;
  int iStack_38;
  undefined4 uStack_34;
  undefined2 uStack_28;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (0x1000000 < (uint)(param_3 + param_4)) {
    uVar1 = FUN_ram_403a0938();
    param_3 = extraout_a2;
    param_4 = extraout_a3;
  }
  (*(code *)&SUB_ram_40010488)(&uStack_3c,0,0x1c);
  uStack_39 = 0x18;
  uStack_28 = 2;
  uStack_3b = (undefined1)param_4;
  iStack_38 = param_3;
  uStack_34 = (int)((ulonglong)uVar1 >> 0x20);
  (**(code **)(*(int *)uVar1 + 4))((int *)uVar1,&uStack_3c);
  return;
}

