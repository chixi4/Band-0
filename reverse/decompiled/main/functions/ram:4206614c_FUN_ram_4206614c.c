
undefined4 FUN_ram_4206614c(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(*(int *)(param_1 + 0x310) + 0x1c) = param_2;
    return 0;
  }
  return 0x102;
}

