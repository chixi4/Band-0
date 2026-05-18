
void FUN_ram_42045c02(int *param_1)

{
  int iVar1;
  
  while (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (((param_1[3] & 0x100U) == 0) &&
       (((param_1[2] == 0 || (FUN_ram_42045c02(), (param_1[3] & 0x100U) == 0)) && (param_1[4] != 0))
       )) {
      (**(code **)(gp + -0x458))();
      param_1[4] = 0;
    }
    if (((param_1[3] & 0x200U) == 0) && (param_1[8] != 0)) {
      (**(code **)(gp + -0x458))();
      param_1[8] = 0;
    }
    (**(code **)(gp + -0x458))(param_1);
    param_1 = (int *)iVar1;
  }
  return;
}

