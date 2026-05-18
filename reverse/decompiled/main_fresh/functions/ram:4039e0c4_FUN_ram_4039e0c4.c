
void FUN_ram_4039e0c4(int param_1)

{
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [12];
  
  FUN_ram_4039dffa(auStack_18,auStack_14);
  *(undefined1 *)(param_1 + 0x1d6) = auStack_18[0];
  *(undefined1 *)(param_1 + 0x1d7) = auStack_14[0];
  return;
}

