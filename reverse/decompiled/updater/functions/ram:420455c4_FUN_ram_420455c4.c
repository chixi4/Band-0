
undefined4 FUN_ram_420455c4(int param_1)

{
  uint uVar1;
  
  if (*(byte *)(param_1 + 1) != 0) {
    uVar1 = 0;
    do {
      if (*(char *)(param_1 + uVar1 + 2) != '\0') {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xff) < (uint)*(byte *)(param_1 + 1));
  }
  return 1;
}

