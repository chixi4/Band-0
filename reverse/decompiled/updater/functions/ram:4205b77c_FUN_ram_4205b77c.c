
void FUN_ram_4205b77c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x60));
  thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x50));
  thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 100));
  thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x58));
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    uVar2 = (*(code *)&SUB_ram_400104a8)(iVar1);
    (*(code *)&SUB_ram_40010488)(iVar1,0,uVar2);
    thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x5c));
  }
  thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x4c));
  thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x48));
  (*(code *)&SUB_ram_40010488)(param_1 + 0x48,0,0x34);
  return;
}

