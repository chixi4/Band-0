
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420534d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (_DAT_ram_3fcc52dc != 0) {
    if (_DAT_ram_3fcc52dc == param_1) {
      _DAT_ram_3fcc52dc = *(int *)(param_1 + 4);
    }
    else {
      iVar1 = _DAT_ram_3fcc52dc;
      for (iVar2 = *(int *)(_DAT_ram_3fcc52dc + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        if (iVar2 == param_1) {
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
          break;
        }
        iVar1 = iVar2;
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

