
void FUN_ram_42024216(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while( true ) {
    if (*(byte *)(param_1 + 0x58) <= uVar1) break;
    iVar2 = uVar1 * 0x18;
    uVar1 = uVar1 + 1 & 0xff;
    thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x54) + iVar2 + 0xc));
    thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x54) + iVar2));
  }
  thunk_FUN_ram_40390634();
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x14));
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_420b36b4();
    return;
  }
  return;
}

