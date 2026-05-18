
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420425e4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_ram_3fcb4f84 + 0xe4);
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,0x10004,2,0x3c07ff38);
    return;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1 + 0x304);
  FUN_ram_42033fd8(1,0x40,3,0x3c07e6fc,*(undefined4 *)(iVar1 + 0x300));
  *(undefined4 *)(iVar1 + 0x300) = 0;
  *(undefined1 *)(iVar1 + 0x2fa) = 0;
  FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0xd100);
  return;
}

