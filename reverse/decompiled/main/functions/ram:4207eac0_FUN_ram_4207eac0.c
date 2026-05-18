
undefined4 FUN_ram_4207eac0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(gp + -0xb4);
  if (((0xd < (byte)(*(char *)(iVar1 + 0x407) - 1U)) ||
      (0xd < (byte)(*(char *)(iVar1 + 0x408) - 1U))) || (1 < *(uint *)(iVar1 + 0x40c))) {
    *(undefined4 *)(iVar1 + 0x404) = 0x1203130;
    *(undefined2 *)(iVar1 + 0x408) = 0x140b;
    *(undefined4 *)(iVar1 + 0x40c) = 0;
  }
  return 0;
}

