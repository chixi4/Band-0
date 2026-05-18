
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40396994(void)

{
  undefined1 *puVar1;
  undefined1 *extraout_a5;
  
  puVar1 = &DAT_ram_3fcc5000;
  if (_DAT_ram_3fcc4eb0 == 0) {
    FUN_ram_4039685c();
    puVar1 = extraout_a5;
  }
  if (*(int *)(puVar1 + -0x150) != 0) {
    *(int *)(puVar1 + -0x150) = *(int *)(puVar1 + -0x150) + -1;
    if (*(int *)(puVar1 + -0x150) == 0) {
      FUN_ram_40396956(_DAT_ram_3fcc4eac);
      return;
    }
  }
  return;
}

