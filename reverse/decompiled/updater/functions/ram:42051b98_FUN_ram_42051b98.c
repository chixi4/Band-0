
void FUN_ram_42051b98(int param_1)

{
  undefined1 auStack_1c [20];
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
      *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xfb;
      thunk_FUN_ram_42059ac2();
      auStack_1c[0] = 0;
      FUN_ram_420517cc(param_1,4,auStack_1c);
    }
    return;
  }
  return;
}

