
bool FUN_ram_40391d8c(int param_1)

{
  bool bVar1;
  
  (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
  bVar1 = *(char *)(param_1 + 9) == '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return bVar1;
}

