
int FUN_ram_42012cc2(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_403989cc(0,0);
  if (piVar1 != (int *)0x0) {
    for (piVar1 = (int *)*piVar1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (param_1 == *piVar1) {
        return piVar1[1];
      }
    }
  }
  return 0;
}

