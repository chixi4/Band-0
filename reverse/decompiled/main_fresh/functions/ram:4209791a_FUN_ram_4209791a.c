
void FUN_ram_4209791a(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == param_2) {
      *param_1 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = 0;
      return;
    }
    do {
      if (*(int *)(iVar1 + 4) == param_2) {
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_2 + 4) = 0;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
  }
  return;
}

