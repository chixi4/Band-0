
void FUN_ram_40396eca(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40396966();
  for (iVar1 = (int)*(char *)(param_1 + 0x45); 0 < iVar1; iVar1 = (iVar1 + -1) * 0x1000000 >> 0x18)
  {
    if (*(int *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x24) == 0) break;
      iVar2 = FUN_ram_40398762(param_1 + 0x24);
    }
    else {
      iVar2 = FUN_ram_40396e48(param_1);
    }
    if (iVar2 != 0) {
      FUN_ram_403989c0();
    }
  }
  *(undefined1 *)(param_1 + 0x45) = 0xff;
  FUN_ram_40396994();
  FUN_ram_40396966();
  iVar1 = (int)*(char *)(param_1 + 0x44);
  while ((0 < iVar1 && (*(int *)(param_1 + 0x10) != 0))) {
    iVar2 = FUN_ram_40398762(param_1 + 0x10);
    if (iVar2 != 0) {
      FUN_ram_403989c0();
    }
    iVar1 = (iVar1 + -1) * 0x1000000 >> 0x18;
  }
  *(undefined1 *)(param_1 + 0x44) = 0xff;
  FUN_ram_40396994();
  return;
}

