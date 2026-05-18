
void FUN_ram_403a0992(undefined4 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auStack_2c [3];
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined2 uStack_18;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (0xffffff < param_2) {
    uVar1 = FUN_ram_403a0938();
  }
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_29 = 0x18;
  uStack_18 = 0xd8;
  uStack_28 = (int)((ulonglong)uVar1 >> 0x20);
  (**(code **)(*(int *)uVar1 + 4))((int *)uVar1,auStack_2c);
  return;
}

