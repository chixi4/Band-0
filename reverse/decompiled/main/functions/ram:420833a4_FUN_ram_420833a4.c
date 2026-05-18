
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420833a4(void)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)&DAT_ram_3fcc3048;
  do {
    if (*piVar1 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(*piVar1 + 0x4c);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(*piVar1 + 0x4c);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(*piVar1 + 0x60);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(*piVar1 + 0x60);
      pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0xb0);
      *(undefined4 *)(*piVar1 + 8) = 0;
      (*pcVar2)();
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&DAT_ram_3fcc3054);
  return;
}

