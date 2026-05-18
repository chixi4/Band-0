
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204c3d0(int param_1)

{
  int iVar1;
  undefined1 auStack_14 [8];
  
  FUN_ram_4204eeda(auStack_14);
  iVar1 = _DAT_ram_3fcc1e98;
  do {
    if (iVar1 == 0) {
LAB_ram_4204c40e:
      FUN_ram_4204eeea(auStack_14);
      return;
    }
    if (param_1 == *(int *)(iVar1 + 0xc)) {
      FUN_ram_4204c2d6(&DAT_ram_3fcc1e98,iVar1);
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 8) + 4))();
      }
      thunk_FUN_ram_40390634(iVar1);
      goto LAB_ram_4204c40e;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

