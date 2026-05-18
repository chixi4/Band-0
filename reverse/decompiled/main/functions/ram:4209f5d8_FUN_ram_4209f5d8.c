
void FUN_ram_4209f5d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     short param_5)

{
  FUN_ram_4039c11e(param_4 + -0xe,param_2,6);
  FUN_ram_4039c11e(param_4 + -8,0x3fcc4b48,6);
  *(char *)(param_4 + -2) = (char)((uint)param_3 >> 8);
  *(byte *)(param_4 + -1) = (byte)param_3 | (byte)((uint)param_3 >> 0x10);
  FUN_ram_420b18e8(0,param_4 + -0xe,param_5 + 0xe);
  return;
}

