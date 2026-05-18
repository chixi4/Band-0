
int FUN_ram_4209bdd6(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 == (byte *)0x0) {
    piVar1 = *(int **)(param_1 + 0x200);
    while (((piVar1 != (int *)0x0 && (param_2 != 0)) &&
           (iVar2 = FUN_ram_4039c0e0(piVar1 + 0x1b,param_2,6), iVar2 != 0))) {
      piVar1 = (int *)*piVar1;
    }
  }
  else {
    piVar1 = *(int **)(param_1 + (*param_3 & 0x7f) * 4);
    while ((piVar1 != (int *)0x0 &&
           (((param_2 != 0 && (iVar2 = FUN_ram_4039c0e0((int)piVar1 + 0x6c,param_2,6), iVar2 != 0))
            || (iVar2 = FUN_ram_4039c0e0((int)piVar1 + 8,param_3,0x10), iVar2 != 0))))) {
      piVar1 = *(int **)((int)piVar1 + 4);
    }
  }
  return (int)piVar1;
}

