
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202fd5c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcb6ba0;
  for (piVar2 = *(int **)(_DAT_ram_3fcb6ba0 + 0x130); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[2]) {
    if (piVar2 == param_1) {
      return 2;
    }
  }
  if (param_2 == 0) {
    return 3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  iVar3 = *(int *)(iVar1 + 0x130);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = iVar3;
  *(int **)(iVar1 + 0x130) = param_1;
  return 0;
}

