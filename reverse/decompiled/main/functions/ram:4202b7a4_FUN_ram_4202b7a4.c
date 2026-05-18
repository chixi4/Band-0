
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4202b7a4(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (*(code *)*_DAT_ram_3fcb6a44)();
  bVar2 = true;
  if (iVar1 != 0) {
    iVar1 = (*(code *)_DAT_ram_3fcb6a44[1])();
    bVar2 = *(int *)(_DAT_ram_3fcb6b8c + 0x4c) == iVar1;
  }
  return bVar2;
}

