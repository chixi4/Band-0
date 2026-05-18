
void FUN_ram_42023b22(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_3 != 5) {
    return;
  }
  if ((*(short *)(param_4 + 10) != 0) && (*(int *)(param_4 + 0xc) != 0)) {
    *(int *)(param_4 + 0xc) = param_4 + 0x14;
  }
  return;
}

