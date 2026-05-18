
void FUN_ram_4205b3ec(int param_1,int *param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x28); (piVar1 != (int *)0x0 && (piVar1[1] != *param_2));
      piVar1 = (int *)*piVar1) {
  }
  return;
}

