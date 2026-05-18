
int FUN_ram_420851f2(void)

{
  int iVar1;
  int iVar2;
  
  do {
    if ((uint)DAT_ram_3fcc3f76 <= (uint)DAT_ram_3fcc3f77) {
      return 0;
    }
    iVar2 = *(int *)((DAT_ram_3fcc3f77 + 0x3b8) * 4 + 0x3fcc3080);
    DAT_ram_3fcc3f77 = DAT_ram_3fcc3f77 + 1;
    iVar1 = FUN_ram_420794ea(*(undefined1 *)(iVar2 + 0xab));
  } while ((*(uint *)(iVar1 + 8) & 0x200) != 0);
  return iVar2;
}

