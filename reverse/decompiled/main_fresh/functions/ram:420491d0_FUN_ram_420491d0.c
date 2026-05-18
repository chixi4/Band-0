
undefined4 FUN_ram_420491d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42049162();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
    thunk_FUN_ram_40390634();
  }
  return uVar1;
}

