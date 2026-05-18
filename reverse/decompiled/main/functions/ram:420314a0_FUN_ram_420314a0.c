
uint FUN_ram_420314a0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar1 = 0;
    if ((*(char *)(param_1 + 0x19) == '\x01') == param_3) {
      uVar1 = param_2 | *(char *)(param_1 + 0x12) != '\x01';
    }
  }
  else {
    uVar1 = 0;
    if ((*(char *)(param_1 + 0x12) == '\x01') == param_3) {
      return param_2 | *(char *)(param_1 + 0x19) != '\x01';
    }
  }
  return uVar1;
}

