
void FUN_ram_4205386a(int param_1)

{
  undefined1 auStack_1c [20];
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x39) & 4) == 0) {
      *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 4;
      FUN_ram_42059fb2();
      FUN_ram_4205323e(param_1,3);
      auStack_1c[0] = 1;
      FUN_ram_4205350c(param_1,4,auStack_1c);
    }
    return;
  }
  return;
}

