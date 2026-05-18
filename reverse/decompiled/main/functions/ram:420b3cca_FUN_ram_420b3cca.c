
undefined4 FUN_ram_420b3cca(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1 == 0) {
    puVar1 = &DAT_ram_3fcc5258;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    puVar1 = &DAT_ram_3fcc5254;
  }
  iVar2 = FUN_ram_403917ec(puVar1);
  if (iVar2 != -1) {
    return 0;
  }
  return 0x107;
}

