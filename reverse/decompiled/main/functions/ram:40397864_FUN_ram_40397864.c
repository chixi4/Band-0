
undefined4 * FUN_ram_40397864(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_40396aa0(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    FUN_ram_40396d00(puVar1 + 1);
    *(undefined1 *)(puVar1 + 6) = 0;
  }
  return puVar1;
}

