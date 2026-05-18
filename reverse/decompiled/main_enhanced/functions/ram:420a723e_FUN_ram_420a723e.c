
undefined4 FUN_ram_420a723e(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(*(code *)&SUB_ram_40010670)();
  if ((*piVar1 != 0x20) && (piVar1 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar1 != 0x68)) {
    piVar1 = (int *)(*(code *)&SUB_ram_40010670)();
    if (*piVar1 != 4) {
      return 0xffffffb4;
    }
    uVar2 = FUN_ram_420a7232(0xffffffb4);
    return uVar2;
  }
  return 0xffffffb0;
}

