
void FUN_ram_4201b1be(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(*param_1 + 0x20) >> 1 & 1) != 0) {
    uVar1 = *(uint *)(*param_1 + 0x20) & 1 | 2;
  }
  *param_2 = uVar1;
  return;
}

