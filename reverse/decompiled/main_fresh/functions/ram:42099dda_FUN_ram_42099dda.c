
undefined4 FUN_ram_42099dda(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_42098a6c();
  if (iVar2 == 0) {
LAB_ram_42099dee:
    uVar3 = 1;
  }
  else {
    for (piVar1 = *(int **)(iVar2 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if ((piVar1[6] != 0) && (iVar2 = (*param_2)(piVar1[6],param_3), iVar2 != 0))
      goto LAB_ram_42099dee;
    }
    uVar3 = 0;
  }
  return uVar3;
}

