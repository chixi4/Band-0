
void FUN_ram_4209470a(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    *(char *)(param_1 + 10) = (char)uVar1;
    uVar1 = uVar1 + 1 & 0xff;
    param_1 = param_1 + 0xc;
  } while (param_2 != uVar1);
  return;
}

