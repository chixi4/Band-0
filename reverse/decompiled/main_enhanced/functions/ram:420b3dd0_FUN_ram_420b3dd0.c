
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b3dd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  FUN_ram_40396966();
  iVar1 = iVar1 * 4;
  iVar2 = *(int *)(&DAT_ram_3fcb7e60 + iVar1);
  *(int *)(&DAT_ram_3fcb7e60 + iVar1) = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    FUN_ram_40396994();
    return;
  }
  if (*(int *)(&DAT_ram_3fcb7e5c + iVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  *(undefined4 *)(&DAT_ram_3fcb7e5c + iVar1) = 0;
  FUN_ram_40396994();
  FUN_ram_420b5fbe(param_1 + 2);
  FUN_ram_40394a58();
  _DAT_ram_600c0014 = _DAT_ram_600c0014 & 0xffffffbf;
  FUN_ram_40394a68();
  thunk_FUN_ram_40390634(param_1);
  return;
}

