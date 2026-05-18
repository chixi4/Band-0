
undefined4 FUN_ram_42098732(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_ram_4209ae10(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x18));
    return 1;
  }
  return 0;
}

