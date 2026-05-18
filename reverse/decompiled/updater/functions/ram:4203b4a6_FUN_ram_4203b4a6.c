
undefined4 FUN_ram_4203b4a6(int param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_ram_4204097e();
  }
  else {
    if (*(char *)(param_1 + 8) != '\x01') {
      return 0x102;
    }
    FUN_ram_42044746(*(undefined4 *)(param_1 + 0xc));
  }
  return 0;
}

