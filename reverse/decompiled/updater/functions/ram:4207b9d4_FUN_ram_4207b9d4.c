
void FUN_ram_4207b9d4(int *param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1 + (param_4 + 0x54) * 4;
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xffffffbf;
  puVar1 = (uint *)((param_2 + 0x18002401) * 4);
  *puVar1 = *puVar1 | 0x200;
  puVar1 = (uint *)(((param_2 & 0xff) + 0x18002401) * 4);
  *puVar1 = (param_3 & 7) << 0xc | *puVar1 & 0xffff8fff;
  return;
}

