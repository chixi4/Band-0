
void FUN_ram_42051a34(int param_1)

{
  byte bVar1;
  undefined1 auStack_1c [20];
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
    auStack_1c[0] = 0;
    FUN_ram_420517cc(param_1,8,auStack_1c);
    bVar1 = *(byte *)(param_1 + 0x39);
    *(byte *)(param_1 + 0x39) = bVar1 & 0xfe;
    if ((bVar1 & 8) != 0) {
      FUN_ram_42057b68(param_1);
      return;
    }
  }
  return;
}

