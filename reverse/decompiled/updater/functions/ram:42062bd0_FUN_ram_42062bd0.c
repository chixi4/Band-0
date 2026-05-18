
void FUN_ram_42062bd0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar1 = (int *)0x0;
  while (piVar3 = piVar1, piVar1 = piVar4, piVar1 != (int *)0x0) {
    piVar4 = (int *)*piVar1;
    if (((piVar1[0x1e] == param_2) || (param_2 == 0)) &&
       ((param_3 == 0 ||
        ((piVar1[0x15] == param_4 &&
         (iVar2 = FUN_ram_40399d6c(param_3,piVar1 + 5,param_4), iVar2 == 0)))))) {
      if (piVar3 == (int *)0x0) {
        *param_1 = (int)piVar4;
      }
      else {
        *piVar3 = (int)piVar4;
      }
      piVar4 = (int *)*piVar1;
      FUN_ram_42062b1a(param_1,piVar1,0);
      piVar1 = piVar3;
    }
  }
  return;
}

