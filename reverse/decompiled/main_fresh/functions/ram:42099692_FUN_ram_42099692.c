
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42099692(int param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x210), uVar1 < 0x10)) {
    *(undefined4 *)(uVar1 * 4 + 0x3fcc48b4) = 0;
    _DAT_ram_3fcc53d8 = ~(1 << (uVar1 & 0x1f)) & _DAT_ram_3fcc53d8;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(int *)(*(int *)(param_1 + 4) + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0xc) + -1;
  }
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x1ac));
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x1ec));
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 500));
  thunk_FUN_ram_40390634(param_1);
  return;
}

