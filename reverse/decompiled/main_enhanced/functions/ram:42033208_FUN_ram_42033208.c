
void FUN_ram_42033208(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)&SUB_ram_40011a10)(param_1 + 8,0x10);
  if (piVar1 == (int *)0x0) {
    FUN_ram_4202d4e6();
    return;
  }
  *piVar1 = *piVar1 + 8;
  return;
}

