
void FUN_ram_42054958(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar1 = FUN_ram_4039bf1e();
    }
    *(int *)((int)uVar1 + 0x94) = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}

