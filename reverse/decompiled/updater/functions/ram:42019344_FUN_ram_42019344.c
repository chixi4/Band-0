
undefined4 FUN_ram_42019344(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_420192d6();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
    thunk_FUN_ram_40390608();
  }
  return uVar1;
}

