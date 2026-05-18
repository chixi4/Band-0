
int FUN_ram_4205b9da(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      thunk_FUN_ram_40390608();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      thunk_FUN_ram_40390608();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    FUN_ram_4206b7c6(*(undefined4 *)(param_1 + 0x10),1);
    if (((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x70) != 1)) ||
       (iVar2 = FUN_ram_4205cd34(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c)),
       iVar2 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_ram_4205b9ae(param_1,0x3c07300c,iVar2);
      iVar1 = -(uint)(iVar1 != 0);
      thunk_FUN_ram_40390608(iVar2);
    }
  }
  return iVar1;
}

