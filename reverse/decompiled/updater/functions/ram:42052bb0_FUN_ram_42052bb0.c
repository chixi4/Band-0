
void FUN_ram_42052bb0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == param_2) {
    *param_1 = *(int *)(param_2 + 0xc);
  }
  else {
    do {
      iVar2 = iVar1;
      if (iVar2 == 0) goto LAB_ram_42052bc2;
      iVar1 = *(int *)(iVar2 + 0xc);
    } while (*(int *)(iVar2 + 0xc) != param_2);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
LAB_ram_42052bc2:
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_ram_420527de(param_2);
  if (((*(int *)(param_2 + 0x14) != 10) && (*(int *)(param_2 + 0x14) != 1)) &&
     ((*(ushort *)(param_2 + 0x1e) & 1) != 0)) {
    *(ushort *)(param_2 + 0x1e) = *(ushort *)(param_2 + 0x1e) | 2;
    FUN_ram_420552e2(param_2);
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined2 *)(param_2 + 0x1a) = 0;
  return;
}

