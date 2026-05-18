
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201db22(int param_1)

{
  int iVar1;
  undefined1 auStack_14 [8];
  
  FUN_ram_4201f4fc(auStack_14);
  iVar1 = _DAT_ram_3fcb3690;
  do {
    if (iVar1 == 0) {
LAB_ram_4201db60:
      FUN_ram_4201f50c(auStack_14);
      return;
    }
    if (param_1 == *(int *)(iVar1 + 0xc)) {
      FUN_ram_4201da28(&DAT_ram_3fcb3690,iVar1);
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 8) + 4))();
      }
      thunk_FUN_ram_40390608(iVar1);
      goto LAB_ram_4201db60;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

