
bool FUN_ram_42076152(int param_1)

{
  if (3 < *(byte *)(param_1 + 1)) {
    return *(int3 *)(param_1 + 2) != 0x34fe18;
  }
  return false;
}

