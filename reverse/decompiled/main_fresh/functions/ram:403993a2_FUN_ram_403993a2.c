
void FUN_ram_403993a2(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *param_1 + param_2 * 0x14 + param_1[1] * 0x78;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffc000 | param_3 & 0x3fff;
  return;
}

