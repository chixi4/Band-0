
bool FUN_ram_42031cd8(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0xc) & 1) != 0) &&
     (iVar1 = *(int *)((*(byte *)(param_1 + 0x134) + 0x4c) * 4 + 0x3fcb4f78), iVar1 != 0)) {
    return **(int **)(iVar1 + 0xa0) == 4;
  }
  return false;
}

