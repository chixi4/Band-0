
void FUN_ram_420661fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     short param_5)

{
  FUN_ram_40399daa(param_4 + -0xe,param_2,6);
  FUN_ram_40399daa(param_4 + -8,0x3fcb6220,6);
  *(char *)(param_4 + -2) = (char)((uint)param_3 >> 8);
  *(byte *)(param_4 + -1) = (byte)param_3 | (byte)((uint)param_3 >> 0x10);
  FUN_ram_420781e6(0,param_4 + -0xe,param_5 + 0xe);
  return;
}

