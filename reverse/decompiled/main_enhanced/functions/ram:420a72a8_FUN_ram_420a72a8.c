
undefined4 FUN_ram_420a72a8(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(*(code *)&SUB_ram_40010670)();
  if ((*piVar1 != 0x20) && (piVar1 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar1 != 0x68)) {
    piVar1 = (int *)(*(code *)&SUB_ram_40010670)();
    if (*piVar1 != 4) {
      return 0xffffffb2;
    }
    uVar2 = FUN_ram_420a729c(0xffffffb2);
    return uVar2;
  }
  return 0xffffffb0;
}

