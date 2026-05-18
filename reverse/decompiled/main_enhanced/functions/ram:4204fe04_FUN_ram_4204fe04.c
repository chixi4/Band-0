
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204fe04(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_ram_4205c96c();
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = param_1[1];
  }
  piVar1 = (int *)param_1[1];
  if (_DAT_ram_3fcc52ac == param_1) {
    if (piVar1 == (int *)0x0) {
LAB_ram_4204fe34:
      _DAT_ram_3fcc52ac = piVar2;
      _DAT_ram_3fcc52b0 = _DAT_ram_3fcc52b0 + 1;
      FUN_ram_4205c996();
      return;
    }
  }
  else if (piVar1 != (int *)0x0) {
    *piVar1 = (int)piVar2;
    piVar2 = _DAT_ram_3fcc52ac;
    goto LAB_ram_4204fe34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

