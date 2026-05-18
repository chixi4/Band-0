
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204fe04(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *extraout_a3;
  int *piVar2;
  int iVar3;
  int extraout_a5;
  
  FUN_ram_4205c96c();
  iVar3 = *param_1;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = param_1[1];
  }
  puVar1 = &DAT_ram_3fcc5000;
  piVar2 = (int *)param_1[1];
  if (_DAT_ram_3fcc52ac == param_1) {
    if (piVar2 != (int *)0x0) goto LAB_ram_4204fe28;
  }
  else {
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar3;
      goto LAB_ram_4204fe34;
    }
LAB_ram_4204fe28:
    FUN_ram_4039bf1e();
    puVar1 = extraout_a3;
    iVar3 = extraout_a5;
  }
  *(int *)(puVar1 + 0x2ac) = iVar3;
LAB_ram_4204fe34:
  _DAT_ram_3fcc52b0 = _DAT_ram_3fcc52b0 + 1;
  FUN_ram_4205c996();
  return;
}

