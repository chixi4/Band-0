
undefined4 FUN_ram_4205c970(int *param_1)

{
  undefined4 uVar1;
  int aiStack_14 [3];
  
  if (param_1 != (int *)0x0) {
    uVar1 = 0;
    if (param_1[0x20] == 6) {
      uVar1 = 0xffffffff;
      if (*param_1 < param_1[2]) {
        aiStack_14[0] = param_1[0xe];
        if (aiStack_14[0] != 0) {
          FUN_ram_4205d1f4(aiStack_14);
          *param_1 = *param_1 + 1;
        }
        param_1[0x1c] = 0;
        uVar1 = 0x106;
      }
    }
    return uVar1;
  }
  return 0x102;
}

