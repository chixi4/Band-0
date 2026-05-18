
undefined1 FUN_ram_40392590(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40392566(*(undefined4 *)(param_1 + 0x74));
  if (iVar2 == param_1) {
    uVar1 = *(undefined1 *)(*(int *)(iVar2 + 0x74) + 0xb4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

