
undefined4 FUN_ram_42063c2c(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    FUN_ram_42063b28();
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_ram_420a3448();
    }
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      FUN_ram_42064abc(**(undefined4 **)(param_1 + 0x20));
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
      if (puVar1 != (undefined4 *)0x0) {
        thunk_FUN_ram_40390634(*puVar1);
      }
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4));
      thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x20));
    }
    if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
      FUN_ram_42064abc(**(undefined4 **)(param_1 + 0x24));
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
      if (puVar1 != (undefined4 *)0x0) {
        thunk_FUN_ram_40390634(*puVar1);
        FUN_ram_42063324(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
      }
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
      thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0xd8) != 0) {
      thunk_FUN_ram_40390634();
    }
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x10));
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x14));
    FUN_ram_42063566(param_1);
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      thunk_FUN_ram_40390634(**(undefined4 **)(param_1 + 0x2c));
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc));
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4));
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14));
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10));
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18));
      thunk_FUN_ram_40390634(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 8));
      (*(code *)&SUB_ram_40010488)(*(undefined4 *)(param_1 + 0x2c),0,0x30);
    }
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x2c));
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x3c));
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x40));
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x34));
    thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x38));
    thunk_FUN_ram_40390634(param_1);
    return 0;
  }
  return 0xffffffff;
}

