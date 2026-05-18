
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42087618(void)

{
  int iVar1;
  
  if (*(byte *)(_DAT_ram_3fcc4014 + 0x94) == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcc4014 + 0x18);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcc4014 + 0x18,0x420752be,0);
                    /* WARNING: Could not recover jumptable at 0x4208768e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
              (_DAT_ram_3fcc4014 + 0x18,
               (uint)*(ushort *)(*(int *)(_DAT_ram_3fcc4014 + 0xe4) + 0x28) * 0x1e,0);
    return;
  }
  if (*(byte *)(_DAT_ram_3fcc4014 + 0x94) < 5) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcc4014 + 0x18);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcc4014 + 0x18,0x420752b4,0);
    FUN_ram_420874ce();
    return;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcc4014 + 0x18);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcc4014 + 0x18,0x420752be,0);
  FUN_ram_42091578();
  FUN_ram_4207a038(1,4,3,&DAT_ram_3c0fffcc);
  FUN_ram_42089514(&DAT_ram_3fcc4004,0,0xc800);
  if ((DAT_ram_3fcc42f6 & 1) == 0) {
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcfbc,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),0);
    *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 0;
    iVar1 = FUN_ram_4207fec0();
    if (iVar1 != 0) {
      FUN_ram_4208589e(0);
      return;
    }
  }
  else {
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcfa4,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),3);
    *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 3;
  }
  return;
}

