
void FUN_ram_4204e7de(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 4) != 0x12121212) {
    (*(code *)&SUB_ram_40010488)(param_1,0,0x14);
    *(undefined4 *)(param_1 + 4) = 0x12121212;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uStack_2c = 0;
    uStack_24 = 0;
    uStack_28 = 0x3c072f7c;
    uStack_34 = param_2;
    uStack_30 = param_3;
    FUN_ram_4201bd50(&uStack_34,param_1 + 0x10);
  }
  return;
}

