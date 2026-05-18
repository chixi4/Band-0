
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208ab4c(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_ram_3fcc4014 + 0xe4);
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,0x10004,2,&DAT_ram_3c102060);
    return;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1 + 0x304);
  FUN_ram_4207a038(1,0x40,3,&DAT_ram_3c10022c,*(undefined4 *)(iVar1 + 0x300));
  *(undefined4 *)(iVar1 + 0x300) = 0;
  *(undefined1 *)(iVar1 + 0x2fa) = 0;
  FUN_ram_42089514(&DAT_ram_3fcc4004,0,0xd100);
  return;
}

