
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42094c42(void)

{
  int *piVar1;
  
  piVar1 = (int *)&DAT_ram_3fcdfd28;
  do {
    if (*piVar1 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&DAT_ram_3fcdfd44);
  return 0;
}

