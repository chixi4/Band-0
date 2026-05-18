
undefined4 FUN_ram_4206c114(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    FUN_ram_4206c664();
    uVar1 = 0;
    if (-1 < *(int *)(param_1 + 0x768)) {
      uVar1 = FUN_ram_42077b34();
    }
    thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x790));
    thunk_FUN_ram_40390608(param_1);
  }
  return uVar1;
}

