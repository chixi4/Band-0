
int FUN_ram_4201f900(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar1 = 4000;
  }
  else {
    iVar1 = 0;
    if ((*(int *)(param_1 + 0xc) != -4) && (*(uint *)(param_1 + 0x38) < 0x7d)) {
      return (0x7d - *(uint *)(param_1 + 0x38)) * 0x20;
    }
  }
  return iVar1;
}

