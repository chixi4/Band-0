
void FUN_ram_42066924(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 0x1e) <= uVar1) {
      return;
    }
    iVar3 = uVar1 * 4;
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x7c) + iVar3);
    if (puVar2 == (undefined4 *)0x0) break;
    uVar1 = uVar1 + 1;
    thunk_FUN_ram_40390634(*puVar2);
    thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar3));
    *(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar3) = 0;
  }
  return;
}

