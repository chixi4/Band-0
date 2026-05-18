
void FUN_ram_4206ed4c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 9) == '\n') {
    uVar1 = 0x4205eb5a;
  }
  else {
    uVar1 = 0x4205eb50;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10) = uVar1;
  return;
}

