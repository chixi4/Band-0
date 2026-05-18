
void FUN_ram_420276c2(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0xe) != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 1;
    return;
  }
  FUN_ram_42027020();
  return;
}

