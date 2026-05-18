
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40396630(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  *(uint *)(_DAT_ram_3fcb65fc + 0x18) = param_2 | 0x80000000;
  iVar1 = param_1[1];
  *(int *)(_DAT_ram_3fcb65fc + 0x1c) = iVar1;
  *(undefined4 *)(_DAT_ram_3fcb65fc + 0x20) = *(undefined4 *)(iVar1 + 8);
  *(int *)(*(int *)(iVar1 + 8) + 4) = _DAT_ram_3fcb65fc + 0x18;
  *(int *)(iVar1 + 8) = _DAT_ram_3fcb65fc + 0x18;
  *(int **)(_DAT_ram_3fcb65fc + 0x28) = param_1;
  *param_1 = *param_1 + 1;
  FUN_ram_40395db0(param_3,1);
  return;
}

