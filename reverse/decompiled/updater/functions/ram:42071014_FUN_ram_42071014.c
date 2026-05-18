
undefined4 FUN_ram_42071014(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)&SUB_ram_40010670)();
  if ((*piVar1 != 0x20) && (piVar1 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar1 != 0x68)) {
    piVar1 = (int *)(*(code *)&SUB_ram_40010670)();
    if (*piVar1 != 4) {
      return 0xffffffb2;
    }
    return 0xffff9780;
  }
  return 0xffffffb0;
}

