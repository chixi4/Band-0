
bool FUN_ram_420507b2(int param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0xd) < 2)) {
    return *(int *)(&DAT_ram_3fcb57ec + (*(byte *)(param_1 + 0xd) + 1) * 4) != 0;
  }
  return false;
}

