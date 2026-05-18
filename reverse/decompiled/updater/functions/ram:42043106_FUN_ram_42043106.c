
void FUN_ram_42043106(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1c) & 0xfffffbff;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x1c) | 0x400;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  return;
}

