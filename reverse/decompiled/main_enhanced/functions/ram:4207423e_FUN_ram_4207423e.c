
int FUN_ram_4207423e(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 < 6)) {
    iVar1 = (param_2 + 0x12) * 8;
    iVar2 = *(int *)(iVar1 + 0x3fcc4010);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
      FUN_ram_4039c11e(param_1,*(int *)(iVar2 + 4),*(undefined2 *)(iVar2 + 8));
      param_1 = param_1 + (uint)*(ushort *)(*(int *)(iVar1 + 0x3fcc4010) + 8);
    }
    iVar1 = *(int *)(param_2 * 8 + 0x3fcc40a4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      FUN_ram_4039c11e(param_1,*(int *)(iVar1 + 4),*(undefined2 *)(iVar1 + 8));
      param_1 = param_1 + (uint)*(ushort *)(*(int *)(param_2 * 8 + 0x3fcc40a4) + 8);
    }
  }
  return param_1;
}

