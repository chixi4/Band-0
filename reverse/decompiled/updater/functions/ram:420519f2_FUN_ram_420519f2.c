
void FUN_ram_420519f2(int param_1)

{
  undefined1 auStack_1c [20];
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
    *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
    auStack_1c[0] = 1;
    FUN_ram_420517cc(param_1,8,auStack_1c);
    FUN_ram_42051554(param_1,3);
    return;
  }
  return;
}

