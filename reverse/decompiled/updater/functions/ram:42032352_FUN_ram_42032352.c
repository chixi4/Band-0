
int FUN_ram_42032352(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 < 6)) {
    iVar1 = (param_2 + 0x12) * 8;
    iVar2 = *(int *)(iVar1 + 0x3fcb4f80);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
      FUN_ram_40399daa(param_1,*(int *)(iVar2 + 4),*(undefined2 *)(iVar2 + 8));
      param_1 = param_1 + (uint)*(ushort *)(*(int *)(iVar1 + 0x3fcb4f80) + 8);
    }
    iVar1 = *(int *)(param_2 * 8 + 0x3fcb5014);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      FUN_ram_40399daa(param_1,*(int *)(iVar1 + 4),*(undefined2 *)(iVar1 + 8));
      param_1 = param_1 + (uint)*(ushort *)(*(int *)(param_2 * 8 + 0x3fcb5014) + 8);
    }
  }
  return param_1;
}

