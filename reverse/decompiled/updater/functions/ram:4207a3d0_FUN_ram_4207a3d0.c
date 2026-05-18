
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207a3d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  FUN_ram_40394d60();
  iVar1 = iVar1 * 4;
  iVar2 = *(int *)(&DAT_ram_3fcb0a04 + iVar1);
  *(int *)(&DAT_ram_3fcb0a04 + iVar1) = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    FUN_ram_40394d8e();
    return;
  }
  *(undefined4 *)(&DAT_ram_3fcb0a00 + iVar1) = 0;
  FUN_ram_40394d8e();
  FUN_ram_4207b940(param_1 + 2);
  FUN_ram_4039398a();
  _DAT_ram_600c0014 = _DAT_ram_600c0014 & 0xffffffbf;
  FUN_ram_4039399a();
  thunk_FUN_ram_40390608(param_1);
  return;
}

