
undefined4 FUN_ram_4206e0e0(int *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_1[0x2d] != 0) {
      uVar1 = FUN_ram_4206de36();
      return uVar1;
    }
    param_1[0x2b] = 0x15;
    param_1[0x2c] = 2;
    *(undefined1 *)param_1[0x2a] = param_2;
    *(undefined1 *)(param_1[0x2a] + 1) = param_3;
    uVar1 = FUN_ram_4206de94(param_1,1);
    return uVar1;
  }
  return 0xffff8f00;
}

