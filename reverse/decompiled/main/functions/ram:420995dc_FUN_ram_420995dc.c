
int FUN_ram_420995dc(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x38);
  bVar1 = param_3 == 0;
  while ((piVar3 = piVar2, piVar2 != (int *)0x0 &&
         ((piVar3 = piVar2 + 2, !bVar1 ||
          ((piVar2[1] == 0 && (iVar4 = FUN_ram_4039c0e0(piVar2 + 10,param_2,6), iVar4 != 0))))))) {
    piVar2 = (int *)*piVar2;
    bVar1 = (bool)(bVar1 | (int *)param_3 == piVar3);
  }
  return (int)piVar3;
}

