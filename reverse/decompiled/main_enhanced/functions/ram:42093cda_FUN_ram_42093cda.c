
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42093cda(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(_DAT_ram_3ff4fbbc + param_1 * 0x28);
  if (*(char *)((int)puVar1 + 0x12) != '\0') {
    return *puVar1;
  }
  return 0;
}

