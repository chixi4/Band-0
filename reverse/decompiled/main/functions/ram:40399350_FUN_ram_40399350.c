
void FUN_ram_40399350(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1 + param_2 * 0x14 + param_1[1] * 0x78;
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x80000000;
  return;
}

