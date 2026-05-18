
undefined4 * FUN_ram_40395afe(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_40394eda(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    FUN_ram_40395112(puVar1 + 1);
    *(undefined1 *)(puVar1 + 6) = 0;
  }
  return puVar1;
}

