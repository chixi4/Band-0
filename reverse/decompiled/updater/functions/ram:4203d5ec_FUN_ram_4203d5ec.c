
int FUN_ram_4203d5ec(void)

{
  int iVar1;
  int iVar2;
  
  do {
    if ((uint)DAT_ram_3fcb4ee6 <= (uint)DAT_ram_3fcb4ee7) {
      return 0;
    }
    iVar2 = *(int *)((DAT_ram_3fcb4ee7 + 0x3b8) * 4 + 0x3fcb3ff0);
    DAT_ram_3fcb4ee7 = DAT_ram_3fcb4ee7 + 1;
    iVar1 = FUN_ram_42033ada(*(undefined1 *)(iVar2 + 0xab));
  } while ((*(uint *)(iVar1 + 8) & 0x200) != 0);
  return iVar2;
}

