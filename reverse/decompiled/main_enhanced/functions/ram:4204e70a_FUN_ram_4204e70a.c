
undefined4 FUN_ram_4204e70a(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    return 0x1107;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = FUN_ram_4204df36(*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0x10),0x41,
                             param_2,param_3);
    return uVar1;
  }
  return 0x1104;
}

