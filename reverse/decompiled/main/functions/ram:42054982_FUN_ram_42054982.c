
void FUN_ram_42054982(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 extraout_a2;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar1 = FUN_ram_4039bf1e();
      param_3 = extraout_a2;
    }
    *(int *)((int)uVar1 + 0x90) = (int)((ulonglong)uVar1 >> 0x20);
    *(undefined1 *)((int)uVar1 + 0x21) = param_3;
  }
  return;
}

