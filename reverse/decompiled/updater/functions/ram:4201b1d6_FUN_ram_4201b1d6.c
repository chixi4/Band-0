
void FUN_ram_4201b1d6(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x20000;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xfffdffff;
  return;
}

