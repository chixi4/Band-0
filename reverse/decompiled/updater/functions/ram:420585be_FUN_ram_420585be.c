
void FUN_ram_420585be(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    for (piVar1 = (int *)**(int **)(param_1 + 0x28); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1)
    {
      FUN_ram_42058444(piVar1,5);
    }
    return;
  }
  return;
}

