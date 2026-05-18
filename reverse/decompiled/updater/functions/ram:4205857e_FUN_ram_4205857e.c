
undefined4 FUN_ram_4205857e(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
      (**(code **)(param_1 + 0x40))(param_1,piVar1 + 1,0);
    }
    FUN_ram_4205151c(10,piVar1);
    piVar1 = (int *)iVar2;
  }
  return 0;
}

