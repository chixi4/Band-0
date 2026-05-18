
void FUN_ram_420abb2e(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_ram_42012b56();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_ram_420ac172(4);
    *puVar2 = &DAT_ram_3c0fb800;
    FUN_ram_420ac17e(puVar2,&DAT_ram_3c0fb7d8,0x4209bada);
  }
  return;
}

