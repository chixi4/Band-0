
void FUN_ram_4205b3c8(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    for (piVar1 = (int *)**(int **)(param_1 + 0x28); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1)
    {
      FUN_ram_4205b23c(piVar1,5);
    }
    return;
  }
  return;
}

