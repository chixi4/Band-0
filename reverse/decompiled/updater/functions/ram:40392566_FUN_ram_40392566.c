
undefined4 FUN_ram_40392566(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40391d88(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x4c));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_40391c52();
    uVar2 = *(undefined4 *)(param_1 + iVar1 * 4 + 4);
  }
  return uVar2;
}

