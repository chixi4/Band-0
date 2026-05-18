
void FUN_ram_4209b3c2(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_ram_420992a6(0x42089efe,param_1,0);
  FUN_ram_4209bd96(param_1[0x1d]);
  if (param_1[0x1b] != 0) {
    thunk_FUN_ram_40390634();
  }
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    FUN_ram_42060ace(piVar1,0xfc);
    piVar1 = (int *)iVar2;
  }
  thunk_FUN_ram_40390634(param_1);
  return;
}

