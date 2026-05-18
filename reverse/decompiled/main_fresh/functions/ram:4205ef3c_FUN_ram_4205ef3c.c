
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205ef3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_ram_4205e99c(iVar1);
  iVar2 = FUN_ram_4205ea04();
  if (iVar2 == 0) {
    FUN_ram_420534d0(&DAT_ram_3fcc5378);
    _DAT_ram_3fcc5378 = 0;
  }
  thunk_FUN_ram_40390634(*(undefined4 *)(iVar1 + 8));
  thunk_FUN_ram_40390634(*(undefined4 *)(iVar1 + 0xc));
  thunk_FUN_ram_40390634(*(undefined4 *)(iVar1 + 0x5c));
  thunk_FUN_ram_40390634(*(undefined4 *)(iVar1 + 0x60));
  FUN_ram_4205ebc6(iVar1);
  thunk_FUN_ram_40390634(*(undefined4 *)(iVar1 + 0x10));
  thunk_FUN_ram_40390634(*(undefined4 *)(iVar1 + 0x58));
  FUN_ram_4205eeb4(iVar1,3);
  FUN_ram_420977f2(*(undefined4 *)(iVar1 + 0x24));
  thunk_FUN_ram_40390634(iVar1);
  return 0;
}

