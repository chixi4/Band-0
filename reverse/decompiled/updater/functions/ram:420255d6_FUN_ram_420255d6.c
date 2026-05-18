
void FUN_ram_420255d6(void)

{
  uint in_a3;
  int iStack_1c;
  int *piStack_18;
  ushort uStack_14;
  undefined2 uStack_12;
  
  iStack_1c = ((int)in_a3 >> 0x1f ^ in_a3) - ((int)in_a3 >> 0x1f);
  uStack_14 = (ushort)((int)in_a3 >> 0x1f) | 1;
  uStack_12 = 1;
  piStack_18 = &iStack_1c;
  FUN_ram_420251fc();
  return;
}

