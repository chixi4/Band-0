
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42032256(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_ram_42031998();
  bVar2 = false;
  if (iVar1 == 0) {
    bVar2 = true;
    if (*(int *)(_DAT_ram_3fcb6bb8 + 0x30) != 0) {
      bVar2 = *(short *)(_DAT_ram_3fcb6bb8 + 0x16) != 0;
    }
  }
  return bVar2;
}

