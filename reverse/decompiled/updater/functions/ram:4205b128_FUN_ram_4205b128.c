
void FUN_ram_4205b128(int *param_1)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0xf5;
  if (((uint *)*param_1)[2] != 0) {
    if ((*(uint *)*param_1 & 0xf0) == 0x20) {
      if (param_1[5] == 0) {
        uVar1 = FUN_ram_420587f0();
      }
      else {
        uVar1 = FUN_ram_420588f4(param_1[3],param_1[2]);
      }
      *(undefined1 *)(param_1 + 1) = uVar1;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0xfa;
    }
  }
  thunk_FUN_ram_4205973a(param_1[9]);
  return;
}

