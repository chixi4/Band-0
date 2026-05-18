
bool FUN_ram_42073b8e(int param_1)

{
  if (((*(uint *)(param_1 + 0xc) & 1) != 0) &&
     (*(int *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x134) + 0x4c) * 4) != 0)) {
    return **(int **)(*(int *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x134) + 0x4c) * 4) + 0xa0)
           == 4;
  }
  return false;
}

