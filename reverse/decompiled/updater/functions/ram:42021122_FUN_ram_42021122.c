
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42021122(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_ram_42020d22(iVar1);
  iVar2 = FUN_ram_42020d78();
  if (iVar2 == 0) {
    FUN_ram_4205179e(&DAT_ram_3fcb6754);
    _DAT_ram_3fcb6754 = 0;
  }
  thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 8));
  thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 0xc));
  thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 0x58));
  thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 0x5c));
  FUN_ram_42020eda(iVar1);
  thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 0x10));
  thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 0x54));
  FUN_ram_4202109a(iVar1,3);
  thunk_FUN_ram_40390608(iVar1);
  return 0;
}

