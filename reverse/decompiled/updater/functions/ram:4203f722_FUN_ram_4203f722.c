
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203f722(void)

{
  int iVar1;
  
  if (*(byte *)(_DAT_ram_3fcb4f84 + 0x94) == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcb4f84 + 0x18);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcb4f84 + 0x18,0x4202d6b8,0);
                    /* WARNING: Could not recover jumptable at 0x4203f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
              (_DAT_ram_3fcb4f84 + 0x18,
               (uint)*(ushort *)(*(int *)(_DAT_ram_3fcb4f84 + 0xe4) + 0x28) * 0x1e,0);
    return;
  }
  if (*(byte *)(_DAT_ram_3fcb4f84 + 0x94) < 5) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcb4f84 + 0x18);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcb4f84 + 0x18,0x4202d6ae,0);
    FUN_ram_4203f5d8();
    return;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcb4f84 + 0x18);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcb4f84 + 0x18,0x4202d6b8,0);
  FUN_ram_42048b70();
  FUN_ram_42033fd8(1,4,3,0x3c07e5a4);
  FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0xc800);
  if ((DAT_ram_3fcb526a & 1) == 0) {
    FUN_ram_42033fd8(1,4,4,0x3c07bb4c,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),0);
    *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 0;
    iVar1 = FUN_ram_420399ec();
    if (iVar1 != 0) {
      FUN_ram_4203dc98(0);
      return;
    }
  }
  else {
    FUN_ram_42033fd8(1,4,4,0x3c07bb34,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),3);
    *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 3;
  }
  return;
}

