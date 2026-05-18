
void FUN_ram_4205a99e(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_ram_3fcc2578;
  iVar2 = 0;
  do {
    if ((puVar1[0x14] != '\0') && (*(int *)(puVar1 + 8) == param_1)) {
      FUN_ram_4205a6a6(iVar2);
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x18;
  } while (iVar2 != 10);
  return;
}

