
void FUN_ram_420abafe(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_ram_42012b30();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_ram_420ac172(4);
    *puVar2 = &DAT_ram_3c0fb7ec;
    FUN_ram_420ac17e(puVar2,&DAT_ram_3c0fb7a0,0x4209bab6);
  }
  return;
}

