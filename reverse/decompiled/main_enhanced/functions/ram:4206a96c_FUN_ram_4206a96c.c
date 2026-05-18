
void FUN_ram_4206a96c(undefined4 param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int in_t1;
  uint uVar1;
  
  if (*(int *)(param_5 + 4) != 0) {
    uVar1 = *(uint *)(*(int *)(param_5 + 4) + 4);
    if (((**(int **)(in_t1 + -0x6bc + (uVar1 >> 0x18 & 0x7c)) != param_4) ||
        (param_2 != (uVar1 >> 2 & 0x3c0))) || ((uVar1 >> 0xc & 0xf) != param_3)) {
      FUN_ram_4206a96c();
      return;
    }
  }
  return;
}

