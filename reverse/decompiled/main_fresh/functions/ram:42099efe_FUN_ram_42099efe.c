
void FUN_ram_42099efe(int *param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    piVar1[4] = 1;
    do {
      piVar1[0x32] = 0;
      FUN_ram_42099e5e(param_1,piVar1);
    } while (piVar1[0x32] != 0);
  }
  if (param_1[9] != 0) {
    FUN_ram_4209915a(param_1[9],0,0x42089efe,param_1,0);
    return;
  }
  return;
}

