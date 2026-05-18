
void FUN_ram_4205eec4(int param_1)

{
  int iVar1;
  int aiStack_24 [7];
  
  iVar1 = FUN_ram_4205ea2c();
  if ((iVar1 != 0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x44) = 0;
    if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(*(int *)(param_1 + 0x10) + 4) == -0x2ffb3ff8))
    {
      aiStack_24[1] = 0;
      aiStack_24[2] = 0;
      aiStack_24[3] = 0;
      aiStack_24[4] = 0;
      aiStack_24[0] = param_1;
      FUN_ram_4205eeb4(param_1,4);
      (*(code *)&SUB_ram_40010488)(*(undefined4 *)(param_1 + 0xc),0,0xc);
      if (((*(uint *)(param_1 + 0x54) & 1) != 0) && (*(int *)(param_1 + 0x3c) == 1)) {
        FUN_ram_4205ee36(*(undefined4 *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_ram_420b2e88(0x18ff1f,*(int *)(param_1 + 0x4c),aiStack_24,0x14,0);
      }
    }
  }
  return;
}

