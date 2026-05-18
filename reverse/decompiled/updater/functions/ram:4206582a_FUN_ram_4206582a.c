
void FUN_ram_4206582a(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_40399d1a(1,param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar1[2] = (int)(piVar1 + 4);
  }
  return;
}

