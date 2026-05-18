
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205b3fe(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_ram_4205b3ec();
  if (iVar1 == 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    puVar2 = (undefined4 *)FUN_ram_420531dc(10);
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = 0;
      if (param_2 != (int *)0x0) {
        iVar1 = *param_2;
      }
      puVar2[1] = iVar1;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      if (puVar3 == (undefined4 *)0x0) {
        if (*param_2 == _DAT_ram_3fcc534c) {
          *puVar2 = 0;
          *(undefined4 **)(param_1 + 0x28) = puVar2;
          return;
        }
      }
      else if (*param_2 != _DAT_ram_3fcc534c) {
        *puVar2 = *puVar3;
        *puVar3 = puVar2;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
  }
  return;
}

