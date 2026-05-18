
void FUN_ram_4205e632(int *param_1)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0xf5;
  if (((uint *)*param_1)[2] != 0) {
    if ((*(uint *)*param_1 & 0xf0) == 0x20) {
      if (param_1[5] == 0) {
        uVar1 = FUN_ram_4205b614();
      }
      else {
        uVar1 = FUN_ram_4205b718(param_1[3],param_1[2]);
      }
      *(undefined1 *)(param_1 + 1) = uVar1;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0xfa;
    }
  }
  FUN_ram_4205c6fa(param_1[9]);
  return;
}

