
undefined4 FUN_ram_42018e62(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_ram_420188b8();
  if (iVar1 == 0) {
    uVar2 = 0x105;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x2c);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    }
    **(int **)(iVar1 + 0x30) = iVar3;
    thunk_FUN_ram_40390608();
    uVar2 = 0;
  }
  return uVar2;
}

