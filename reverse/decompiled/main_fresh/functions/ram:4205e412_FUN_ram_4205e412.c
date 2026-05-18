
void FUN_ram_4205e412(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  if ((((uint *)*param_1)[2] != 0) && ((*(uint *)*param_1 & 0xf0) == 0x10)) {
    uVar1 = param_1[2];
    do {
      uVar2 = uVar1;
      if (0xffff < uVar1) {
        uVar2 = 0xffff;
      }
      uVar1 = uVar1 - uVar2;
      FUN_ram_42054838(*(undefined4 *)(*param_1 + 8),uVar2 & 0xffff);
    } while (uVar1 != 0);
  }
  FUN_ram_4205c6fa(param_1[9]);
  return;
}

