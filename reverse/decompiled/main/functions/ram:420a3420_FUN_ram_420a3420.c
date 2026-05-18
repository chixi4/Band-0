
void FUN_ram_420a3420(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x3c);
    FUN_ram_420a33f0();
  }
  *param_1 = 0;
  param_1[1] = (int)param_1;
  return;
}

