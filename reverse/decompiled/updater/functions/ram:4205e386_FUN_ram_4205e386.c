
void FUN_ram_4205e386(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_42064b7c();
  if (*(int *)(iVar1 + 0x1f0) == 0x400000) {
    if (*(int *)(iVar1 + 0x330) != 0) {
      FUN_ram_4206587c();
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    FUN_ram_4205ea1a(*(undefined4 *)(iVar1 + 0x328));
    *(undefined4 *)(iVar1 + 0x328) = 0;
  }
  return;
}

